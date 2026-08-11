/* Ghidra address: 0113d6b0 */
/* Ghidra symbol: FUN_0113d6b0 */


undefined4 FUN_0113d6b0(longlong param_1,undefined1 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined1 uVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 *local_30;
  undefined4 local_1c;
  
  local_30 = auStack_68;
  local_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x9d8) + 0x4f0);
  uVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
  *param_2 = uVar2;
  FUN_01133ba0(&local_48,*(undefined8 *)(*(longlong *)(param_1 + 0x9d8) + 0x4f0));
  FUN_00468c40(param_3,&local_48);
  local_1c = 0;
  FUN_00460ba0(&local_48);
  return local_1c;
}

