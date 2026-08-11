/* Ghidra address: 010ec9f0 */
/* Ghidra symbol: FUN_010ec9f0 */


void FUN_010ec9f0(longlong param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                 char param_5,char param_6)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  
  *(undefined8 *)(param_1 + 0x130) = param_2;
  *(undefined1 *)(param_1 + 0x138) = param_4;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x50);
    iVar2 = (**(code **)(**(longlong **)(lVar1 + 0xd8) + 0x28))(*(longlong **)(lVar1 + 0xd8));
    if (0 < iVar2) {
      iVar2 = (**(code **)(**(longlong **)(lVar1 + 0xd8) + 0x28))();
      iVar5 = 0;
      if (-1 < iVar2 + -1) {
        do {
          lVar3 = (**(code **)(**(longlong **)(lVar1 + 0xd8) + 0x30))
                            (*(longlong **)(lVar1 + 0xd8),iVar5);
          uVar4 = (**(code **)(**(longlong **)(lVar3 + 0x78) + 0x30))
                            (*(longlong **)(lVar3 + 0x78),0);
          lVar3 = FUN_004113f0(uVar4,&PTR_FUN_010fdfc0);
          FUN_01101250(lVar3,param_2);
          FUN_01101310(lVar3,param_3);
          *(undefined1 *)(lVar3 + 0x160) = param_4;
          if (param_5 != '\0') {
            FUN_010fff30(lVar3,*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x10));
          }
          if (param_6 != '\0') {
            FUN_01aceb90(lVar1,0);
          }
          iVar5 = iVar5 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
  }
  return;
}

