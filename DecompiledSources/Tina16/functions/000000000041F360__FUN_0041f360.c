/* Ghidra address: 0041f360 */
/* Ghidra symbol: FUN_0041f360 */


void FUN_0041f360(undefined8 param_1,undefined8 *param_2,longlong param_3,int param_4,
                 undefined2 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  
  uVar1 = *param_2;
  if (param_4 < 0) {
    iVar3 = 0;
    if (param_3 != 0) {
      iVar3 = *(int *)(param_3 + -4);
    }
    uVar2 = FUN_00416740(param_3);
    param_4 = FUN_0041de60(param_5,0,uVar2,iVar3 + 1,0,0,0,0);
  }
  iVar3 = 0;
  if (param_3 != 0) {
    iVar3 = *(int *)(param_3 + -4);
  }
  uVar2 = FUN_00416740(param_3);
  FUN_0041de60(param_5,0,uVar2,iVar3 + 1,uVar1,param_4,0,0);
  return;
}

