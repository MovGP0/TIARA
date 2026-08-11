/* Ghidra address: 0108c960 */
/* Ghidra symbol: FUN_0108c960 */


void FUN_0108c960(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 local_48;
  undefined8 local_40 [2];
  
  local_48 = 0;
  local_40[0] = 0;
  FUN_00416880(local_40,*(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0xae8));
  uVar2 = FUN_0108c720(param_1,local_40[0]);
  uVar2 = FUN_0108c900(param_1,uVar2);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x28))();
  iVar4 = 0;
  if (-1 < iVar1 + -1) {
    do {
      uVar3 = FUN_004aeac0(uVar2,iVar4);
      (**(code **)(**(longlong **)(param_1 + 0x48) + 0x18))
                (*(longlong **)(param_1 + 0x48),&local_48,iVar4);
      FUN_006dc8a0(uVar3,local_48);
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00410f20(uVar2);
  FUN_00414560(&local_48,2);
  return;
}

