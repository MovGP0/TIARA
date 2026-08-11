/* Ghidra address: 015b1180 */
/* Ghidra symbol: FUN_015b1180 */


void FUN_015b1180(longlong *param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  int local_res18 [2];
  undefined8 local_res20;
  undefined1 auStack_58 [32];
  undefined1 local_38 [40];
  
  local_res18[0] = param_3;
  local_res20 = param_4;
  FUN_015adb90(param_1,local_res18);
  if (local_res18[0] < 0x11) {
    *(undefined4 *)(param_1 + 0x11) = 10;
  }
  else if (local_res18[0] < 0x19) {
    *(undefined4 *)(param_1 + 0x11) = 0xc;
  }
  else {
    *(undefined4 *)(param_1 + 0x11) = 0xe;
  }
  FUN_0040d200(local_38,0x20,0);
  FUN_00409a70(param_2,local_38,(longlong)local_res18[0]);
  FUN_015b0d50(auStack_58);
  FUN_015b1040(auStack_58);
  FUN_0040d200(local_38,0x20,0);
  (**(code **)(*param_1 + 0x40))(param_1,local_res20);
  return;
}

