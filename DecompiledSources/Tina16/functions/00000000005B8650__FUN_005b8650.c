/* Ghidra address: 005b8650 */
/* Ghidra symbol: FUN_005b8650 */


undefined8 * FUN_005b8650(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 *puVar3;
  
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = *(undefined4 *)(param_2 + -4);
  }
  FUN_004169f0(param_1,uVar1);
  puVar3 = (undefined2 *)FUN_00416740(*param_1);
  iVar2 = 0;
  if (param_2 != 0) {
    iVar2 = *(int *)(param_2 + -4);
  }
  if (0 < iVar2) {
    do {
      *puVar3 = *(undefined2 *)(param_2 + -2 + (longlong)iVar2 * 2);
      puVar3 = puVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return param_1;
}

