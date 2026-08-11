/* Ghidra address: 01ca1840 */
/* Ghidra symbol: FUN_01ca1840 */


void FUN_01ca1840(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 *local_20;
  longlong *local_10;
  
  local_20 = auStack_48;
  local_28 = 0;
  FUN_015fcb30(&local_28,PTR_DAT_02004770);
  FUN_00414ad0(param_1 + 0x2740,local_28);
  uVar1 = FUN_00442620(param_1 + 0x2528,*(undefined8 *)(param_1 + 0x2740));
  FUN_015fcc20(uVar1,param_1 + 0x2738,0,0);
  local_10 = (longlong *)FUN_007fc180(&PTR_FUN_0104a6e8,1,*(undefined8 *)PTR_DAT_02004030);
  FUN_01051910(local_10,*(undefined8 *)(param_1 + 0x2738));
  (**(code **)(*local_10 + 0x2d0))(local_10);
  FUN_00410f20(local_10);
  uVar1 = FUN_00442620(param_1 + 0x2528,*(undefined8 *)(param_1 + 0x2740));
  FUN_015fcd60(*(undefined8 *)(param_1 + 0x2738),uVar1,0);
  FUN_015fcbd0(PTR_DAT_02004770,0);
  FUN_00414480(&local_28);
  return;
}

