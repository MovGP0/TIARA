/* Ghidra address: 0172c930 */
/* Ghidra symbol: FUN_0172c930 */


void FUN_0172c930(undefined8 param_1,undefined1 param_2,longlong *param_3,undefined8 param_4)

{
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  (**(code **)(*param_3 + 0x90))(param_3);
  FUN_0172c5d0(param_1,param_2,local_20,*(undefined2 *)((longlong)param_3 + 0x2c),param_4);
  FUN_004b50b0(param_3,local_20[0]);
  FUN_00414480(local_20);
  return;
}

