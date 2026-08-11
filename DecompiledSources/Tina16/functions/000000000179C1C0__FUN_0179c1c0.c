/* Ghidra address: 0179c1c0 */
/* Ghidra symbol: FUN_0179c1c0 */


void FUN_0179c1c0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  short sVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  cVar2 = FUN_0179d460(param_1);
  if (cVar2 != '\0') {
    FUN_00414b50(local_20,*(undefined8 *)(*(longlong *)(param_1 + 0xca8) + 0x10));
    sVar3 = FUN_0179bd90(param_1,local_20,0xffffffff);
    if (sVar3 == 6) {
      FUN_00414ad0(*(longlong *)(param_1 + 0xca8) + 0x10,local_20[0]);
      FUN_00414ad0(*(longlong *)(param_1 + 0xca8) + 0x20,*(undefined8 *)(param_1 + 0xc98));
      lVar1 = *(longlong *)(param_1 + 0xca8);
      uVar5 = FUN_00c3f320(lVar1);
      uVar4 = (**(code **)(**(longlong **)(param_1 + 0xd18) + 0x80))
                        (*(longlong **)(param_1 + 0xd18),*(undefined8 *)(lVar1 + 0x10),uVar5);
      *(undefined4 *)(param_1 + 0xca0) = uVar4;
      FUN_01797060(param_1,uVar4);
      (**(code **)(**(longlong **)(param_1 + 0x758) + 0x268))
                (*(longlong **)(param_1 + 0x758),*(undefined4 *)(param_1 + 0xca0));
      FUN_01795670(param_1,1);
    }
  }
  FUN_00414480(local_20);
  return;
}

