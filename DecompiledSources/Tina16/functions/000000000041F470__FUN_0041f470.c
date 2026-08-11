/* Ghidra address: 0041f470 */
/* Ghidra symbol: FUN_0041f470 */


void FUN_0041f470(undefined8 param_1,longlong *param_2,longlong param_3,longlong param_4,int param_5
                 ,undefined2 param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  
  lVar1 = *param_2;
  if (param_5 < 0) {
    iVar3 = 0;
    if (param_4 != 0) {
      iVar3 = *(int *)(param_4 + -4);
    }
    uVar2 = FUN_00416740(param_4);
    param_5 = FUN_0041de60(param_6,0,uVar2,iVar3 + 1,0,0,0,0);
  }
  iVar3 = 0;
  if (param_4 != 0) {
    iVar3 = *(int *)(param_4 + -4);
  }
  uVar2 = FUN_00416740(param_4);
  FUN_0041de60(param_6,0,uVar2,iVar3 + 1,lVar1 + param_3,param_5,0,0);
  return;
}

