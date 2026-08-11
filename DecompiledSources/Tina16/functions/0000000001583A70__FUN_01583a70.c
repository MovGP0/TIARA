/* Ghidra address: 01583a70 */
/* Ghidra symbol: FUN_01583a70 */


void FUN_01583a70(longlong *param_1,int param_2,undefined8 param_3)

{
  undefined1 local_28 [24];
  
  FUN_00417580(local_28,&DAT_01577948);
  FUN_00417c40(local_28,param_1[1] + 8 + (longlong)param_2 * 0x18,&DAT_01577948);
  FUN_00417c40(param_1[1] + 8 + (longlong)param_2 * 0x18,param_3,&DAT_01577948);
  (**(code **)(*param_1 + 0x18))(param_1,local_28,5);
  (**(code **)(*param_1 + 0x18))(param_1,param_3,1);
  FUN_00417740(local_28,&DAT_01577948);
  return;
}

