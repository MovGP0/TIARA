/* Ghidra address: 0135e310 */
/* Ghidra symbol: FUN_0135e310 */


void FUN_0135e310(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int iVar8;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  longlong local_50;
  short *local_48;
  longlong local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_40 = 0;
  local_48 = (short *)0x0;
  local_50 = 0;
  local_58 = 0;
  local_68 = 0;
  local_70 = 0;
  local_60 = 0;
  local_38 = 0;
  local_30 = 0;
  plVar7 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4a0);
  (**(code **)(*plVar7 + 0x90))(plVar7);
  iVar4 = (**(code **)(**(longlong **)(param_1 + 0x728) + 0x28))();
  iVar8 = 0;
  if (-1 < iVar4 + -1) {
    do {
      (**(code **)(**(longlong **)(param_1 + 0x728) + 0x18))
                (*(longlong **)(param_1 + 0x728),&local_30,iVar8);
      FUN_0044f900(&PTR_DAT_0135ea68,local_30);
      (**(code **)(**(longlong **)(param_1 + 0x728) + 0x18))
                (*(longlong **)(param_1 + 0x728),&local_38,iVar8);
      FUN_0044f900(&LAB_0135ea7c,local_38);
      uVar6 = (**(code **)(**(longlong **)(param_1 + 0x728) + 0x30))
                        (*(longlong **)(param_1 + 0x728),iVar8);
      cVar3 = FUN_00f1e290(*(undefined8 *)PTR_DAT_020059d8,uVar6);
      if ((cVar3 == '\0') ||
         (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x6f8) + 0x260))
                            (*(longlong **)(param_1 + 0x6f8)), cVar3 == '\0')) {
        uVar6 = (**(code **)(**(longlong **)(param_1 + 0x728) + 0x30))
                          (*(longlong **)(param_1 + 0x728),iVar8);
        cVar3 = FUN_00f1e290(*(undefined8 *)PTR_DAT_02005118,uVar6);
        if ((cVar3 != '\0') &&
           (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x6f8) + 0x260))
                              (*(longlong **)(param_1 + 0x6f8)), cVar3 != '\0')) goto LAB_0135e868;
        uVar6 = (**(code **)(**(longlong **)(param_1 + 0x728) + 0x30))
                          (*(longlong **)(param_1 + 0x728),iVar8);
        cVar3 = FUN_00f1e290(*(undefined8 *)PTR_DAT_02001630,uVar6);
        if ((cVar3 != '\0') &&
           (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x6f8) + 0x260))
                              (*(longlong **)(param_1 + 0x6f8)), cVar3 != '\0')) goto LAB_0135e868;
        uVar6 = (**(code **)(**(longlong **)(param_1 + 0x728) + 0x30))
                          (*(longlong **)(param_1 + 0x728),iVar8);
        cVar3 = FUN_00f1e290(*(undefined8 *)PTR_DAT_02001d00,uVar6);
        if (((cVar3 != '\0') &&
            (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x700) + 0x260))
                               (*(longlong **)(param_1 + 0x700)), cVar3 != '\0')) ||
           (((((**(code **)(**(longlong **)(param_1 + 0x728) + 0x18))
                         (*(longlong **)(param_1 + 0x728),&local_40,iVar8), local_40 != 0 &&
              ((**(code **)(**(longlong **)(param_1 + 0x728) + 0x18))
                         (*(longlong **)(param_1 + 0x728),&local_48,iVar8), *local_48 == 0x56)) &&
             ((**(code **)(**(longlong **)(param_1 + 0x728) + 0x18))
                        (*(longlong **)(param_1 + 0x728),&local_50,iVar8),
             *(short *)(local_50 + 2) == 0x50)) &&
            (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x6d8) + 0x260))
                               (*(longlong **)(param_1 + 0x6d8)), cVar3 != '\0'))))
        goto LAB_0135e868;
        (**(code **)(**(longlong **)(param_1 + 0x728) + 0x18))
                  (*(longlong **)(param_1 + 0x728),&local_58,iVar8);
        if (local_58 != 0) {
          (**(code **)(**(longlong **)(param_1 + 0x728) + 0x18))
                    (*(longlong **)(param_1 + 0x728),&local_60,iVar8);
          iVar5 = FUN_0044f900(&PTR_DAT_0135ea68,local_60);
          if ((iVar5 == 1) &&
             (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x260))
                                (*(longlong **)(param_1 + 0x6e0)), cVar3 != '\0'))
          goto LAB_0135e868;
        }
        (**(code **)(**(longlong **)(param_1 + 0x728) + 0x18))
                  (*(longlong **)(param_1 + 0x728),&local_68,iVar8);
        if (local_68 != 0) {
          (**(code **)(**(longlong **)(param_1 + 0x728) + 0x18))
                    (*(longlong **)(param_1 + 0x728),&local_70,iVar8);
          iVar5 = FUN_0044f900(&LAB_0135ea7c,local_70);
          if ((iVar5 == 1) &&
             (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0x260))
                                (*(longlong **)(param_1 + 0x6e8)), cVar3 != '\0'))
          goto LAB_0135e868;
        }
        uVar6 = (**(code **)(**(longlong **)(param_1 + 0x728) + 0x30))
                          (*(longlong **)(param_1 + 0x728),iVar8);
        cVar3 = FUN_00f1e290(*(undefined8 *)PTR_DAT_02005188,uVar6);
        if ((cVar3 != '\0') &&
           (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x260))
                              (*(longlong **)(param_1 + 0x6f0)), cVar3 != '\0')) goto LAB_0135e868;
        uVar6 = (**(code **)(**(longlong **)(param_1 + 0x728) + 0x30))
                          (*(longlong **)(param_1 + 0x728),iVar8);
        cVar3 = FUN_00f1e290(*(undefined8 *)PTR_DAT_02004fb8,uVar6);
        if ((cVar3 != '\0') &&
           (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x260))
                              (*(longlong **)(param_1 + 0x6f0)), cVar3 != '\0')) goto LAB_0135e868;
        uVar6 = (**(code **)(**(longlong **)(param_1 + 0x728) + 0x30))
                          (*(longlong **)(param_1 + 0x728),iVar8);
        cVar3 = FUN_00f1e290(*(undefined8 *)PTR_DAT_02003118,uVar6);
        if ((cVar3 != '\0') &&
           (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x260))
                              (*(longlong **)(param_1 + 0x6f0)), cVar3 != '\0')) goto LAB_0135e868;
        uVar6 = (**(code **)(**(longlong **)(param_1 + 0x728) + 0x30))
                          (*(longlong **)(param_1 + 0x728),iVar8);
        cVar3 = FUN_00f1e290(*(undefined8 *)PTR_DAT_02005188,uVar6);
        if ((cVar3 != '\0') &&
           (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x260))
                              (*(longlong **)(param_1 + 0x6f0)), cVar3 != '\0')) goto LAB_0135e868;
        uVar6 = (**(code **)(**(longlong **)(param_1 + 0x728) + 0x30))
                          (*(longlong **)(param_1 + 0x728),iVar8);
        cVar3 = FUN_00f1e290(*(undefined8 *)PTR_DAT_02004fb8,uVar6);
        if ((cVar3 != '\0') &&
           (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x260))
                              (*(longlong **)(param_1 + 0x6f0)), cVar3 != '\0')) goto LAB_0135e868;
      }
      else {
LAB_0135e868:
        FUN_0064dd90(*(undefined8 *)(param_1 + 0x720),&local_78);
        if (local_78 == 0) {
          cVar3 = '\x01';
        }
        else {
          (**(code **)(**(longlong **)(param_1 + 0x728) + 0x18))
                    (*(longlong **)(param_1 + 0x728),&local_80,iVar8);
          uVar6 = local_80;
          FUN_0064dd90(*(undefined8 *)(param_1 + 0x720),&local_88);
          cVar3 = FUN_005b83d0(uVar6,local_88);
        }
        if (cVar3 != '\0') {
          (**(code **)(**(longlong **)(param_1 + 0x728) + 0x18))
                    (*(longlong **)(param_1 + 0x728),&local_90,iVar8);
          uVar6 = (**(code **)(**(longlong **)(param_1 + 0x728) + 0x30))
                            (*(longlong **)(param_1 + 0x728),iVar8);
          plVar7 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4a0);
          (**(code **)(*plVar7 + 0x80))(plVar7,local_90,uVar6);
          plVar7 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
          FUN_01ad0d80(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798),plVar7);
          (**(code **)(**(longlong **)(param_1 + 0x728) + 0x18))
                    (*(longlong **)(param_1 + 0x728),&local_98,iVar8);
          iVar5 = (**(code **)(*plVar7 + 0xb0))(plVar7,local_98);
          if (iVar5 != -1) {
            lVar1 = *(longlong *)(param_1 + 0x6b0);
            plVar2 = *(longlong **)(lVar1 + 0x4a0);
            iVar5 = (**(code **)(*plVar2 + 0x28))(plVar2);
            FUN_00821790(lVar1,iVar5 + -1,1);
          }
          FUN_00410f20(plVar7);
        }
      }
      iVar8 = iVar8 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00414560(&local_98,2);
  FUN_00414480(&local_88);
  FUN_00414480(&local_80);
  FUN_00414480(&local_78);
  FUN_00414560(&local_70,9);
  return;
}

