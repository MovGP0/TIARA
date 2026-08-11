/* Ghidra address: 01ce1fb0 */
/* Ghidra symbol: FUN_01ce1fb0 */


undefined4 FUN_01ce1fb0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  undefined8 local_48;
  undefined8 local_40;
  
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x28))(*(longlong **)(param_1 + 0x80));
  if (iVar2 == 0) {
    uVar3 = FUN_01d2dd00(param_1 + 0x14,param_2,param_3);
  }
  else {
    uVar3 = 0;
    lVar6 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))(*(longlong **)(param_1 + 0x80),0);
    local_48 = *(undefined8 *)(lVar6 + 0x14);
    local_40 = *(undefined8 *)(lVar6 + 0x1c);
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x28))(*(longlong **)(param_1 + 0x80));
    iVar7 = 2;
    if (1 < iVar2) {
      iVar2 = iVar2 + -1;
      do {
        iVar8 = iVar7 + -1;
        lVar6 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))
                          (*(longlong **)(param_1 + 0x80),iVar8);
        iVar4 = *(int *)(lVar6 + 0x14);
        if ((int)local_48 < *(int *)(lVar6 + 0x14)) {
          iVar4 = (int)local_48;
        }
        iVar5 = local_48._4_4_;
        local_48 = CONCAT44(local_48._4_4_,iVar4);
        lVar6 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))
                          (*(longlong **)(param_1 + 0x80),iVar8);
        iVar4 = *(int *)(lVar6 + 0x18);
        if (iVar5 < *(int *)(lVar6 + 0x18)) {
          iVar4 = iVar5;
        }
        local_48 = CONCAT44(iVar4,(int)local_48);
        iVar4 = (int)local_40;
        lVar6 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))
                          (*(longlong **)(param_1 + 0x80),iVar8);
        iVar5 = *(int *)(lVar6 + 0x1c);
        if (*(int *)(lVar6 + 0x1c) < iVar4) {
          iVar5 = iVar4;
        }
        iVar4 = local_40._4_4_;
        local_40 = CONCAT44(local_40._4_4_,iVar5);
        lVar6 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))
                          (*(longlong **)(param_1 + 0x80),iVar8);
        iVar8 = *(int *)(lVar6 + 0x20);
        if (*(int *)(lVar6 + 0x20) < iVar4) {
          iVar8 = iVar4;
        }
        local_40 = CONCAT44(iVar8,(int)local_40);
        iVar7 = iVar7 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    cVar1 = FUN_01d2dd00(&local_48,param_2,param_3);
    if (cVar1 != '\0') {
      uVar3 = 1;
    }
  }
  return uVar3;
}

