/* Ghidra address: 010a6f60 */
/* Ghidra symbol: FUN_010a6f60 */


void FUN_010a6f60(undefined8 param_1,int param_2,longlong param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 local_20;
  
  local_20 = 0;
  iVar1 = FUN_0040c770((double)*(int *)(param_3 + 0x9c) / (double)param_4);
  FUN_010a6f30(param_3,param_4);
  uVar2 = FUN_0065b870(param_3);
  lVar3 = FUN_0040c770((double)iVar1 / 2.0);
  thunk_FUN_041b2403(uVar2,0xb6,0,param_2 - lVar3);
  FUN_00414480(&local_20);
  return;
}

