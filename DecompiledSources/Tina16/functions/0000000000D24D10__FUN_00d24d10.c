/* Ghidra address: 00d24d10 */
/* Ghidra symbol: FUN_00d24d10 */


void FUN_00d24d10(longlong *param_1,undefined8 param_2,int param_3,undefined8 param_4,char param_5)

{
  int local_res18 [4];
  undefined1 auStack_38 [40];
  
  local_res18[0] = param_3;
  FUN_00d21150(param_1,local_res18);
  *(char *)((longlong)param_1 + 0x7c) = param_5;
  if (param_5 == '\0') {
    if (local_res18[0] < 6) {
      *(undefined1 *)((longlong)param_1 + 0x7c) = 1;
    }
    else if (local_res18[0] < 9) {
      *(undefined1 *)((longlong)param_1 + 0x7c) = 2;
    }
    else {
      *(undefined1 *)((longlong)param_1 + 0x7c) = 3;
    }
  }
  else if (param_5 == '\x04') {
    if (local_res18[0] < 6) {
      *(undefined1 *)((longlong)param_1 + 0x7c) = 5;
    }
    else if (local_res18[0] < 9) {
      *(undefined1 *)((longlong)param_1 + 0x7c) = 6;
    }
    else {
      *(undefined1 *)((longlong)param_1 + 0x7c) = 7;
    }
  }
  FUN_00d242c0(param_1,(int)param_1[0xf]);
  FUN_00d24920(auStack_38);
  FUN_00d249a0(auStack_38);
  (**(code **)(*param_1 + 0x40))(param_1,param_4);
  return;
}

