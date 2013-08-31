require 'rubygems'
require 'sqlite3'
db = SQLite3::Database.new('sp500-data.sqlite')
results = db.execute("SELECT * from companies;")