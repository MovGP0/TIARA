/* Ghidra address: 004b7250 */
/* Ghidra symbol: FUN_004b7250 */


longlong FUN_004b7250(longlong *param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = 0;
  for (; 0x1fffffff < (longlong)param_4; param_4 = param_4 - 0x20000000) {
    iVar1 = (**(code **)(*param_1 + 0x20))(param_1,param_2 + param_3,0x20000000);
    lVar2 = lVar2 + iVar1;
    param_3 = param_3 + 0x20000000;
  }
  if (0 < (longlong)param_4) {
    iVar1 = (**(code **)(*param_1 + 0x20))(param_1,param_2 + param_3,param_4 & 0xffffffff);
    lVar2 = lVar2 + iVar1;
  }
  return lVar2;
}

