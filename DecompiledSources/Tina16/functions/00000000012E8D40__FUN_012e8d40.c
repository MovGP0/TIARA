/* Ghidra address: 012e8d40 */
/* Ghidra symbol: FUN_012e8d40 */


void FUN_012e8d40(longlong param_1)

{
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6c8),local_20);
  (**(code **)(**(longlong **)(param_1 + 0x730) + 0x18))
            (*(longlong **)(param_1 + 0x730),L"ModelTest Settings",L"CT_SourceFolder",local_20[0]);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x730));
  FUN_00414480(local_20);
  return;
}

