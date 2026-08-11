/* Ghidra address: 00b2df90 */
/* Ghidra symbol: FUN_00b2df90 */


void FUN_00b2df90(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x3c);
  iVar3 = *(int *)(param_1 + 0x34);
  if (0 < iVar3) {
    do {
      *(int *)(param_1 + 0x38) =
           *(int *)(param_1 + 0x38) - *(int *)(*(longlong *)(param_1 + 0x40) + 0x1b);
      if (*(int *)(param_1 + 0x38) < 0) {
        return;
      }
      uVar2 = FUN_004aeac0(*(undefined8 *)
                            (*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x60) + 0x28),
                           *(undefined4 *)(param_1 + 0x38));
      *(undefined8 *)(param_1 + 0x28) = uVar2;
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x1b);
      piVar1 = (int *)(*(longlong *)(param_1 + 0x48) + 0x1b);
      *piVar1 = *piVar1 + *(int *)(param_1 + 0x24);
      *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x28);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

