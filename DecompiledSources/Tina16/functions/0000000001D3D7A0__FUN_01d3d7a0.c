/* Ghidra address: 01d3d7a0 */
/* Ghidra symbol: FUN_01d3d7a0 */


int FUN_01d3d7a0(byte *param_1)

{
  int iVar1;
  int unaff_ESI;
  int iVar2;
  undefined *puVar3;
  
  iVar2 = 0;
  puVar3 = &DAT_01ffb0a0;
  do {
    iVar1 = FUN_00414f50(param_1,puVar3,(ulonglong)*param_1 + 1);
    if (iVar1 == 0) {
      return iVar2;
    }
    iVar2 = iVar2 + 1;
    puVar3 = puVar3 + 0x15;
  } while (iVar2 != 8);
  return unaff_ESI;
}

