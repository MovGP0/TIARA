/* Ghidra address: 01bc9f80 */
/* Ghidra symbol: FUN_01bc9f80 */


void FUN_01bc9f80(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  (**(code **)(*param_1 + -0x38))(param_1,param_2);
  if (*(longlong *)(param_2 + 8) == 10) {
    uVar1 = FUN_0065b870(param_1);
    thunk_FUN_040dee27(uVar1,10);
    FUN_01bcb060(param_1);
    if ((param_1[0xb2] != 0) && (*(char *)(param_1[0xb2] + 0xa9) != '\0')) {
      (**(code **)(*(longlong *)param_1[0xb0] + 0x188))((longlong *)param_1[0xb0]);
    }
    if ((param_1[0xb3] != 0) && (*(char *)(param_1[0xb3] + 0xa9) != '\0')) {
      (**(code **)(*(longlong *)param_1[0xb1] + 0x188))((longlong *)param_1[0xb1]);
    }
  }
  return;
}

