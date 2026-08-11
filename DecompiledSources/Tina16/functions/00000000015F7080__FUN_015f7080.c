/* Ghidra address: 015f7080 */
/* Ghidra symbol: FUN_015f7080 */


void FUN_015f7080(undefined8 param_1,undefined8 param_2,undefined1 param_3,longlong param_4,
                 undefined1 param_5)

{
  undefined8 uVar1;
  wchar_t *pwVar2;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_38 = 0;
  local_30 = 0;
  local_20 = 0;
  local_28 = 0;
  FUN_014cdd20(*(undefined8 *)(param_4 + 0xe8));
  uVar1 = FUN_014cdce0(*(undefined8 *)(param_4 + 0xe8));
  FUN_014cdcf0(*(undefined8 *)(param_4 + 0xe8),&local_28);
  FUN_015fcd70(&local_20,local_28);
  _write_digital_signals(uVar1);
  pwVar2 = L"result.txt";
  FUN_00416cd0(&local_30,3,local_20,&DAT_015f71e8,L"result.txt");
  FUN_015f6e30(local_30,param_1,param_3,param_4,(ulonglong)pwVar2 & 0xffffffffffffff00,param_5);
  if (*PTR_DAT_020017c0 != '\0') {
    FUN_00416cd0(&local_38,3,local_20,&DAT_015f71e8,L"result_ex.txt");
    FUN_015f6e30(local_38,param_2,param_3,param_4,1,param_5);
  }
  FUN_00414560(&local_38,4);
  return;
}

