/* Ghidra address: 0162dce0 */
/* Ghidra symbol: FUN_0162dce0 */


void FUN_0162dce0(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  iVar1 = *(int *)(*(longlong *)(param_2 + 0x5f8) + 0x10);
  iVar2 = *(int *)(param_2 + 0x5d0);
  for (iVar4 = iVar2; iVar4 <= iVar1 + -1; iVar4 = iVar4 + 1) {
    FUN_0162dc30(param_1,local_30,iVar4 - iVar2,param_2);
    uVar3 = FUN_004aeac0(*(undefined8 *)(param_2 + 0x5f8),iVar4);
    uVar3 = FUN_01614c70(uVar3);
    FUN_016139c0(local_30[0],uVar3,*(undefined8 *)(param_1 + 0x128));
  }
  FUN_00414480(local_30);
  return;
}

