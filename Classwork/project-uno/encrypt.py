from ctypes import CDLL, c_char_p


def encrypt_str(my_str):

    # To use the custom C Library
    libPass = CDLL("./libxor.dll")

    # Creates a c and python cross-compatable string
    c_input = c_char_p(bytes(my_str, encoding="ascii"))

    # set type for result returned from c (string)
    libPass.test_encrypt.restype = c_char_p

    # set variable to the byte string returned from c func
    xored_str = libPass.test_encrypt(c_input)
    print(xored_str)

    return xored_str  # xored_string


def decrypt_str(my_str):

    # To use the custom C Library
    libPass = CDLL("./libxor.dll")

    # Creates a c and python cross-compatable string
    c_input = c_char_p(my_str)

    # set type for result returned from c (string)
    libPass.test_decrypt.restype = c_char_p

    # set variable to the byte string returned from c func
    xored_str = libPass.test_decrypt(c_input)
    print(xored_str)

    return xored_str  # xored_string


def check_pass(p_entry, p_pass):

    # To use the custom C Library
    libPass = CDLL("./libxor.dll")

    # Creates a c and python cross-compatable strings
    c_p_pass = (p_pass)
    c_p_entry = (p_entry)

    # Gets the score total as an int
    result = bool(libPass.server_check_pass(c_p_entry, c_p_pass))
    return result


def my_test():
    entry = encrypt_str("blah")
    print(f"blah ===>> {entry}")
    check = decrypt_str(entry)
    print(f"{entry} ===>> {check}")


def testing_pass():
    entry = encrypt_str("test")
    password = encrypt_str("badthings")
    print(check_pass(entry, password))


# testing_pass()
# my_test()
