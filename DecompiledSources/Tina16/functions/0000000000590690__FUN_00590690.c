/* Ghidra address: 00590690 */
/* Ghidra symbol: FUN_00590690 */


ulonglong FUN_00590690(undefined8 param_1,longlong *param_2,longlong param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(param_3 + 8);
  if (((ulonglong)pcVar2 & 0xff00000000000000) == 0xff00000000000000) {
    uVar1 = (ulonglong)*(ushort *)((longlong)param_2 + ((ulonglong)pcVar2 & 0xffffffffffffff));
  }
  else {
    if (((ulonglong)pcVar2 & 0xff00000000000000) == 0xfe00000000000000) {
      pcVar2 = *(code **)(*param_2 + ((ulonglong)pcVar2 & 0xffff));
    }
    if (*(int *)(param_3 + 0x20) == -0x80000000) {
      uVar1 = (*pcVar2)(param_2);
    }
    else {
      uVar1 = (*pcVar2)(param_2,*(int *)(param_3 + 0x20));
    }
  }
  return uVar1;
}

