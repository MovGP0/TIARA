/* Ghidra address: 0162dc30 */
/* Ghidra symbol: FUN_0162dc30 */


undefined8 FUN_0162dc30(undefined8 param_1,undefined8 param_2,int param_3,longlong param_4)

{
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  (**(code **)(**(longlong **)(param_4 + 0x578) + 0x28))(*(longlong **)(param_4 + 0x578));
  (**(code **)(**(longlong **)(param_4 + 0x578) + 0x18))
            (*(longlong **)(param_4 + 0x578),local_20,*(int *)(param_4 + 0x5d0) + param_3);
  FUN_00414ad0(param_2,local_20[0]);
  FUN_00414480(local_20);
  return param_2;
}

