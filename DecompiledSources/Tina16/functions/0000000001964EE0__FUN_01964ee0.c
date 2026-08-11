/* Ghidra address: 01964ee0 */
/* Ghidra symbol: FUN_01964ee0 */


ulonglong FUN_01964ee0(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = (longlong)*(int *)(param_1 + 0x318) % 0x168;
  uVar3 = uVar1 & 0xffffffff;
  iVar2 = (int)uVar1;
  if (iVar2 < 0) {
    uVar3 = (ulonglong)(iVar2 + 0x168);
  }
  return uVar3;
}

