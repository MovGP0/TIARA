/* Ghidra address: 00f470c0 */
/* Ghidra symbol: FUN_00f470c0 */


longlong FUN_00f470c0(longlong param_1,int param_2,int param_3)

{
  char cVar1;
  longlong lVar2;
  int local_30;
  int local_2c;
  
  local_30 = param_2;
  local_2c = param_3;
  cVar1 = FUN_00b958b0(param_1 + 0x10,&local_30);
  if (cVar1 == '\0') {
    lVar2 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x28) +
            (longlong)
            (*(int *)(param_1 + 0x20) * ((param_3 - *(int *)(param_1 + 0x14)) / 8) +
            (param_2 - *(int *)(param_1 + 0x10)) / 8);
  }
  return lVar2;
}

