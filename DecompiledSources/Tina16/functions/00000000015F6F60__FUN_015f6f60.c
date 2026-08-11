/* Ghidra address: 015f6f60 */
/* Ghidra symbol: FUN_015f6f60 */


void FUN_015f6f60(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = 0;
  local_20 = 0;
  local_28 = 0;
  FUN_014cdd20(*(undefined8 *)(param_3 + 0xe8));
  uVar1 = FUN_014cdce0(*(undefined8 *)(param_3 + 0xe8));
  FUN_014cdcf0(*(undefined8 *)(param_3 + 0xe8),&local_28);
  FUN_015fcd70(&local_20,local_28);
  _write_digital_signals(uVar1);
  FUN_00416cd0(&local_30,3,local_20,&DAT_015f7058,L"result.txt");
  FUN_015f6db0(local_30,param_1,param_2,param_3);
  FUN_00414560(&local_30,3);
  return;
}

