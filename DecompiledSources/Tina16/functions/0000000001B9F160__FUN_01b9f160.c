/* Ghidra address: 01b9f160 */
/* Ghidra symbol: FUN_01b9f160 */


undefined8 FUN_01b9f160(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  (**(code **)(*param_3 + 0x288))(param_3,local_20);
  FUN_00416cd0(param_2,4,local_20[0],&DAT_01b9f204,*(undefined8 *)(param_3[0x35] + 0x38),
               &LAB_01b9f218);
  FUN_00414480(local_20);
  return param_2;
}

