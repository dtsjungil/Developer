from multiprocessing import Process
import os

def foo():
    print('foo: child process: ', os.getpid())
    print('foo: parent process: ',os.getppid())

if __name__ == '__main__':
    print('parent process', os.getpid())
    child1 = Process(target=foo).start()
    child2 = Process(target=foo).start()
    child3 = Process(target=foo).start()
