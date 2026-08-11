/* Ghidra address: 00b14fc0 */
/* Ghidra symbol: FUN_00b14fc0 */


undefined8 FUN_00b14fc0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_30[0] = 0;
  local_20[0] = 0;
  iVar2 = 0;
  if (param_2 != 0) {
    iVar2 = *(int *)(param_2 + -4);
  }
  iVar4 = iVar2 * 2 + 2;
  FUN_00415d10(local_20,iVar4,0);
  uVar3 = FUN_00414df0(local_20);
  FUN_0040d200(uVar3,(longlong)iVar4,0);
  uVar3 = FUN_00414df0(local_20);
  FUN_00b14d10(param_2,uVar3,iVar4);
  cVar1 = FUN_00b14f80(local_20);
  if (cVar1 == '\0') {
    FUN_00415ad0(local_30,local_20[0],1,iVar2 * 2);
    FUN_004156b0(param_1,&LAB_00b150f4,local_30[0]);
  }
  else {
    FUN_004156b0(param_1,&DAT_00b150e4,param_2);
  }
  FUN_004144d0(local_30);
  FUN_004144d0(local_20);
  return param_1;
}

