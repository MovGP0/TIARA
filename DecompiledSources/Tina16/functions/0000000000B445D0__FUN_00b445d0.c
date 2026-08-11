/* Ghidra address: 00b445d0 */
/* Ghidra symbol: FUN_00b445d0 */


void FUN_00b445d0(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004b6da0(*(undefined8 *)(param_1 + 0xe8));
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  FUN_004b6dc0(*(undefined8 *)(param_1 + 0xe8),(longlong)*(int *)(param_1 + 0x4c));
  FUN_00b25870(*(undefined8 *)(param_1 + 0xe8),*(undefined4 *)(param_1 + 0x34));
  FUN_004b6dc0(*(undefined8 *)(param_1 + 0xe8),(longlong)*(int *)(param_1 + 0x3c));
  FUN_004b6dc0(*(undefined8 *)(param_1 + 0xe8),(longlong)*(int *)(param_1 + 0x54));
  FUN_00b25870(*(undefined8 *)(param_1 + 0xe8),*(undefined4 *)(param_1 + 0x30));
  FUN_004b6dc0(*(undefined8 *)(param_1 + 0xe8),(longlong)*(int *)(param_1 + 0x3c));
  return;
}

