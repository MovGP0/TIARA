/* Ghidra address: 00ef9410 */
/* Ghidra symbol: FUN_00ef9410 */


void FUN_00ef9410(longlong *param_1,int param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  longlong local_30;
  
  if (*param_1 != 0) {
    local_30 = 0;
    FUN_00ef8050(&local_30,*param_1,0,param_2 + -1,param_4);
    iVar1 = FUN_00ef7f30(*param_1,param_4);
    FUN_00ef8050(&local_30,*param_1,param_2 + param_3,iVar1 + -1,param_4);
    FUN_00ef81f0(param_1);
    *param_1 = local_30;
  }
  return;
}

