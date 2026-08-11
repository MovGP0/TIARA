/* Ghidra address: 01778ec0 */
/* Ghidra symbol: FUN_01778ec0 */


void FUN_01778ec0(longlong param_1,undefined8 param_2,char param_3)

{
  undefined8 local_20;
  
  local_20 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x30) + 0x90))(*(longlong **)(param_1 + 0x30));
  (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))(*(longlong **)(param_1 + 0x30),param_2);
  FUN_0043f750(&local_20,param_3 != '\0');
  (**(code **)(**(longlong **)(param_1 + 0x30) + 200))(*(longlong **)(param_1 + 0x30),0,local_20);
  FUN_00414480(&local_20);
  return;
}

