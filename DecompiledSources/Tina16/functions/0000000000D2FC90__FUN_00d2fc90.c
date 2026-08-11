/* Ghidra address: 00d2fc90 */
/* Ghidra symbol: FUN_00d2fc90 */


undefined8 * FUN_00d2fc90(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = *(undefined4 *)(param_2 + -4);
  }
  FUN_00415d10(param_1,uVar1,0);
  puVar3 = (undefined1 *)FUN_00415ab0(*param_1);
  iVar2 = 0;
  if (param_2 != 0) {
    iVar2 = *(int *)(param_2 + -4);
  }
  if (0 < iVar2) {
    do {
      *puVar3 = *(undefined1 *)(param_2 + -1 + (longlong)iVar2);
      puVar3 = puVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return param_1;
}

