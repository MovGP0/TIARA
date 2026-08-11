/* Ghidra address: 017a0640 */
/* Ghidra symbol: FUN_017a0640 */


undefined1 FUN_017a0640(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  *param_4 = 0;
  FUN_00416ba0(&local_28,*(undefined8 *)(param_1 + 0xcc0),L"SHAPED.CHM");
  FUN_01b1def0(local_20,local_28);
  (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02004030 + 0xb8) + 0x20))
            (*(longlong **)(*(longlong *)PTR_DAT_02004030 + 0xb8),param_3,local_20[0]);
  FUN_00414560(&local_28,2);
  return 1;
}

