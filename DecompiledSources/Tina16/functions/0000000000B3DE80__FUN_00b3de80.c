/* Ghidra address: 00b3de80 */
/* Ghidra symbol: FUN_00b3de80 */


void FUN_00b3de80(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 undefined4 param_6,int param_7)

{
  int iVar1;
  
  iVar1 = FUN_00b3de20(param_2,param_3,param_4);
  *param_1 = *param_1 + iVar1 + param_5 + param_7;
  iVar1 = FUN_00b3de60(*param_1,param_6);
  *param_1 = iVar1;
  *param_1 = *param_1 + param_2;
  return;
}

