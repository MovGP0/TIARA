/* Ghidra address: 005dbae0 */
/* Ghidra symbol: FUN_005dbae0 */


uint FUN_005dbae0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  iVar3 = 0;
  if (param_2 != 0) {
    iVar3 = *(int *)(param_2 + -4);
  }
  iVar1 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar2 = (uVar2 * 4 | uVar2 >> 0x1e) ^ (uint)*(ushort *)(param_2 + (longlong)iVar1 * 2);
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return uVar2;
}

