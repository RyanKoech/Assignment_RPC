struct input1 {
  int num;
};

struct input2 {
  int num;
  string text<>;
};

program TASK {
  version TASK_VER {
    int DOUBLIFY(input1) = 1;
    float BALANCE(input2) = 2;
  } = 1;
} = 0x2fffffff;