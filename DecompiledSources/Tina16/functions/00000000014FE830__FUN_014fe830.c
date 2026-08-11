/* Ghidra address: 014fe830 */
/* Ghidra symbol: FUN_014fe830 */


void FUN_014fe830(longlong param_1)

{
  undefined1 uVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  char *pcVar10;
  longlong lVar11;
  undefined8 uVar12;
  int iVar13;
  ulonglong in_stack_ffffffffffffff58;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50 [2];
  undefined8 local_40;
  longlong local_38;
  char *local_30;
  
  local_80 = 0;
  local_88 = 0;
  local_70 = 0;
  local_78 = 0;
  local_68 = 0;
  local_58 = 0;
  local_60 = 0;
  local_50[0] = 0;
  local_40 = 0;
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x260))(*(longlong **)(param_1 + 0x6b0));
  *PTR_DAT_020024f8 = uVar1;
  if (*PTR_DAT_02002b78 != '\0') {
    *PTR_DAT_020024f8 = *(int *)(PTR_DAT_02004010 + 0x82e) == 2;
  }
  cVar2 = *PTR_DAT_02002b78;
  *(char *)(param_1 + 0x741) = cVar2;
  if (cVar2 == '\0') {
    in_stack_ffffffffffffff58 = 0;
    uVar6 = FUN_01cc3870(&PTR_FUN_01cb5bc0,1,10,0,0);
    *(undefined8 *)PTR_DAT_02001440 = uVar6;
    FUN_01cc6020(*(undefined8 *)PTR_DAT_02001440);
  }
  uVar6 = FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_014fd730(param_1);
  if (*(char *)(param_1 + 0x741) == '\0') {
    uVar7 = FUN_019a4600();
    iVar4 = FUN_019954d0(uVar7);
    lVar8 = FUN_00409570((longlong)iVar4);
    uVar7 = FUN_019a4600();
    cVar2 = FUN_01995600(uVar7,0,0);
    if (cVar2 == '\0') {
      FUN_01d426b0(2000,&LAB_014fed50);
    }
    uVar7 = FUN_019a4600();
    plVar9 = (longlong *)FUN_01995660(uVar7,0,0);
    while ((*PTR_DAT_02002ce0 == '\0' && (plVar9 != (longlong *)0x0))) {
      uVar7 = *(undefined8 *)(*(longlong *)PTR_DAT_02001440 + 8);
      uVar3 = (**(code **)(*plVar9 + 0xf8))(plVar9);
      if (uVar3 < 0x22) {
        if (uVar3 == 0x21) goto LAB_014fea5f;
        if (uVar3 == 4) {
          pcVar10 = (char *)FUN_01cfd6a0(plVar9);
          if (*pcVar10 == '\x01') {
            iVar4 = (**(code **)(*plVar9 + 0x210))(plVar9,0);
            *(undefined1 *)(lVar8 + -1 + (longlong)iVar4) = 1;
            (**(code **)(*plVar9 + 0x288))(plVar9,local_50);
            FUN_01cc34d0(uVar7,local_50[0],iVar4,0);
          }
        }
        else if (uVar3 == 5) goto LAB_014fea5f;
      }
      else {
        if (uVar3 != 0x77) {
          if ((uVar3 == 0x86) &&
             ((**(code **)(*plVar9 + 0x2d0))(plVar9,2,&local_30), *local_30 == '\0')) {
            uVar5 = (**(code **)(*plVar9 + 0x210))(plVar9,0);
            cVar2 = FUN_015266c0(uVar5,uVar6,&local_38);
            if (cVar2 != '\0') {
              (**(code **)(*plVar9 + 0x288))(plVar9,&local_70);
              FUN_017ff4f0(plVar9,&local_78);
              in_stack_ffffffffffffff58 = in_stack_ffffffffffffff58 & 0xffffffffffffff00;
              lVar11 = FUN_01cc35a0(uVar7,local_70,local_78,uVar6,in_stack_ffffffffffffff58);
              (**(code **)(*plVar9 + 0x2d0))(plVar9,0,&local_30);
              *(char *)(lVar11 + 0x50) = *local_30;
              (**(code **)(*plVar9 + 0x2d0))(plVar9,1,&local_30);
              FUN_004169a0(&local_40,local_30);
              FUN_004169a0(&local_88,local_38 + 0x2d8);
              FUN_017c4060(&local_80,local_88,local_40);
              FUN_00414ad0(lVar11 + 0x48,local_80);
            }
          }
          goto LAB_014fec1d;
        }
LAB_014fea5f:
        iVar4 = (**(code **)(*plVar9 + 0x210))(plVar9);
        if (iVar4 == 0) {
          pcVar10 = (char *)FUN_01cfd6a0(plVar9);
          if (*pcVar10 == '\x01') {
            iVar4 = (**(code **)(*plVar9 + 0x210))(plVar9,0);
            *(undefined1 *)(lVar8 + -1 + (longlong)iVar4) = 1;
            (**(code **)(*plVar9 + 0x288))(plVar9,&local_68);
            FUN_01cc34d0(uVar7,local_68,iVar4,0);
          }
        }
        else {
          uVar7 = FUN_00b89270();
          FUN_00b8e520(uVar7,&local_58,0x50f);
          uVar7 = FUN_00b89270();
          FUN_00b8e520(uVar7,&local_60,0x513);
          FUN_00416ad0(&local_58);
          FUN_016fd8d0(local_58);
        }
      }
LAB_014fec1d:
      uVar7 = FUN_019a4600();
      FUN_01995800(uVar7,0,0);
      uVar7 = FUN_019a4600();
      plVar9 = (longlong *)FUN_01995660(uVar7);
    }
    uVar7 = *(undefined8 *)(*(longlong *)PTR_DAT_02001440 + 8);
    uVar12 = FUN_019a4600();
    iVar4 = FUN_019954d0(uVar12);
    iVar13 = 1;
    if (0 < iVar4) {
      do {
        if (*(char *)(lVar8 + -1 + (longlong)iVar13) == '\0') {
          FUN_01cc34d0(uVar7,0,iVar13,0);
        }
        iVar13 = iVar13 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    uVar7 = FUN_019a4600();
    iVar4 = FUN_019954d0(uVar7);
    FUN_004095f0(lVar8,(longlong)iVar4);
  }
  *(undefined2 *)(param_1 + 0x782) = 0x400;
  *(undefined4 *)(param_1 + 0x9c0) = 0;
  FUN_014fd9d0();
  FUN_00410f20(uVar6);
  FUN_00414560(&local_88,8);
  FUN_00414480(&local_40);
  return;
}

