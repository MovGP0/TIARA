/* Ghidra address: 0041ee00 */
/* Ghidra symbol: FUN_0041ee00 */


undefined8 FUN_0041ee00(undefined8 param_1,longlong param_2,undefined2 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_30;
  
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + -4);
  }
  uVar3 = FUN_00416740(param_2);
  iVar1 = FUN_0041de60(param_3,0,uVar3,iVar1 + 1,0,0,0,0);
  if (iVar1 < 1) {
    local_30 = 0;
  }
  else {
    local_30 = FUN_0041e250(param_1,(longlong)iVar1);
    iVar2 = 0;
    if (param_2 != 0) {
      iVar2 = *(int *)(param_2 + -4);
    }
    FUN_0041de60(param_3,0,uVar3,iVar2 + 1,local_30,iVar1,0,0);
  }
  return local_30;
}

