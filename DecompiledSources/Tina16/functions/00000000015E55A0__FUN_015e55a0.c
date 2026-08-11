/* Ghidra address: 015e55a0 */
/* Ghidra symbol: FUN_015e55a0 */


void FUN_015e55a0(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 local_20 [4];
  undefined1 local_1c [12];
  
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  FUN_01604ed0(&local_58,&local_60,local_1c,local_20);
  if (*(int *)(param_1 + 0x6e8) == 0) {
    uVar2 = FUN_01b21190(local_60,0x2c,1);
    *(undefined8 *)(param_1 + 0x6f8) = uVar2;
  }
  else {
    uVar2 = FUN_01b21190(local_58,0x2c,1);
    *(undefined8 *)(param_1 + 0x6f8) = uVar2;
  }
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6c8) + 0x4a0);
  (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 *)(param_1 + 0x6f8));
  FUN_00414560(&local_60,8);
  return;
}

