/* Ghidra address: 00c8b500 */
/* Ghidra symbol: FUN_00c8b500 */


void FUN_00c8b500(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_3 < 0) {
    iVar1 = (**(code **)*param_2)(param_2);
    iVar2 = FUN_004b6da0(param_2);
    iVar1 = iVar1 - iVar2;
  }
  else if (param_3 == 0) {
    FUN_004b6dc0(param_2,0);
    iVar1 = (**(code **)*param_2)(param_2);
  }
  else {
    lVar3 = (**(code **)*param_2)(param_2);
    lVar4 = FUN_004b6da0(param_2);
    iVar1 = FUN_008764e0((longlong)param_3,lVar3 - lVar4);
  }
  if (0 < iVar1) {
    iVar2 = *(int *)(param_1 + 0x30);
    FUN_00c8aa90(param_1,iVar1,0);
    FUN_00c8b450(param_1,1);
    FUN_00419260(param_1 + 8,&DAT_0086e978,1,(longlong)(iVar2 + iVar1));
    FUN_0086e810(&LAB_0086e608,param_2,param_1 + 8,iVar1,iVar2);
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + iVar1;
  }
  return;
}

