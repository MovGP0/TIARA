/* Ghidra address: 00b43d30 */
/* Ghidra symbol: FUN_00b43d30 */


void FUN_00b43d30(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  *(undefined1 *)(param_1 + 0x5b) = 1;
  FUN_00b25840(*(undefined8 *)(param_1 + 0xe8),0xf);
  FUN_00b25840(*(undefined8 *)(param_1 + 0xe8),0xf002);
  uVar1 = FUN_004b6da0(*(undefined8 *)(param_1 + 0xe8));
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  FUN_00b25870(*(undefined8 *)(param_1 + 0xe8),0);
  uVar1 = FUN_004b6da0(*(undefined8 *)(param_1 + 0xe8));
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  FUN_00b25840(*(undefined8 *)(param_1 + 0xe8),0x10);
  FUN_00b25840(*(undefined8 *)(param_1 + 0xe8),0xf008);
  FUN_00b25870(*(undefined8 *)(param_1 + 0xe8),8);
  iVar2 = FUN_00b41f80(*(undefined8 *)(param_1 + 0xe0));
  FUN_00b25870(*(undefined8 *)(param_1 + 0xe8),iVar2 + 1);
  uVar1 = FUN_00b41d20(*(undefined8 *)(*(longlong *)(param_1 + 0xe0) + 0x18),
                       *(undefined4 *)(param_1 + 0xf0));
  FUN_00b25870(*(undefined8 *)(param_1 + 0xe8),uVar1);
  FUN_00b25840(*(undefined8 *)(param_1 + 0xe8),0xf);
  FUN_00b25840(*(undefined8 *)(param_1 + 0xe8),0xf003);
  uVar1 = FUN_004b6da0(*(undefined8 *)(param_1 + 0xe8));
  *(undefined4 *)(param_1 + 0x4c) = uVar1;
  FUN_00b25870(*(undefined8 *)(param_1 + 0xe8),0);
  uVar1 = FUN_004b6da0(*(undefined8 *)(param_1 + 0xe8));
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  FUN_00b25840(*(undefined8 *)(param_1 + 0xe8),0xf);
  FUN_00b25840(*(undefined8 *)(param_1 + 0xe8),0xf004);
  FUN_00b25870(*(undefined8 *)(param_1 + 0xe8),0x28);
  FUN_00b25840(*(undefined8 *)(param_1 + 0xe8),1);
  FUN_00b25840(*(undefined8 *)(param_1 + 0xe8),0xf009);
  FUN_00b25870(*(undefined8 *)(param_1 + 0xe8),0x10);
  FUN_0040d200(param_1 + 0x5c,0x10,0);
  FUN_00b258a0(*(undefined8 *)(param_1 + 0xe8),param_1 + 0x5c,0x10);
  FUN_00b25840(*(undefined8 *)(param_1 + 0xe8),2);
  FUN_00b25840(*(undefined8 *)(param_1 + 0xe8),0xf00a);
  FUN_00b25870(*(undefined8 *)(param_1 + 0xe8),8);
  FUN_00b25870(*(undefined8 *)(param_1 + 0xe8),(*(int *)(param_1 + 0xf0) + 1) * 0x400);
  FUN_00b25870(*(undefined8 *)(param_1 + 0xe8),5);
  return;
}

