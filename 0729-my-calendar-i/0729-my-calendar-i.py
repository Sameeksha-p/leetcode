from sortedcontainers import SortedList
class MyCalendar:

    def __init__(self):
        self.calender=SortedList()

    def book(self, start: int, end: int) -> bool:
        self.calender.add((start,1))
        self.calender.add((end,-1))
        total=0
        for i,j in self.calender:
            total+=j
            
            if total==2:
                self.calender.remove((start,1))
                self.calender.remove((end,-1))
                return False
        return True
            


# Your MyCalendar object will be instantiated and called as such:
# obj = MyCalendar()
# param_1 = obj.book(start,end)