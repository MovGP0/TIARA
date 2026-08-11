/* Ghidra address: 00591770 */
/* Ghidra symbol: FUN_00591770 */


undefined8 FUN_00591770(undefined8 param_1,longlong *param_2,longlong param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_3 + 8);
  if (((ulonglong)pcVar1 & 0xff00000000000000) == 0xff00000000000000) {
    uVar2 = *(undefined8 *)((longlong)param_2 + ((ulonglong)pcVar1 & 0xffffffffffffff));
  }
  else {
    if (((ulonglong)pcVar1 & 0xff00000000000000) == 0xfe00000000000000) {
      pcVar1 = *(code **)(*param_2 + ((ulonglong)pcVar1 & 0xffff));
    }
    if (*(int *)(param_3 + 0x20) == -0x80000000) {
      uVar2 = (*pcVar1)(param_2);
    }
    else {
      uVar2 = (*pcVar1)(param_2,*(int *)(param_3 + 0x20));
    }
  }
  return uVar2;
}

