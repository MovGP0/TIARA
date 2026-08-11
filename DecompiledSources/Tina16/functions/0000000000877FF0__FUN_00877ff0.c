/* Ghidra address: 00877ff0 */
/* Ghidra symbol: FUN_00877ff0 */


undefined8 FUN_00877ff0(undefined8 param_1,undefined2 param_2,longlong *param_3)

{
  longlong *local_res18 [2];
  undefined2 *local_20 [2];
  
  local_20[0] = (undefined2 *)0x0;
  local_res18[0] = param_3;
  FUN_0041b910(param_3);
  if (local_res18[0] == (longlong *)0x0) {
    FUN_008742b0(local_res18,0);
  }
  FUN_00419260(local_20,&DAT_0086e9b8,1,1);
  *local_20[0] = param_2;
  (**(code **)(*local_res18[0] + 0x40))(local_res18[0],param_1,local_20[0]);
  FUN_00419430(local_20,&DAT_0086e9b8);
  FUN_0041b800(local_res18);
  return param_1;
}

