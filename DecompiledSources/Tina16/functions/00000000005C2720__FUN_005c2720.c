/* Ghidra address: 005c2720 */
/* Ghidra symbol: FUN_005c2720 */


void FUN_005c2720(longlong *param_1,int param_2,undefined8 param_3)

{
  undefined1 local_48 [56];
  
  FUN_00417580(local_48,&DAT_005bc4e0);
  FUN_00417c40(local_48,param_1[1] + 8 + (longlong)param_2 * 0x38,&DAT_005bc4e0);
  FUN_00417c40(param_1[1] + 8 + (longlong)param_2 * 0x38,param_3,&DAT_005bc4e0);
  (**(code **)(*param_1 + 0x18))(param_1,local_48,5);
  (**(code **)(*param_1 + 0x18))(param_1,param_3,1);
  FUN_00417740(local_48,&DAT_005bc4e0);
  return;
}

