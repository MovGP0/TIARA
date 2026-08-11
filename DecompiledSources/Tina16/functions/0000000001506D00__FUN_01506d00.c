/* Ghidra address: 01506d00 */
/* Ghidra symbol: FUN_01506d00 */


void FUN_01506d00(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  ulonglong in_stack_ffffffffffffffb8;
  undefined1 local_29 [9];
  
  local_29[0] = 0;
  lVar3 = param_1[0x183];
  if (lVar3 == 0) {
    iVar1 = (**(code **)(*(longlong *)param_1[0xfb] + 0x260))((longlong *)param_1[0xfb]);
    if (iVar1 != -1) {
      *(undefined1 *)(param_1[0x10e] + 0x11) = *(undefined1 *)(param_1[0xfa] + 0x328);
      FUN_01506c70(param_1);
      lVar3 = param_1[0x10e];
      if (*(char *)(lVar3 + 0x11) == '\0') {
        FUN_010f6740(param_1,lVar3,1,local_29,in_stack_ffffffffffffffb8 & 0xffffffffffffff00);
      }
      else {
        (**(code **)(*param_1 + 0x550))(param_1,lVar3,1,1,local_29);
      }
    }
  }
  else {
    iVar1 = *(int *)(lVar3 + 0x3c);
    if (iVar1 <= *(int *)(lVar3 + 0x40)) {
      iVar4 = (*(int *)(lVar3 + 0x40) - iVar1) + 1;
      do {
        uVar2 = (**(code **)(**(longlong **)(param_1[0xfb] + 0x4f0) + 0x30))
                          (*(longlong **)(param_1[0xfb] + 0x4f0),iVar1);
        lVar3 = FUN_004113f0(uVar2,&PTR_FUN_011051a8);
        *(undefined1 *)(lVar3 + 0x11) = *(undefined1 *)(param_1[0xfa] + 0x328);
        iVar1 = iVar1 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    *(undefined1 *)(param_1[0x183] + 0x11) = *(undefined1 *)(param_1[0xfa] + 0x328);
    FUN_01506c70(param_1);
    FUN_010f67e0(param_1,1,1);
  }
  return;
}

