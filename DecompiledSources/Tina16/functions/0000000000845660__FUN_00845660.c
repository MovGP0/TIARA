/* Ghidra address: 00845660 */
/* Ghidra symbol: FUN_00845660 */


void FUN_00845660(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_00841dd0(*(undefined8 *)(param_1 + 0xd0),param_1 + 0x50,*(undefined4 *)(param_1 + 0x5c),
               *(undefined4 *)(param_1 + 0x94));
  *(int *)(param_1 + 0x48) = *(int *)(*(longlong *)(param_1 + 0xd0) + 0x4a4) + -1;
  *(int *)(param_1 + 0x4c) = *(int *)(*(longlong *)(param_1 + 0xd0) + 0x4e0) + -1;
  uVar1 = FUN_00842050(*(undefined8 *)(param_1 + 0xd0),param_1 + 0x48,param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  return;
}

