/* Ghidra address: 016fcd70 */
/* Ghidra symbol: FUN_016fcd70 */


void FUN_016fcd70(longlong param_1)

{
  undefined8 uVar1;
  undefined8 local_28;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_20[0] = 0;
  local_28 = 0;
  local_10 = 0;
  if ((*(char *)(param_1 + 0x839) != '\0') && (*(char *)(param_1 + 0x838) != '\0')) {
    FUN_004154b0(&local_28,param_1 + 0x738,0);
    FUN_004156b0(local_20,"http://",local_28);
    FUN_00416880(&local_10,local_20[0]);
    uVar1 = FUN_00416740(local_10);
    thunk_FUN_0419adcc(0,L"open",uVar1,0,0,1);
  }
  FUN_00414590(&local_28,2);
  FUN_00414480(&local_10);
  return;
}

