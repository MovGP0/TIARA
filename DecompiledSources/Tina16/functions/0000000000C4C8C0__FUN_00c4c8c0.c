/* Ghidra address: 00c4c8c0 */
/* Ghidra symbol: FUN_00c4c8c0 */


undefined8 FUN_00c4c8c0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_1 + 0x80) == -1) {
    FUN_00c4cc90(param_1);
  }
  iVar1 = *(int *)(param_1 + 0x80);
  if ((iVar1 < 0) || ((&DAT_02019c90)[iVar1] == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)(int3)((uint)iVar1 >> 8),1);
  }
  return uVar2;
}

