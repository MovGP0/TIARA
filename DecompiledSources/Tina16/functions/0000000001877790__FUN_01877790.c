/* Ghidra address: 01877790 */
/* Ghidra symbol: FUN_01877790 */


void FUN_01877790(longlong *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x18))(param_1);
  FUN_00419260(param_1 + 3,&DAT_01876160,1,(longlong)param_2);
  FUN_01877600(param_1,uVar1,param_2 + -1);
  FUN_01877910(param_1,param_2);
  return;
}

