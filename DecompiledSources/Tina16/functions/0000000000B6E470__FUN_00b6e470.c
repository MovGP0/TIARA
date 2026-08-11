/* Ghidra address: 00b6e470 */
/* Ghidra symbol: FUN_00b6e470 */


void FUN_00b6e470(longlong *param_1,undefined8 param_2,undefined4 param_3,longlong param_4)

{
  FUN_00b6c020(param_1,param_2,param_3,param_4);
  (**(code **)(*param_1 + 0xf0))(param_1,param_2,param_3);
  if (param_4 == 0) {
    FUN_0040d200(param_1 + 0x11,8,0);
    (**(code **)(*param_1 + 0x110))(param_1,param_1 + 0x11,param_1 + 0x11);
    (**(code **)(*param_1 + 0xb8))(param_1);
  }
  else {
    FUN_00409a70(param_4,param_1 + 0x11,8);
    (**(code **)(*param_1 + 0xb8))(param_1);
  }
  return;
}

