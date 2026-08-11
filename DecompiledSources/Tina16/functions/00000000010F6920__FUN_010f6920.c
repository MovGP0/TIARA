/* Ghidra address: 010f6920 */
/* Ghidra symbol: FUN_010f6920 */


void FUN_010f6920(longlong *param_1,char param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  int iVar5;
  byte bVar6;
  byte local_29;
  
  bVar6 = 0;
  iVar1 = (**(code **)(**(longlong **)(param_1[0xfb] + 0x4f0) + 0x28))();
  iVar5 = 0;
  if (-1 < iVar1 + -1) {
    do {
      local_29 = 0;
      uVar2 = (**(code **)(**(longlong **)(param_1[0xfb] + 0x4f0) + 0x30))
                        (*(longlong **)(param_1[0xfb] + 0x4f0),iVar5);
      lVar3 = FUN_004113f0(uVar2,&PTR_FUN_011051a8);
      bVar6 = bVar6 | local_29;
      local_29 = 0;
      if (*(char *)(lVar3 + 0x11) != '\0') {
        if ((param_2 == '\0') || (bVar6 != 0)) {
          uVar4 = 0;
        }
        else {
          uVar4 = 1;
        }
        (**(code **)(*param_1 + 0x550))(param_1,lVar3,uVar4,bVar6 == 0,&local_29);
      }
      bVar6 = bVar6 | local_29;
      iVar5 = iVar5 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  if (bVar6 != 0) {
    FUN_010e8e30(param_1[0x136],1);
  }
  return;
}

