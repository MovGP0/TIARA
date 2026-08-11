/* Ghidra address: 0179a7b0 */
/* Ghidra symbol: FUN_0179a7b0 */


void FUN_0179a7b0(longlong param_1)

{
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  FUN_00416ba0(&local_28,*(undefined8 *)(param_1 + 0xcc0),L"SHAPED.CHM");
  FUN_01b1def0(local_20,local_28);
  (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02004030 + 0xb8) + 0x20))
            (*(longlong **)(*(longlong *)PTR_DAT_02004030 + 0xb8),3,local_20[0]);
  FUN_00414560(&local_28,2);
  return;
}

