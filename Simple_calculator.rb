def calculator(x, y)
  multiple = x * y
  plus = x + y
  minus = x - y
  div = x / y 

  {
    "multiple" => multiple,
    "plus" => plus,
    "minus" => minus,
    "division" => div
  }
end

puts("Enter to number X: ")
x = gets.chomp.to_f
puts("Enter to number Y: ")
y = gets.chomp.to_f

result = calculator(x, y)

puts("Additional: " + result["plus"].to_s)
puts("Subtract: " + result["minus"].to_s)
puts("Multiplication: " + result["multiple"].to_s)
puts("Division: " + result["division"].to_s)
