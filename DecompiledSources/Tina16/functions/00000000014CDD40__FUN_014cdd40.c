/* Ghidra address: 014cdd40 */
/* Ghidra symbol: FUN_014cdd40 */


void FUN_014cdd40(longlong param_1)

{
  undefined8 uVar1;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_20[0] = 0;
  local_10 = 0;
  uVar1 = _get_error_str(*(undefined8 *)(param_1 + 0x1280));
  FUN_00415430(&local_10,uVar1,0);
  FUN_00416880(local_20,local_10);
  FUN_01b05000(local_20[0],0);
  FUN_00414480(local_20);
  FUN_004144d0(&local_10);
  return;
}

