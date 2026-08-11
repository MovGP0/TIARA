/* Ghidra address: 00c2dcd0 */
/* Ghidra symbol: FUN_00c2dcd0 */


undefined8 FUN_00c2dcd0(longlong param_1,char param_2)

{
  undefined8 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x10) + -1;
  if (-1 < iVar2) {
    do {
      puVar1 = (undefined8 *)FUN_004aeac0(param_1,iVar2);
      if (*(char *)(puVar1 + 1) == param_2) {
        return *puVar1;
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != -1);
  }
  return 0;
}

