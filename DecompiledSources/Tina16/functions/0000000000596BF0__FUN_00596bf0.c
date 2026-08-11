/* Ghidra address: 00596bf0 */
/* Ghidra symbol: FUN_00596bf0 */


int FUN_00596bf0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined1 auStack_48 [32];
  
  if (param_1[5] == 0) {
    puVar4 = (undefined8 *)*param_1;
    iVar1 = *(int *)(param_1 + 1);
    iVar3 = 0;
    if (-1 < iVar1 + -1) {
      do {
        iVar2 = FUN_00416db0(*puVar4,*param_2);
        if (iVar2 == 0) {
          return iVar3;
        }
        puVar4 = puVar4 + 1;
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    iVar1 = -1;
  }
  else {
    iVar1 = FUN_00596b70(auStack_48,param_2);
  }
  return iVar1;
}

