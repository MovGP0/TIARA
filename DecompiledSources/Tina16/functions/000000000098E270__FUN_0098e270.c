/* Ghidra address: 0098e270 */
/* Ghidra symbol: FUN_0098e270 */


void FUN_0098e270(longlong *param_1,longlong *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_00926660);
  if (cVar1 == '\0') {
    cVar1 = FUN_004113d0(param_2,&PTR_FUN_00927d88);
    if (cVar1 == '\0') {
      FUN_004b1060(param_1,param_2);
    }
    else if ((longlong *)param_2[0x15] != param_1) {
      (**(code **)(*param_1 + 0x150))(param_1);
      uVar2 = (**(code **)(*param_2 + 0xb0))(param_2);
      (**(code **)(*param_1 + 0xf0))(param_1,uVar2);
      iVar3 = (**(code **)(*param_2 + 0xd8))();
      iVar5 = 0;
      if (-1 < iVar3 + -1) {
        do {
          uVar4 = (**(code **)(*param_2 + 0xd0))(param_2,iVar5);
          (**(code **)(*param_1 + 0x140))(param_1,uVar4);
          iVar5 = iVar5 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
  }
  else if (param_2 != param_1) {
    (**(code **)(*param_1 + 0x150))(param_1);
    uVar2 = (**(code **)(*param_2 + 0xe8))(param_2);
    (**(code **)(*param_1 + 0xf0))(param_1,uVar2);
    iVar3 = (**(code **)(*param_2 + 0x118))();
    iVar5 = 0;
    if (-1 < iVar3 + -1) {
      do {
        uVar4 = (**(code **)(*param_2 + 0x110))(param_2,iVar5);
        (**(code **)(*param_1 + 0x140))(param_1,uVar4);
        iVar5 = iVar5 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  return;
}

