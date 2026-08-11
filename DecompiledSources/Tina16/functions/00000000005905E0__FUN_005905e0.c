/* Ghidra address: 005905e0 */
/* Ghidra symbol: FUN_005905e0 */


void FUN_005905e0(undefined8 param_1,longlong *param_2,longlong param_3,undefined4 param_4)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_3 + 0x10);
  if (((ulonglong)pcVar1 & 0xff00000000000000) == 0xff00000000000000) {
    *(short *)((longlong)param_2 + ((ulonglong)pcVar1 & 0xffffffffffffff)) = (short)param_4;
  }
  else {
    if (((ulonglong)pcVar1 & 0xff00000000000000) == 0xfe00000000000000) {
      pcVar1 = *(code **)(*param_2 + ((ulonglong)pcVar1 & 0xffff));
    }
    if (*(int *)(param_3 + 0x20) == -0x80000000) {
      (*pcVar1)(param_2,param_4);
    }
    else {
      (*pcVar1)(param_2,*(int *)(param_3 + 0x20),param_4);
    }
  }
  return;
}

