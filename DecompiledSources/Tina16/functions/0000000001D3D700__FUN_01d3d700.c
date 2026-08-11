/* Ghidra address: 01d3d700 */
/* Ghidra symbol: FUN_01d3d700 */


int FUN_01d3d700(byte *param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  
  iVar2 = 0;
  puVar3 = &DAT_01ffb148;
  do {
    iVar1 = FUN_00414f50(param_1,puVar3,(ulonglong)*param_1 + 1);
    if (iVar1 == 0) {
      return iVar2;
    }
    iVar2 = iVar2 + 1;
    puVar3 = puVar3 + 0xb;
  } while (iVar2 != 4);
  return -1;
}

