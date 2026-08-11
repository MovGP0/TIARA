/* Ghidra address: 0058a400 */
/* Ghidra symbol: FUN_0058a400 */


ulonglong FUN_0058a400(longlong *param_1,longlong param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  
  if ((*(ulonglong *)(param_2 + 0x18) & 0xffffffffffffff00) == 0) {
    uVar1 = *(ulonglong *)(param_2 + 0x18) & 0xff;
  }
  else {
    pcVar2 = *(code **)(param_2 + 0x18);
    if (((ulonglong)pcVar2 & 0xff00000000000000) == 0xff00000000000000) {
      uVar1 = (ulonglong)*(byte *)((longlong)param_1 + ((ulonglong)pcVar2 & 0xffffffffffffff));
    }
    else {
      if (((ulonglong)pcVar2 & 0xff00000000000000) == 0xfe00000000000000) {
        pcVar2 = *(code **)(*param_1 + ((ulonglong)pcVar2 & 0xffff));
      }
      if (*(int *)(param_2 + 0x20) == -0x80000000) {
        uVar1 = (*pcVar2)(param_1);
      }
      else {
        uVar1 = (*pcVar2)(param_1,*(int *)(param_2 + 0x20));
      }
    }
  }
  return uVar1;
}

