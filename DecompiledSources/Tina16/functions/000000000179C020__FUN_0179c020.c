/* Ghidra address: 0179c020 */
/* Ghidra symbol: FUN_0179c020 */


void FUN_0179c020(longlong param_1)

{
  undefined1 uVar1;
  char cVar2;
  short sVar3;
  undefined4 uVar4;
  undefined8 local_20;
  
  local_20 = 0;
  cVar2 = FUN_0179d460(param_1);
  if (cVar2 != '\0') {
    FUN_00414b50(&local_20,*(undefined8 *)(*(longlong *)(param_1 + 0xca8) + 0x10));
    sVar3 = FUN_0179bd90(param_1,&local_20,*(undefined4 *)(param_1 + 0xca0));
    if (sVar3 == 6) {
      FUN_00414ad0(*(longlong *)(param_1 + 0xca8) + 0x10,local_20);
      uVar1 = *(undefined1 *)(*(longlong *)(param_1 + 0xd18) + 0x48);
      FUN_004b67b0(*(longlong *)(param_1 + 0xd18),0);
      (**(code **)(**(longlong **)(param_1 + 0xd18) + 0x40))
                (*(longlong **)(param_1 + 0xd18),*(undefined4 *)(param_1 + 0xca0),
                 *(undefined8 *)(*(longlong *)(param_1 + 0xca8) + 0x10));
      FUN_004b67b0(*(undefined8 *)(param_1 + 0xd18),uVar1);
      uVar4 = (**(code **)(**(longlong **)(param_1 + 0xd18) + 0xb0))
                        (*(longlong **)(param_1 + 0xd18),
                         *(undefined8 *)(*(longlong *)(param_1 + 0xca8) + 0x10));
      *(undefined4 *)(param_1 + 0xca0) = uVar4;
      FUN_01797060(param_1,uVar4);
      (**(code **)(**(longlong **)(param_1 + 0x758) + 0x268))
                (*(longlong **)(param_1 + 0x758),*(undefined4 *)(param_1 + 0xca0));
      FUN_01795670(param_1,1);
    }
  }
  FUN_00414480(&local_20);
  return;
}

