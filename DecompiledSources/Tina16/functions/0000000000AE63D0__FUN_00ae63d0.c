/* Ghidra address: 00ae63d0 */
/* Ghidra symbol: FUN_00ae63d0 */


void FUN_00ae63d0(longlong param_1,longlong param_2)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 *local_30;
  undefined8 local_28;
  undefined8 *local_20;
  
  local_30 = auStack_68;
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_2 + 0x68);
  local_40 = 0;
  uStack_38 = 0;
  FUN_00ae56f0(param_1,param_2,&local_40);
  *(undefined1 *)(param_1 + 0x82) = 1;
  FUN_00ad1170(param_1);
  FUN_00ae5ff0(param_1);
  local_20 = (undefined8 *)(param_1 + 0x48);
  local_28 = *local_20;
  *local_20 = 0;
  FUN_00410f20(local_28);
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_00a9b900(*(undefined8 *)(param_1 + 0x68),param_1 + 0x60,*(undefined4 *)(param_1 + 0x7c));
  }
  (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x10))(*(longlong **)(param_1 + 0xe8));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x70));
  *(undefined8 *)(param_1 + 0xe8) = 0;
  return;
}

