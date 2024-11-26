def ip_to_binary(ip):

    octets = ip.split('.')

    binary_octets = [format(int(octet), '08b') for octet in octets]

    return '.'.join(binary_octets)

 

def binary_to_ip(binary_ip):

    binary_octets = binary_ip.split('.')

    octets = [str(int(binary, 2)) for binary in binary_octets]

    return '.'.join(octets)

 

# ip_address = '10.140.64.1'

ip_address = input("Enter Decimal IP address: ")

binary_ip = ip_to_binary(ip_address)

print(f'Binary format: {binary_ip}')

 

# binary_ip_address = '00001010.10001100.01000000.00000001'

binary_ip_address = input("Enter Binary IP address: ")

decimal_ip = binary_to_ip(binary_ip_address)

print(f'Decimal format: {decimal_ip}')

