/* Ghidra address: 01a7bdc0 */
/* Ghidra symbol: FUN_01a7bdc0 */


void FUN_01a7bdc0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *plVar8;
  int iVar9;
  int iVar10;
  undefined8 *in_stack_fffffffffffffef8;
  int local_dc;
  undefined1 local_d0 [16];
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_b0 = 0;
  local_b8 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_90 = 0;
  local_98 = 0;
  local_80 = 0;
  local_88 = 0;
  local_70 = 0;
  local_78 = 0;
  local_60 = 0;
  local_68 = 0;
  local_58 = 0;
  local_50 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  FUN_01aee720(&local_50,0x410,*(undefined4 *)(param_1 + 0x6b8),L"DFAutoCurveLabelsBtn");
  FUN_01aed550(*(undefined8 *)PTR_DAT_020041a8,local_50);
  if (*(longlong *)(param_1 + 0x798) == 0) {
    FUN_0082a6c0(*(undefined8 *)(param_1 + 0xa90),1);
    FUN_01a794b0(param_1,param_2);
  }
  else {
    plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x798) + 0xd8);
    lVar5 = (**(code **)(*plVar6 + 0x30))(plVar6,0);
    if (*(char *)(lVar5 + 0x58) == '\a') {
      plVar6 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
      (**(code **)(*plVar6 + 0x10))(plVar6,*(undefined8 *)(*(longlong *)(param_1 + 0x798) + 0xe0));
      iVar2 = (**(code **)(*plVar6 + 0x28))(plVar6);
      local_dc = 1;
      if (0 < iVar2) {
        do {
          uVar7 = (**(code **)(*plVar6 + 0x30))(plVar6,local_dc + -1);
          cVar1 = FUN_004113d0(uVar7,&LAB_00f12330);
          if (cVar1 != '\0') {
            uVar7 = (**(code **)(*plVar6 + 0x30))(plVar6,local_dc + -1);
            plVar8 = (longlong *)FUN_00f15c70(uVar7);
            (**(code **)(*plVar8 + 0x128))(plVar8,DAT_01fcab48,*(undefined8 *)(param_1 + 0x780));
          }
          local_dc = local_dc + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      FUN_0082a6c0(*(undefined8 *)(param_1 + 0xa90),1);
      *(undefined1 *)(param_1 + 0x7a8) = 0;
      FUN_00410f20(plVar6);
    }
    else {
      uVar7 = FUN_01a5d940(&PTR_FUN_01a5c280,1);
      *(undefined8 *)(param_1 + 0xff0) = uVar7;
      lVar5 = *(longlong *)(param_1 + 0xff0);
      *(undefined1 *)(*(longlong *)(lVar5 + 0x90) + 0x98) = 1;
      *(undefined1 *)(lVar5 + 0x99) = 1;
      *(undefined1 *)(lVar5 + 0xa0) = 1;
      *(undefined1 *)(lVar5 + 0x80) = 0;
      plVar6 = *(longlong **)(*(longlong *)(lVar5 + 0x90) + 0x80);
      (**(code **)(*plVar6 + 0x10))(plVar6,*(undefined8 *)(param_1 + 0x1038));
      iVar9 = 1;
      iVar10 = 1;
      plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x798) + 0xd8);
      iVar2 = (**(code **)(*plVar6 + 0x28))(plVar6);
      if (iVar2 < 2) {
        FUN_01ae85a0(*(undefined8 *)(param_1 + 0x798));
        iVar2 = 0;
        while( true ) {
          in_stack_fffffffffffffef8 = &local_38;
          cVar1 = FUN_01ae8bc0(*(undefined8 *)(param_1 + 0x798),0,&local_44,&local_30,
                               in_stack_fffffffffffffef8);
          if ((cVar1 == '\0') || (0x13 < iVar2)) break;
          uVar7 = FUN_01cee3e0(*(undefined8 *)(param_1 + 0x7a0),local_44);
          cVar1 = FUN_004113d0(uVar7,&PTR_FUN_01ab19e8);
          if (cVar1 == '\0') {
            uVar7 = FUN_01cee3e0(*(undefined8 *)(param_1 + 0x7a0),local_44);
            cVar1 = FUN_004113d0(uVar7,&PTR_FUN_01ab13d0);
            if (cVar1 == '\0') {
              FUN_0043f750(&local_b8,local_44);
              FUN_00416cd0(&local_b0,6,&DAT_01a7c930,local_b8,&LAB_01a7c944,local_30,&DAT_01a7c904,
                           local_38);
              plVar6 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0xff0) + 0x90) + 0xa0);
              (**(code **)(*plVar6 + 0x78))(plVar6);
            }
            else {
              FUN_0043f750(&local_a8,iVar9);
              FUN_00416cd0(&local_a0,6,L"\\i(p,",local_a8,&DAT_01a7c8f0,local_30,&DAT_01a7c904,
                           local_38);
              plVar6 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0xff0) + 0x90) + 0xa0);
              (**(code **)(*plVar6 + 0x78))(plVar6);
              iVar9 = iVar9 + 1;
            }
          }
          else {
            FUN_0043f750(&local_98,iVar10);
            FUN_00416cd0(&local_90,6,L"\\i(z,",local_98,&DAT_01a7c8f0,local_30,&DAT_01a7c904,
                         local_38);
            plVar6 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0xff0) + 0x90) + 0xa0);
            (**(code **)(*plVar6 + 0x78))(plVar6);
            iVar10 = iVar10 + 1;
          }
          iVar2 = iVar2 + 1;
        }
      }
      else {
        iVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x798) + 0xd8) + 0x28))();
        local_dc = 0;
        if (-1 < iVar2 + -1) {
          do {
            plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x798) + 0xd8);
            lVar5 = (**(code **)(*plVar6 + 0x30))(plVar6,local_dc);
            lVar5 = (**(code **)(**(longlong **)(lVar5 + 0x78) + 0x30))
                              (*(longlong **)(lVar5 + 0x78),0);
            FUN_00414b50(&local_40,*(undefined8 *)(lVar5 + 0xd8));
            iVar3 = FUN_004170c0(&DAT_01a7c8a8,local_40,1);
            if (0 < iVar3) {
              iVar3 = FUN_004170c0(&DAT_01a7c8a8,local_40,1);
              FUN_00416dc0(&local_40,local_40,1,iVar3 + -1);
            }
            iVar3 = FUN_004170c0(&DAT_01a7c8b8,local_40,1);
            if (0 < iVar3) {
              iVar3 = FUN_004170c0(&DAT_01a7c8b8,local_40,1);
              FUN_00416dc0(&local_40,local_40,1,iVar3 + -1);
            }
            FUN_00416ba0(&local_58,local_40,&DAT_01a7c8c8);
            plVar6 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0xff0) + 0x90) + 0xa0);
            (**(code **)(*plVar6 + 0x78))(plVar6,local_58);
            FUN_01ae85a0(*(undefined8 *)(param_1 + 0x798));
            iVar3 = 0;
            while( true ) {
              in_stack_fffffffffffffef8 = &local_38;
              cVar1 = FUN_01ae8bc0(*(undefined8 *)(param_1 + 0x798),local_dc,&local_44,&local_30,
                                   in_stack_fffffffffffffef8);
              if ((cVar1 == '\0') || (0x13 < iVar3)) break;
              uVar7 = FUN_01cee3e0(*(undefined8 *)(param_1 + 0x7a0),local_44);
              cVar1 = FUN_004113d0(uVar7,&PTR_FUN_01ab19e8);
              if (cVar1 == '\0') {
                uVar7 = FUN_01cee3e0(*(undefined8 *)(param_1 + 0x7a0),local_44);
                cVar1 = FUN_004113d0(uVar7,&PTR_FUN_01ab13d0);
                if (cVar1 == '\0') {
                  FUN_0043f750(&local_88,local_44);
                  FUN_00416cd0(&local_80,6,&DAT_01a7c930,local_88,&LAB_01a7c944,local_30,
                               &DAT_01a7c904,local_38);
                  plVar6 = *(longlong **)
                            (*(longlong *)(*(longlong *)(param_1 + 0xff0) + 0x90) + 0xa0);
                  (**(code **)(*plVar6 + 0x78))(plVar6,local_80);
                }
                else {
                  FUN_0043f750(&local_78,iVar9);
                  FUN_00416cd0(&local_70,6,L"\\i(p,",local_78,&DAT_01a7c8f0,local_30,&DAT_01a7c904,
                               local_38);
                  plVar6 = *(longlong **)
                            (*(longlong *)(*(longlong *)(param_1 + 0xff0) + 0x90) + 0xa0);
                  (**(code **)(*plVar6 + 0x78))(plVar6,local_70);
                  iVar9 = iVar9 + 1;
                }
              }
              else {
                FUN_0043f750(&local_68,iVar10);
                FUN_00416cd0(&local_60,6,L"\\i(z,",local_68,&DAT_01a7c8f0,local_30,&DAT_01a7c904,
                             local_38);
                plVar6 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0xff0) + 0x90) + 0xa0)
                ;
                (**(code **)(*plVar6 + 0x78))(plVar6,local_60);
                iVar10 = iVar10 + 1;
              }
              iVar3 = iVar3 + 1;
            }
            local_dc = local_dc + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
      }
      local_c0 = FUN_00498310(0xffffff9c,0xffffff9c);
      (**(code **)(**(longlong **)(param_1 + 0xff0) + 200))
                (*(longlong **)(param_1 + 0xff0),&local_c0);
      *(undefined4 *)(param_1 + 0x1018) = 0xffffff9c;
      *(undefined4 *)(param_1 + 0x101c) = 0xffffff9c;
      uVar4 = FUN_01a5ee60(*(undefined8 *)(param_1 + 0xff0),*(undefined8 *)(param_1 + 0x780));
      *(undefined4 *)(param_1 + 0x1014) = uVar4;
      uVar4 = FUN_01a5eed0(*(undefined8 *)(param_1 + 0xff0),*(undefined8 *)(param_1 + 0x780));
      *(undefined4 *)(param_1 + 0x1010) = uVar4;
      plVar6 = *(longlong **)(param_1 + 0xff0);
      plVar6[0x11] = *(longlong *)(param_1 + 0x798);
      (**(code **)(*plVar6 + 0xe8))(plVar6);
      FUN_01a5f250(*(undefined8 *)(param_1 + 0xff0));
      FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
      FUN_0064e140(param_1,5);
      iVar2 = *(int *)(param_1 + 0x1018);
      iVar9 = *(int *)(param_1 + 0x101c);
      FUN_00498350(local_d0,0,0,0,(ulonglong)in_stack_fffffffffffffef8 & 0xffffffff00000000);
      FUN_01a8dd40(*(undefined8 *)(param_1 + 0x780),iVar2,iVar9,iVar2 + *(int *)(param_1 + 0x1014),
                   iVar9 + *(int *)(param_1 + 0x1010),local_d0);
      *(undefined1 *)(param_1 + 0x7a8) = 6;
    }
  }
  FUN_00414560(&local_b8,0xe);
  FUN_00414560(&local_40,3);
  return;
}

