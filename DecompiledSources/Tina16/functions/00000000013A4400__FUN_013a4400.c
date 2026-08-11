/* Ghidra address: 013a4400 */
/* Ghidra symbol: FUN_013a4400 */


void FUN_013a4400(longlong param_1)

{
  code *local_28;
  longlong local_20;
  undefined8 local_10;
  
  local_10 = 0;
  if (*(char *)(*(longlong *)PTR_DAT_02004e40 + 0x27c1) == '\0') {
    FUN_00414b50(&local_10,L"[SetTINAMode(0)]");
    FUN_013a40d0(param_1,&local_10);
    *(undefined4 *)(param_1 + 0x6e8) = 0;
  }
  else {
    local_28 = FUN_013a4400;
    local_20 = param_1;
    FUN_00f836b0(&local_28);
  }
  FUN_00414480(&local_10);
  return;
}

