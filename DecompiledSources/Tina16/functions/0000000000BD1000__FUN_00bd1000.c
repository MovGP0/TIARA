/* Ghidra address: 00bd1000 */
/* Ghidra symbol: FUN_00bd1000 */


void FUN_00bd1000(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  if ((0 < *(int *)(param_1 + 0xc)) &&
     (*(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1, *(int *)(param_1 + 0xc) == 0)) {
    iVar1 = *(int *)(param_1 + 8);
    *(undefined4 *)(param_1 + 8) = 0;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    if (*(int *)(param_1 + 0x28) == 0) {
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    }
    if (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x10)) {
      lVar2 = FUN_00bd10f0(param_1);
      if ((*(int *)(lVar2 + 0x28) == iVar1) && (*(longlong *)(param_1 + 0x38) != 0)) {
        (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40),param_1);
      }
    }
  }
  return;
}

