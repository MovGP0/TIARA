/* Ghidra address: 00cac950 */
/* Ghidra symbol: FUN_00cac950 */


void FUN_00cac950(longlong *param_1,undefined1 param_2)

{
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  FUN_00878240(local_20,param_2);
  (**(code **)(*param_1 + 0x130))(param_1,local_20[0],0xffffffff,0);
  FUN_00419430(local_20,&DAT_0086e978);
  return;
}

