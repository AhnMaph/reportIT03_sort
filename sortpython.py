import time

def sort_file(filename):
  with open(filename, "r") as f:
    lines = f.readlines()
  lines.sort()
  return lines

def main():
  filename = input()

  start_time = time.time()
  lines = sort_file(filename)
  end_time = time.time()

  execution_time = (end_time - start_time) * 1000  # ms

  print(f"Thời gian thực hiện: {execution_time} ms")
  print("-" * 20)
  for line in lines:
    print(line.strip())

if __name__ == "__main__":
  main()
