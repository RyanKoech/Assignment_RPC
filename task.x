struct input1 {
  int num;
};

struct input2 {
  int num;
  string text<>;
};

struct input3 {
  int *num;
};

struct to_string_res {
    string data<>;
};

program TASK {
  version TASK_VER {
    int DOUBLIFY(input1) = 1;
    float BALANCE(input2) = 2;
    to_string_res TO_STRING(input3) = 3;
  } = 1;
} = 0x2fffffff;