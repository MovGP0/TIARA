/* Ghidra address: 00b19450 */
/* Ghidra symbol: FUN_00b19450 */


int FUN_00b19450(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(longlong *)(param_1 + 8) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      puVar2 = (undefined8 *)FUN_004aeac0(*(undefined8 *)(param_1 + 8),iVar3);
      iVar1 = FUN_00415a60(*puVar2,param_2);
      if (iVar1 == 0) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return -1;
}

