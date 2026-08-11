/* Ghidra address: 01521f10 */
/* Ghidra symbol: FUN_01521f10 */


void FUN_01521f10(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                 longlong param_5)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int local_44;
  
  FUN_01aad6b0(param_4,param_5);
  lVar1 = *(longlong *)(param_1 + 8);
  iVar7 = 0;
  iVar8 = *(int *)(lVar1 + 0x10);
  local_44 = 0;
  if (-1 < iVar8 + -1) {
    do {
      uVar5 = FUN_01d347d0(lVar1,local_44);
      cVar2 = FUN_004113d0(uVar5,&PTR_FUN_01cb4260);
      if (cVar2 == '\0') {
        uVar5 = FUN_01d347d0(lVar1,local_44);
        iVar3 = FUN_01cc1840(uVar5);
        lVar6 = FUN_00409570((longlong)iVar3);
        iVar3 = FUN_01cc1840();
        iVar4 = 0;
        if (-1 < iVar3 + -1) {
          do {
            *(undefined1 *)(lVar6 + -1 + (longlong)(iVar4 + 1)) =
                 *(undefined1 *)(param_5 + (iVar7 + 1));
            iVar7 = iVar7 + 1;
            iVar4 = iVar4 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
        FUN_01cc5750(param_1,local_44,param_3,lVar6);
        FUN_004095f0(lVar6);
      }
      else {
        FUN_01cc56d0(param_1,local_44,param_3,*(undefined1 *)(param_5 + (iVar7 + 1)));
        iVar7 = iVar7 + 1;
      }
      local_44 = local_44 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  if (param_2 != 0) {
    lVar1 = *(longlong *)(param_2 + 8);
    iVar8 = *(int *)(lVar1 + 0x10);
    local_44 = 0;
    if (-1 < iVar8 + -1) {
      do {
        uVar5 = FUN_01d347d0(lVar1,local_44);
        cVar2 = FUN_004113d0(uVar5,&PTR_FUN_01cb4260);
        if (cVar2 == '\0') {
          uVar5 = FUN_01d347d0(lVar1,local_44);
          iVar3 = FUN_01cc1840(uVar5);
          lVar6 = FUN_00409570((longlong)iVar3);
          iVar3 = FUN_01cc1840();
          iVar4 = 0;
          if (-1 < iVar3 + -1) {
            do {
              *(undefined1 *)(lVar6 + -1 + (longlong)(iVar4 + 1)) =
                   *(undefined1 *)(param_5 + (iVar7 + 1));
              iVar7 = iVar7 + 1;
              iVar4 = iVar4 + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          FUN_01cc5750(param_2,local_44,param_3,lVar6);
          FUN_004095f0(lVar6);
        }
        else {
          FUN_01cc56d0(param_2,local_44,param_3,*(undefined1 *)(param_5 + (iVar7 + 1)));
          iVar7 = iVar7 + 1;
        }
        local_44 = local_44 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
  }
  return;
}

