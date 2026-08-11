/* Ghidra address: 00e76d30 */
/* Ghidra symbol: FUN_00e76d30 */


void FUN_00e76d30(longlong param_1,undefined8 param_2,undefined4 param_3,longlong param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 local_30;
  
  uVar2 = FUN_01b05600(param_2,*(undefined1 *)(param_4 + 0x22f));
  *(undefined4 *)(param_4 + 0x24) = uVar2;
  uVar2 = FUN_01b05600(param_2,*(undefined1 *)(param_4 + 0x22e));
  *(undefined4 *)(param_4 + 0x20) = uVar2;
  uVar2 = FUN_01b05600(param_2,*(undefined1 *)(param_4 + 0x230));
  *(undefined4 *)(param_4 + 0x28) = uVar2;
  uVar2 = FUN_01b05600(param_2,*(undefined1 *)(param_4 + 0x231));
  *(undefined4 *)(param_4 + 0x2c) = uVar2;
  uVar2 = FUN_01b05600(param_2,*(undefined1 *)(param_4 + 0x232));
  *(undefined4 *)(param_4 + 0x30) = uVar2;
  local_30 = FUN_00498310(*(undefined4 *)(param_4 + 0x24),*(undefined4 *)(param_1 + 8));
  uVar1 = FUN_017dcbd0(param_1,&local_30,param_3,0);
  *(undefined8 *)(param_4 + 0x38) = uVar1;
  local_30 = FUN_00498310(*(undefined4 *)(param_4 + 0x2c),*(undefined4 *)(param_1 + 8));
  uVar1 = FUN_017dcbd0(param_1,&local_30,param_3,0);
  *(undefined8 *)(param_4 + 0x40) = uVar1;
  local_30 = FUN_00498310(*(undefined4 *)(param_4 + 0x30),*(undefined4 *)(param_1 + 8));
  uVar1 = FUN_017dcbd0(param_1,&local_30,param_3,0);
  *(undefined8 *)(param_4 + 0x48) = uVar1;
  return;
}

