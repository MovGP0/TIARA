/* Ghidra address: 00a4a530 */
/* Ghidra symbol: FUN_00a4a530 */


ulonglong FUN_00a4a530(ulonglong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  iVar1 = (&DAT_0201382c)[param_1 & 0xff];
  if (iVar1 < 0) {
    uVar3 = CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
  }
  else {
    lVar2 = (**(code **)(*DAT_02013818 + 0x30))(DAT_02013818,iVar1);
    uVar3 = (ulonglong)*(byte *)(lVar2 + 9);
  }
  return uVar3;
}

