/* Ghidra address: 01cec040 */
/* Ghidra symbol: FUN_01cec040 */


void FUN_01cec040(longlong param_1,undefined8 param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  FUN_0043f750(&local_10,param_2);
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x80))
            (*(longlong **)(param_1 + 0x10),local_10,param_2);
  FUN_00414480(&local_10);
  return;
}

