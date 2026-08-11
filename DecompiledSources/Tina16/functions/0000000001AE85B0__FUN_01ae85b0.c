/* Ghidra address: 01ae85b0 */
/* Ghidra symbol: FUN_01ae85b0 */


void FUN_01ae85b0(longlong param_1,longlong *param_2,char param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  if (param_2 != (longlong *)0x0) {
    cVar1 = FUN_004113d0(param_2[0xb],&PTR_FUN_01aae560);
    if (cVar1 != '\0') {
      iVar5 = 0;
      lVar4 = *(longlong *)(param_2[0xb] + 0x78);
      while( true ) {
        lVar3 = (**(code **)(**(longlong **)(lVar4 + 0x80) + 0x30))
                          (*(longlong **)(lVar4 + 0x80),iVar5);
        if (lVar3 == param_2[0xb]) break;
        iVar5 = iVar5 + 1;
      }
      if (param_3 == '\0') {
        if (iVar5 == 0) {
          iVar5 = (**(code **)(**(longlong **)(lVar4 + 0x80) + 0x28))(*(longlong **)(lVar4 + 0x80));
          iVar5 = iVar5 + -1;
        }
        else {
          iVar5 = iVar5 + -1;
        }
      }
      else {
        iVar2 = (**(code **)(**(longlong **)(lVar4 + 0x80) + 0x28))(*(longlong **)(lVar4 + 0x80));
        if (iVar5 == iVar2 + -1) {
          iVar5 = 0;
        }
        else {
          iVar5 = iVar5 + 1;
        }
      }
      lVar4 = (**(code **)(**(longlong **)(lVar4 + 0x80) + 0x30))
                        (*(longlong **)(lVar4 + 0x80),iVar5);
      param_2[0xb] = lVar4;
      FUN_01ac1cf0(param_2,*(undefined8 *)(param_1 + 0x80),1);
      (**(code **)(*param_2 + 0x118))(param_2);
      FUN_01ac1cf0(param_2,*(undefined8 *)(param_1 + 0x80),0);
    }
  }
  return;
}

