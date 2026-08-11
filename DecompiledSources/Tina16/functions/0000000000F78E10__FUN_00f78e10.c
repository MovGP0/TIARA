/* Ghidra address: 00f78e10 */
/* Ghidra symbol: FUN_00f78e10 */


undefined8 FUN_00f78e10(longlong param_1,undefined8 param_2,char param_3)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
  if (param_3 == '\0') {
    FUN_0043f750(&local_18,*(undefined4 *)(param_1 + 0x38));
    FUN_00416ba0(param_2,L"label",local_18);
  }
  else {
    FUN_0043f750(&local_10,*(undefined4 *)(param_1 + 0x38));
    FUN_00416ba0(param_2,L"flowchart_label",local_10);
  }
  FUN_00414560(&local_18,2);
  return param_2;
}

