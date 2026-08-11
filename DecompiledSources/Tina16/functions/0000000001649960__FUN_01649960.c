/* Ghidra address: 01649960 */
/* Ghidra symbol: FUN_01649960 */


void FUN_01649960(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 local_40 [3];
  
  local_40[0] = 0;
  *(undefined1 *)(*(longlong *)(param_1 + 0x78) + 9) = 1;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x28))();
  iVar4 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(**(longlong **)(param_1 + 0x48) + 0x18))
                (*(longlong **)(param_1 + 0x48),local_40,iVar4);
      uVar2 = FUN_0043fc00(local_40[0]);
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x30))
                        (*(longlong **)(param_1 + 0x48),iVar4);
      uVar3 = FUN_004113f0(uVar3,&DAT_01611258);
      uVar5 = FUN_0162fcb0(uVar2,1,*(undefined8 *)(param_1 + 0x78),0);
      FUN_0162fb60(uVar2,uVar5,*(undefined8 *)(param_1 + 0x78));
      FUN_01615b20(uVar3,uVar5);
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  *(undefined1 *)(*(longlong *)(param_1 + 0x78) + 9) = 0;
  FUN_00414480(local_40);
  return;
}

