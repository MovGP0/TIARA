/* Ghidra address: 01cc02e0 */
/* Ghidra symbol: FUN_01cc02e0 */


void FUN_01cc02e0(longlong param_1,byte param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  FUN_00411a80(param_1,param_2);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x438));
  FUN_00416830(&local_10,param_1 + 0x22a,0x105);
  FUN_004412f0(local_10);
  FUN_01d34780(param_1,param_2 & 0xfc);
  FUN_00414480(&local_10);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

