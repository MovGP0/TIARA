/* Ghidra address: 014a1f90 */
/* Ghidra symbol: FUN_014a1f90 */


undefined1 FUN_014a1f90(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong local_res18 [2];
  undefined1 local_9b8 [2472];
  undefined8 local_10;
  
  local_10 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_00417580(local_9b8,&DAT_01c4d1b0);
  if (local_res18[0] == 0) {
    FUN_00414b50(local_res18,*(undefined8 *)(PTR_DAT_02004010 + 0xb1));
  }
  FUN_00417740(local_9b8,&DAT_01c4d1b0);
  FUN_00414480(&local_10);
  FUN_00414480(local_res18);
  return 0;
}

