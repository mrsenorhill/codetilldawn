require 'rubygems'  
require 'serialport' # use Kernel::require on windows, works better.  

#params for serial port  
port_str = "/dev/tty.usbmodem621"  #may be different for you  
baud_rate = 9600  
data_bits = 8  
stop_bits = 1  
parity = SerialPort::NONE  

sp = SerialPort.new(port_str, baud_rate, data_bits, stop_bits, parity)  


puts "What's your name?"
name = gets.chomp.capitalize
if name == "Gregory"
sp.write("M")
elsif name =="Mario"
	sp.write("L")
else sp.write("O")
	end