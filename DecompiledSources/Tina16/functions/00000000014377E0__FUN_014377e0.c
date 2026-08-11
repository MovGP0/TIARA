/* Ghidra address: 014377e0 */
/* Ghidra symbol: FUN_014377e0 */


void FUN_014377e0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  
  FUN_00b0a890(*(undefined8 *)(param_1 + 0x6b0));
  if (*(longlong *)(param_1 + 0x710) == 0) {
    uVar1 = FUN_01d0efe0(&DAT_01d0ae90,1);
    *(undefined8 *)(param_1 + 0x710) = uVar1;
  }
  else {
    FUN_01d0f160();
  }
  iVar3 = *(int *)(param_1 + 0x718);
  if (-1 < iVar3 + -1) {
    puVar2 = &DAT_0210c580;
    do {
      FUN_01d0f0e0(*(undefined8 *)(param_1 + 0x710),*puVar2);
      puVar2 = puVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *(undefined2 *)(param_1 + 0x708) = *(undefined2 *)(param_1 + 0x718);
  return;
}

