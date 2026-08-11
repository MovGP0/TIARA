/* Ghidra address: 0107abf0 */
/* Ghidra symbol: FUN_0107abf0 */


void FUN_0107abf0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 local_68;
  undefined8 local_60 [3];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_68 = 0;
  local_60[0] = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_20 = FUN_004b6930(&PTR_FUN_00478280,1);
  plVar1 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  lVar2 = FUN_010b2ee0(*(undefined8 *)(param_1 + 0xac8),0);
  FUN_004414c0(local_60,*(undefined8 *)(lVar2 + 0x30),L".lst");
  FUN_00416cd0(&local_28,3,*(undefined8 *)(param_1 + 0xb40),&DAT_0107ad8c,local_60[0]);
  FUN_00416cd0(&local_68,4,*(undefined8 *)(param_1 + 0xb40),&DAT_0107ad8c,
               *(undefined8 *)(*(longlong *)(param_1 + 0xac8) + 0x10),L".dbg");
  (**(code **)(*plVar1 + 0x100))(plVar1,local_68);
  FUN_00410f20(local_20);
  FUN_00410f20(plVar1);
  FUN_00414560(&local_68,2);
  FUN_00414560(&local_48,5);
  return;
}

