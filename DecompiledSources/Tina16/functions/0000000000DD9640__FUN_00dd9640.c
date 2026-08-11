/* Ghidra address: 00dd9640 */
/* Ghidra symbol: FUN_00dd9640 */


void FUN_00dd9640(longlong *param_1,undefined8 param_2)

{
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  FUN_0041b890(local_20,param_2,&LAB_00dd96b8);
  FUN_00dd8c50(param_1,local_20[0]);
  (**(code **)(*param_1 + 8))(param_1);
  FUN_0041b800(local_20);
  return;
}

