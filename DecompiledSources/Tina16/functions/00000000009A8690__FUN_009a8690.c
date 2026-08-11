/* Ghidra address: 009a8690 */
/* Ghidra symbol: FUN_009a8690 */


void FUN_009a8690(longlong *param_1,int param_2,undefined8 param_3)

{
  undefined1 local_28 [24];
  
  FUN_00417580(local_28,&DAT_009427f8);
  FUN_00417c40(local_28,param_1[1] + 8 + (longlong)param_2 * 0x18,&DAT_009427f8);
  FUN_00417c40(param_1[1] + 8 + (longlong)param_2 * 0x18,param_3,&DAT_009427f8);
  (**(code **)(*param_1 + 0x18))(param_1,local_28,5);
  (**(code **)(*param_1 + 0x18))(param_1,param_3,1);
  FUN_00417740(local_28,&DAT_009427f8);
  return;
}

