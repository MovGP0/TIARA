/* Ghidra address: 0102b830 */
/* Ghidra symbol: FUN_0102b830 */


void FUN_0102b830(longlong param_1,undefined8 param_2,char param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_28 = 0;
  local_30 = 0;
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  FUN_00414610(param_5);
  if (param_3 == '\0') {
    FUN_00416780(&local_30,*(undefined2 *)(*(longlong *)(param_1 + 0x1520) + 0xb0));
    FUN_00416cd0(&local_28,4,L"LDS ",local_30,L"R16, ",param_5);
    FUN_00f787d0(*(undefined8 *)(param_1 + 0x1520),param_2,local_28);
  }
  else {
    FUN_00416780(&local_18,*(undefined2 *)(*(longlong *)(param_1 + 0x1520) + 0xb0));
    FUN_0043f750(&local_20,*(undefined4 *)(*(longlong *)(param_1 + 0x14e8) + 0x120));
    FUN_00416cd0(&local_10,4,L"LDI ",local_18,L"R16, ",local_20);
    FUN_00f787d0(*(undefined8 *)(param_1 + 0x1520),param_2,local_10);
  }
  FUN_00414560(&local_30,5);
  FUN_00414480(&param_5);
  return;
}

