/* Ghidra address: 0154f8e0 */
/* Ghidra symbol: FUN_0154f8e0 */


int FUN_0154f8e0(undefined8 param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  undefined8 *puVar4;
  undefined8 local_94;
  
  puVar4 = &local_94;
  for (lVar2 = 0xf; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *param_2;
    param_2 = param_2 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = *(undefined4 *)param_2;
  iVar1 = 1;
  piVar3 = (int *)((longlong)&local_94 + 4);
  do {
    if (*piVar3 == param_3) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar1 != 0x1f);
  return -1;
}

