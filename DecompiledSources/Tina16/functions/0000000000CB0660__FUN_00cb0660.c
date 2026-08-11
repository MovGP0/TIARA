/* Ghidra address: 00cb0660 */
/* Ghidra symbol: FUN_00cb0660 */


void FUN_00cb0660(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                 undefined8 param_5)

{
  undefined1 local_1c [12];
  
  FUN_0041b910(param_5);
  (**(code **)(*param_1 + 0xb0))(param_1,param_2,local_1c,param_3,param_4,param_5);
  FUN_0041b800(&param_5);
  return;
}

