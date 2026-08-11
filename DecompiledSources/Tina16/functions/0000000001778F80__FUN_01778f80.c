/* Ghidra address: 01778f80 */
/* Ghidra symbol: FUN_01778f80 */


void FUN_01778f80(longlong param_1,undefined8 param_2,char param_3)

{
  undefined8 local_res10 [3];
  undefined8 local_20;
  
  local_20 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  (**(code **)(**(longlong **)(param_1 + 0x30) + 0x90))(*(longlong **)(param_1 + 0x30));
  (**(code **)(**(longlong **)(param_1 + 0x30) + 0x60))
            (*(longlong **)(param_1 + 0x30),local_res10[0]);
  FUN_0043f750(&local_20,param_3 != '\0');
  (**(code **)(**(longlong **)(param_1 + 0x30) + 200))(*(longlong **)(param_1 + 0x30),0,local_20);
  FUN_00414480(&local_20);
  FUN_00414480(local_res10);
  return;
}

