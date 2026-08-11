/* Ghidra address: 01aa3960 */
/* Ghidra symbol: FUN_01aa3960 */


void FUN_01aa3960(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined1 param_6)

{
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  (**(code **)(**(longlong **)(param_1 + 0x550) + 0x288))(*(longlong **)(param_1 + 0x550),local_20);
  FUN_00414ad0(&DAT_02110a70,local_20[0]);
  FUN_01aa3a80(param_3,param_4,param_5,param_6);
  FUN_00414480(local_20);
  return;
}

