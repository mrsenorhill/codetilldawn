require 'rubygems'
require 'twitter'

Twitter.configure do |config|
  config.consumer_key = "6osN4g2QGPLz3QQ1bR9uUQ"
  config.consumer_secret = "ynB6xAUfyJvy74khUZxRQ2RgQZRc6plrHu84T3JY"
  config.oauth_token = "1714396999-Ytql3fQGb4iIbSCXI8a9tl52s8UsnqCNvwQXcDB"
  config.oauth_token_secret = "DnaFYhPYed9PzGrFLxvnUMe0JJ2EIj1x09Ha0j6Zs"
end

require 'launchy'

puts "What is your name?"
name = gets.chomp.capitalize
password = "The Password is ABC"

if name == "Gregory" 
Twitter.update("Gregory Is Here!")
elsif name == "Andrew"
Twitter.update("Andrew Is Here!")
else puts "Sorry I don't know a " + name.upcase
	puts "I need you to prove your identity."
	puts "What is 2+2?"
	answer = gets.chomp

if answer == "4"
	puts "Nice, " + name.downcase + " It's time for you to register!"
	puts "What is your twitter handle?"
	newreg = gets.chomp
	newregtwit = "@"+newreg
	Twitter.update("Hello " + newregtwit + " woo! Ruby is awesome!")



elsif answer == "42"
	puts "No, " + name.upcase + " but you've found the meaning of life."
else puts "Nope, you're wrong!"
end
end

