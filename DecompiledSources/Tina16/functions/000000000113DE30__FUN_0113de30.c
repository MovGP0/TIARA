/* Ghidra address: 0113de30 */
/* Ghidra symbol: FUN_0113de30 */


void FUN_0113de30(longlong param_1,undefined8 param_2,short *param_3)

{
  undefined8 local_10;
  
  local_10 = 0;
  if ((*param_3 == 0x2b) || (*param_3 == 0x2d)) {
    FUN_00416780(&local_10,*param_3);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x9f0),local_10);
  }
  *param_3 = 0;
  FUN_01137540(param_1,1);
  FUN_00414480(&local_10);
  return;
}

