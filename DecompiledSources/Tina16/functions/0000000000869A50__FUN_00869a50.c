/* Ghidra address: 00869a50 */
/* Ghidra symbol: FUN_00869a50 */


undefined4
FUN_00869a50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_0041b910(param_2);
  *param_4 = 0;
  FUN_0086ccd0(L"importNode",L"MSXML");
  FUN_0041b800(local_res10);
  return 0;
}

