class Solution(object):
    def defangIPaddr(self, address):
        """
        :type address: str
        :rtype: str
        """
        new_address = ""
        for data in address:
            if data == ".":
                new_address += "[.]"
            else:
                new_address += data
        return new_address
    
class Solution(object):
    def defangIPaddr(self, address):
        """
        :type address: str
        :rtype: str
        """
        return address.replace(".","[.]")