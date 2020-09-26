import sqlite3
data = dict()

conn =sqlite3.connect('orgdb2.sqlite')
cur = conn.cursor()

cur.execute('DROP TABLE IF EXISTS Counts')

cur.execute('CREATE TABLE Counts (org TEXT, count INTEGER)')

fname = input('Enter file name: ')
if (len(fname)<1): fname = 'mbox-short.txt'
fh = open(fname)
for line in fh:
    if not line.startswith('From: '):continue
    pieces = line.split()
    email = pieces[1]
    pcs = email.split('@')
    organisations = pcs[1]
    cur.execute('SELECT count FROM Counts WHERE org = ?', (organisations,))
    row = cur.fetchone()
    data[organisations] = data.get(organisations, 0) + 1

for key, value in data.items():
    cur.execute('INSERT INTO Counts (org, count) VALUES (?, ?)', (key, value))
    conn.commit()

sqlstr = 'SELECT org,count FROM Counts ORDER BY count DESC'
for row in cur.execute(sqlstr):
    print(str(row[0]), row[1])

cur.close()
