/* Ghidra address: 015693e0 */
/* Ghidra symbol: FUN_015693e0 */


void FUN_015693e0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  code *local_58;
  longlong local_50;
  longlong local_40 [2];
  
  cVar2 = FUN_01995600(*(undefined8 *)(param_1 + 0x748),0,0);
  if (cVar2 == '\0') {
    FUN_015fcf20(L"Graph init error!",0,0,0);
  }
  else {
    local_58 = FUN_015688f0;
    local_50 = param_1;
    FUN_015670c0(param_1,*(undefined8 *)(param_1 + 0x748),1,&local_58);
    cVar2 = FUN_01569690();
    if (cVar2 != '\0') {
      FUN_015688f0(param_1,*(undefined8 *)(param_1 + 0x6c0),0xffffffff);
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x6c0) + 0x210))
                        (*(longlong **)(param_1 + 0x6c0),0);
      cVar2 = FUN_015755e0(*(undefined8 *)(param_1 + 0x8d0),uVar3,local_40);
      if (cVar2 != '\0') {
        *(undefined1 *)(local_40[0] + 0x3b) = 1;
      }
    }
  }
  iVar8 = *(int *)(*(longlong *)(param_1 + 0x750) + 0x10);
  iVar7 = 0;
  if (-1 < iVar8 + -1) {
    do {
      lVar6 = FUN_01571ee0(*(undefined8 *)(param_1 + 0x750),iVar7);
      lVar1 = *(longlong *)(lVar6 + 0x40);
      if (lVar1 == 0) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = FUN_01d03160(lVar1);
        uVar4 = uVar4 & 0xffff;
      }
      if ((((uVar4 != 0xffffffff) && (*(char *)(param_1 + 0x94e) != '\0')) &&
          (cVar2 = FUN_01571cf0(*(undefined8 *)(param_1 + 0x988),*(undefined4 *)(lVar6 + 0x30)),
          cVar2 == '\0')) && ((uVar4 == 0x4b0 && (iVar5 = FUN_015f2650(lVar1), -1 < iVar5)))) {
        *(undefined1 *)(lVar6 + 0x98) = 1;
        FUN_015718e0(lVar6,iVar5);
      }
      iVar7 = iVar7 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  return;
}

