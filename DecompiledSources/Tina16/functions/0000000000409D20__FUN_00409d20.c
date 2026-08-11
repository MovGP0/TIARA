/* Ghidra address: 00409d20 */
/* Ghidra symbol: FUN_00409d20 */


int FUN_00409d20(void)

{
  undefined8 uVar1;
  int local_1c;
  longlong local_10;
  
  local_10 = 0;
  local_1c = 0;
  uVar1 = thunk_FUN_04151e44();
  uVar1 = FUN_00409c30(uVar1,&local_10);
  while( true ) {
    uVar1 = FUN_00409c30(uVar1,&local_10);
    if (local_10 == 0) break;
    local_1c = local_1c + 1;
  }
  FUN_00414480(&local_10);
  return local_1c;
}

