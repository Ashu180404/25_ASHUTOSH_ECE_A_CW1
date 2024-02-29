def display_array(arr):
    print("Array:", end=" ")
    for num in arr:
        print(num, end=" ")
    print()

def linear_search(arr, key):
    for i, num in enumerate(arr):
        if num == key:
            return i  # Element found, return index
    return -1  # Element not found

def main():
    size = int(input("Enter the size of the array: "))
    arr = list(map(int, input("Enter the array elements separated by space: ").split()))

    display_array(arr)

    while True:
        print("\nMENU:")
        print("1. Search for an element")
        print("2. Edit an element")
        print("3. Exit")
        choice = int(input("Enter your choice: "))

        if choice == 1:
            search_key = int(input("Enter the element to search: "))
            search_result = linear_search(arr, search_key)
            if search_result != -1:
                print(f"Element {search_key} found at index {search_result}.")
            else:
                print(f"Element {search_key} not found in the array.")
        elif choice == 2:
            edit_index = int(input("Enter the index of the element to edit: "))
            if 0 <= edit_index < len(arr):
                new_value = int(input("Enter the new value: "))
                arr[edit_index] = new_value
                print("Element edited successfully.")
                display_array(arr)
            else:
                print("Invalid index. Edit failed.")
        elif choice == 3:
            print("Exiting program.")
            break
        else:
            print("Invalid choice. Please try again.")

if __name__ == "__main__":
    main()
