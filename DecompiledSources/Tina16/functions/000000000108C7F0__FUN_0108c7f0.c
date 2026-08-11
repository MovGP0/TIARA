/* Ghidra address: 0108c7f0 */
/* Ghidra symbol: FUN_0108c7f0 */


void FUN_0108c7f0(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 local_48;
  undefined8 local_40 [2];
  
  local_48 = 0;
  local_40[0] = 0;
  uVar1 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x9f8) + 0x550);
  FUN_00416880(local_40,*(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0xae8));
  uVar3 = FUN_006def00(uVar1,0,local_40[0]);
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x28))();
  iVar4 = 0;
  if (-1 < iVar2 + -1) {
    do {
      (**(code **)(**(longlong **)(param_1 + 0x48) + 0x18))
                (*(longlong **)(param_1 + 0x48),&local_48,iVar4);
      FUN_006dee40(uVar1,uVar3,local_48);
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00414560(&local_48,2);
  return;
}

