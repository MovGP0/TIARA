/* Ghidra address: 01c98770 */
/* Ghidra symbol: FUN_01c98770 */


undefined8 FUN_01c98770(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x2780) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      puVar2 = (undefined8 *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x2780),iVar3);
      iVar1 = FUN_00416db0(*puVar2,param_2);
      if (iVar1 == 0) {
        return puVar2[2];
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return 0;
}

