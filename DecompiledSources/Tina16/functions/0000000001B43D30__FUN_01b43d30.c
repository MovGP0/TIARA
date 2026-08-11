/* Ghidra address: 01b43d30 */
/* Ghidra symbol: FUN_01b43d30 */


void FUN_01b43d30(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  FUN_00410f20(*(undefined8 *)(param_2 + 0x6d0));
  FUN_01b38b40(*(undefined8 *)(param_2 + 0x9f8),param_2 + 0x6c8);
  FUN_01b38b40(*(undefined8 *)(param_2 + 0x9f8),param_2 + 0x6c0);
  FUN_01b38ad0(*(undefined8 *)(param_2 + 0x6b8));
  iVar2 = *(int *)(*(longlong *)(param_2 + 0x6b8) + 0x10);
  *(undefined4 *)(param_2 + 0x6b0) = 0;
  if (*(int *)(param_2 + 0x6b0) <= iVar2 + -1) {
    do {
      uVar1 = FUN_004aeac0(*(undefined8 *)(param_2 + 0x6b8),*(undefined4 *)(param_2 + 0x6b0));
      FUN_00418590(uVar1,&DAT_00ea9440);
      *(int *)(param_2 + 0x6b0) = *(int *)(param_2 + 0x6b0) + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00410f20(*(undefined8 *)(param_2 + 0x6b8));
  FUN_004095f0(*(undefined8 *)(param_2 + 0x6c0));
  FUN_004095f0(*(undefined8 *)(param_2 + 0x6c8));
  FUN_00419430(param_2 + 0x6a8,&DAT_004066f0);
  FUN_00410f20(*(undefined8 *)(param_2 + 0x6a0));
  return;
}

