/* Ghidra address: 00d837d0 */
/* Ghidra symbol: FUN_00d837d0 */


undefined1 * FUN_00d837d0(undefined8 param_1,undefined1 *param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  *param_2 = 0;
  param_2[1] = 1;
  param_2[2] = 1;
  FUN_00d72e40(&local_10);
  FUN_00414ad0(param_2 + 8,local_10);
  FUN_00414ad0(param_2 + 0x10,L".vsf");
  FUN_00414480(&local_10);
  return param_2;
}

