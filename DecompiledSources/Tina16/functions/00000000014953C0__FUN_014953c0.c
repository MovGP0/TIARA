/* Ghidra address: 014953c0 */
/* Ghidra symbol: FUN_014953c0 */


void FUN_014953c0(longlong param_1)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  *(int *)(param_1 + 0x900) = *(int *)(param_1 + 0x900) + 1;
  FUN_01d43440(&local_18,*(undefined4 *)(param_1 + 0x900));
  FUN_00416ba0(&local_10,L"NewParam",local_18);
  FUN_01495150(param_1,local_10,&DAT_014954a8,L"<none>",L"<none>",0);
  FUN_00414560(&local_18,2);
  return;
}

