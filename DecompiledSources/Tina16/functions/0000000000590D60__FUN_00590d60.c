/* Ghidra address: 00590d60 */
/* Ghidra symbol: FUN_00590d60 */


undefined8 FUN_00590d60(undefined8 param_1,undefined8 param_2,longlong *param_3,longlong param_4)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_4 + 8);
  if (((ulonglong)pcVar1 & 0xff00000000000000) == 0xff00000000000000) {
    FUN_00414ff0(param_2,(longlong)param_3 + ((ulonglong)pcVar1 & 0xffffffffffffff));
  }
  else {
    if (((ulonglong)pcVar1 & 0xff00000000000000) == 0xfe00000000000000) {
      pcVar1 = *(code **)(*param_3 + ((ulonglong)pcVar1 & 0xffff));
    }
    if (*(int *)(param_4 + 0x20) == -0x80000000) {
      (*pcVar1)(param_3,param_2);
    }
    else {
      (*pcVar1)(param_3,param_2,*(int *)(param_4 + 0x20));
    }
  }
  return param_2;
}

