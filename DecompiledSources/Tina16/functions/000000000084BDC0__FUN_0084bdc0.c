/* Ghidra address: 0084bdc0 */
/* Ghidra symbol: FUN_0084bdc0 */


void FUN_0084bdc0(longlong param_1,int param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 local_20;
  
  local_20 = 0;
  if (param_2 < 0) {
    FUN_0041ddd0(&local_20,PTR_PTR_02004940);
    FUN_004ae910(&PTR_FUN_00472dd0,local_20,(longlong)param_2);
  }
  for (iVar3 = *(int *)(param_1 + 0x10); param_2 < iVar3; iVar3 = iVar3 + -1) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    uVar2 = FUN_0084b550(uVar1,iVar3 + -1);
    FUN_0084b650(uVar1,iVar3,uVar2);
  }
  FUN_0084b650(*(undefined8 *)(param_1 + 8),param_2,param_3);
  if (*(int *)(param_1 + 0x10) < param_2) {
    *(int *)(param_1 + 0x10) = param_2;
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  FUN_00414480(&local_20);
  return;
}

