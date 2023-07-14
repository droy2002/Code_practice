def is_palindrome(string):
    # Remove any non-alphanumeric characters and convert to lowercase
    string = ''.join(char.lower() for char in string if char.isalnum())
    
    # Compare the string with its reverse
    return string == string[::-1]

input_string = input("Enter a string: ")
if is_palindrome(input_string):
    print("The string is a palindrome.")
else:
    print("The string is not a palindrome.")
