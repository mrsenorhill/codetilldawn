require 'launchy'

puts "What is your name?"
name = gets.chomp.capitalize
password = "The Password is ABC"

if name == "Gregory" 
	Launchy.open("http://medium.com/@mrsenorhill")
elsif name == "Andrew"
	Launchy.open("http://twitter.com/desertdiver")
else puts "Sorry I don't know a " + name.upcase
	puts "I need you to prove your identity."
	puts "What is 2+2?"
	answer = gets.chomp

if answer == "4"
	puts "Nice, " + name.downcase + " It's time for you to register!"
	puts "What is your twitter handle?"
	newreg = gets.chomp
	newregtwit = "http://twitter.com/"+newreg
	Launchy.open(newregtwit)

elsif answer == "42"
	puts "No, " + name.upcase + " but you've found the meaning of life."
else puts "Nope, you're wrong!"
end
end
