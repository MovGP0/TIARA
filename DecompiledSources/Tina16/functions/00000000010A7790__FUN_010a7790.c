/* Ghidra address: 010a7790 */
/* Ghidra symbol: FUN_010a7790 */


void FUN_010a7790(undefined8 param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int local_bc [4];
  int local_ac;
  byte local_85;
  
  uVar2 = thunk_FUN_040ef593(param_1);
  thunk_FUN_04172119(uVar2,local_bc);
  *param_2 = 6;
  if ((local_85 & 1) == 0) {
    iVar3 = 2;
  }
  else {
    iVar3 = 3;
  }
  iVar1 = FUN_0040c770((double)*param_2 / 2.0);
  *param_4 = iVar3 * iVar1;
  *param_3 = local_bc[0] + local_ac;
  thunk_FUN_041a9b5c(param_1,uVar2);
  return;
}

