/* Ghidra address: 01a80fc0 */
/* Ghidra symbol: FUN_01a80fc0 */


undefined4 FUN_01a80fc0(longlong param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  iVar2 = (**(code **)(*param_2 + 0x28))();
  if (-1 < iVar2 + -1) {
    do {
      uVar3 = (**(code **)(*param_2 + 0x30))(param_2,*(undefined4 *)(param_1 + 0x5fc));
      cVar1 = FUN_004113d0(uVar3,&PTR_FUN_01aae560);
      if (cVar1 == '\0') {
        lVar4 = (**(code **)(*param_2 + 0x30))(param_2,*(undefined4 *)(param_1 + 0x5fc));
        if (*(longlong *)(lVar4 + 0x88) == param_3) {
          lVar4 = (**(code **)(*param_2 + 0x30))(param_2,*(undefined4 *)(param_1 + 0x5fc));
          return *(undefined4 *)(*(longlong *)(lVar4 + 0x98) + 0x154);
        }
      }
      else {
        lVar4 = (**(code **)(*param_2 + 0x30))(param_2,*(undefined4 *)(param_1 + 0x5fc));
        if (*(longlong *)(lVar4 + 0xd0) == param_3) {
          lVar4 = (**(code **)(*param_2 + 0x30))(param_2,*(undefined4 *)(param_1 + 0x5fc));
          return *(undefined4 *)(*(longlong *)(lVar4 + 0xe0) + 0x154);
        }
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0xffffffff;
}

