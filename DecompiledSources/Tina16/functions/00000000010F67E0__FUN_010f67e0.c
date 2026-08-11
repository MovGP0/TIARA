/* Ghidra address: 010f67e0 */
/* Ghidra symbol: FUN_010f67e0 */


void FUN_010f67e0(longlong *param_1,char param_2,char param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  byte bVar7;
  byte *in_stack_ffffffffffffffa8;
  byte local_29;
  
  bVar7 = 0;
  iVar1 = (**(code **)(**(longlong **)(param_1[0xfb] + 0x4f0) + 0x28))();
  iVar6 = 0;
  if (-1 < iVar1 + -1) {
    do {
      local_29 = 0;
      uVar2 = (**(code **)(**(longlong **)(param_1[0xfb] + 0x4f0) + 0x30))
                        (*(longlong **)(param_1[0xfb] + 0x4f0),iVar6);
      lVar3 = FUN_004113f0(uVar2,&PTR_FUN_011051a8);
      if (*(char *)(lVar3 + 0x11) == '\0') {
        if ((param_3 == '\0') || (bVar7 != 0)) {
          uVar4 = 0;
        }
        else {
          uVar4 = 1;
        }
        in_stack_ffffffffffffffa8 =
             (byte *)((ulonglong)in_stack_ffffffffffffffa8 & 0xffffffffffffff00);
        FUN_010f6740(param_1,lVar3,uVar4,&local_29,in_stack_ffffffffffffffa8);
      }
      else {
        if ((param_2 == '\0') || (bVar7 != 0)) {
          uVar4 = 0;
        }
        else {
          uVar4 = 1;
        }
        if ((param_3 == '\0') || (bVar7 != 0)) {
          uVar5 = 0;
        }
        else {
          uVar5 = 1;
        }
        in_stack_ffffffffffffffa8 = &local_29;
        (**(code **)(*param_1 + 0x550))(param_1,lVar3,uVar4,uVar5,in_stack_ffffffffffffffa8);
      }
      bVar7 = bVar7 | local_29;
      iVar6 = iVar6 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  if (bVar7 != 0) {
    FUN_010e8e30(param_1[0x136],param_2);
  }
  return;
}

