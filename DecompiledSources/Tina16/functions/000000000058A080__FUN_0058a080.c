/* Ghidra address: 0058a080 */
/* Ghidra symbol: FUN_0058a080 */


ulonglong FUN_0058a080(undefined8 param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  bVar1 = *param_3;
  if (*param_2 <= bVar1) {
    bVar1 = *param_2;
  }
  uVar5 = (uint)bVar1;
  iVar3 = 1;
  while( true ) {
    if (uVar5 == 0) {
      return (ulonglong)((uint)*param_2 - (uint)*param_3);
    }
    if ((param_2[iVar3] & 0x80) != 0 || (param_3[iVar3] & 0x80) != 0) break;
    uVar4 = (uint)(param_2[iVar3] & 0xdf) - (uint)(param_3[iVar3] & 0xdf);
    if (uVar4 != 0) {
      return (ulonglong)uVar4;
    }
    iVar3 = iVar3 + 1;
    uVar5 = uVar5 - 1;
  }
  uVar2 = FUN_0058a000();
  return uVar2;
}

