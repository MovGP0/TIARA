/* Ghidra address: 01408b50 */
/* Ghidra symbol: FUN_01408b50 */


void FUN_01408b50(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  uVar1 = FUN_01408a70(&DAT_01408308,1,local_res10[0]);
  (**(code **)(*param_1 + 0x50))(param_1,uVar1);
  FUN_00414480(local_res10);
  return;
}

