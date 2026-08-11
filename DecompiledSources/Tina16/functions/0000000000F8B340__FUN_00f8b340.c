/* Ghidra address: 00f8b340 */
/* Ghidra symbol: FUN_00f8b340 */


undefined8 FUN_00f8b340(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  (**(code **)(**(longlong **)(param_1 + 0x3448) + 0x18))
            (*(longlong **)(param_1 + 0x3448),local_20,param_3);
  FUN_00414ad0(param_2,local_20[0]);
  FUN_00414480(local_20);
  return param_2;
}

