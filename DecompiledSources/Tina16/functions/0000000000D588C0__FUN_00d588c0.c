/* Ghidra address: 00d588c0 */
/* Ghidra symbol: FUN_00d588c0 */


void FUN_00d588c0(undefined8 param_1,undefined8 param_2,int param_3,int param_4,undefined8 param_5)

{
  int iVar1;
  int iVar2;
  undefined1 local_38 [16];
  
  iVar1 = FUN_004230a0(param_5);
  iVar2 = FUN_004230c0(param_5);
  FUN_004238d0(local_38,param_3,param_4,param_3 + iVar1,param_4 + iVar2);
  FUN_00d589a0(param_1,param_2,local_38,param_5);
  return;
}

