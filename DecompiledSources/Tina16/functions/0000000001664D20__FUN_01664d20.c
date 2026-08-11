/* Ghidra address: 01664d20 */
/* Ghidra symbol: FUN_01664d20 */


void FUN_01664d20(longlong param_1,undefined8 param_2,undefined4 param_3,longlong param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 local_30;
  
  uVar2 = FUN_01b05600(param_2,*(undefined1 *)(param_4 + 0x596));
  *(undefined4 *)(param_4 + 0x20) = uVar2;
  uVar2 = FUN_01b05600(param_2,*(undefined1 *)(param_4 + 0x597));
  *(undefined4 *)(param_4 + 0x24) = uVar2;
  uVar2 = FUN_01b05600(param_2,*(undefined1 *)(param_4 + 0x598));
  *(undefined4 *)(param_4 + 0x28) = uVar2;
  uVar2 = FUN_01b05600(param_2,*(undefined1 *)(param_4 + 0x599));
  *(undefined4 *)(param_4 + 0x2c) = uVar2;
  uVar2 = FUN_01b05600(param_2,*(undefined1 *)(param_4 + 0x59a));
  *(undefined4 *)(param_4 + 0x30) = uVar2;
  uVar2 = FUN_01b05600(param_2,*(undefined1 *)(param_4 + 0x59b));
  *(undefined4 *)(param_4 + 0x34) = uVar2;
  uVar2 = FUN_01b05600(param_2,*(undefined1 *)(param_4 + 0x59c));
  *(undefined4 *)(param_4 + 0x38) = uVar2;
  local_30 = FUN_00498310(*(undefined4 *)(param_4 + 0x24),*(undefined4 *)(param_1 + 8));
  uVar1 = FUN_017dcbd0(param_1,&local_30,param_3,0);
  *(undefined8 *)(param_4 + 0x2a0) = uVar1;
  local_30 = FUN_00498310(*(undefined4 *)(param_4 + 0x2c),*(undefined4 *)(param_1 + 8));
  uVar1 = FUN_017dcbd0(param_1,&local_30,param_3,0);
  *(undefined8 *)(param_4 + 0x2a8) = uVar1;
  local_30 = FUN_00498310(*(undefined4 *)(param_4 + 0x30),*(undefined4 *)(param_1 + 8));
  uVar1 = FUN_017dcbd0(param_1,&local_30,param_3,0);
  *(undefined8 *)(param_4 + 0x2b0) = uVar1;
  local_30 = FUN_00498310(*(undefined4 *)(param_4 + 0x34),*(undefined4 *)(param_1 + 8));
  uVar1 = FUN_017dcbd0(param_1,&local_30,param_3,0);
  *(undefined8 *)(param_4 + 0x2b8) = uVar1;
  local_30 = FUN_00498310(*(undefined4 *)(param_4 + 0x38),*(undefined4 *)(param_1 + 8));
  uVar1 = FUN_017dcbd0(param_1,&local_30,param_3,0);
  *(undefined8 *)(param_4 + 0x2c0) = uVar1;
  return;
}

