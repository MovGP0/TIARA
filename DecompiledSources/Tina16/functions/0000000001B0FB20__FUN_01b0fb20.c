/* Ghidra address: 01b0fb20 */
/* Ghidra symbol: FUN_01b0fb20 */


void FUN_01b0fb20(longlong param_1,longlong *param_2)

{
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  FUN_01b20020(local_20,*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x128),&LAB_01b0fba4);
  (**(code **)(*param_2 + 200))(param_2,local_20[0]);
  FUN_00414480(local_20);
  return;
}

