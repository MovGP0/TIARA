/* Ghidra address: 019a82b0 */
/* Ghidra symbol: FUN_019a82b0 */


void FUN_019a82b0(longlong param_1,longlong param_2)

{
  char cVar1;
  short sVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50 [2];
  char *local_40;
  longlong local_38;
  undefined8 local_30;
  
  local_60 = 0;
  local_68 = 0;
  local_78 = 0;
  local_90 = 0;
  local_70 = 0;
  local_58 = 0;
  local_50[0] = 0;
  local_30 = 0;
  local_38 = 0;
  plVar4 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_004b67b0(plVar4,1);
  *(undefined1 *)((longlong)plVar4 + 0x49) = 1;
  iVar9 = *(int *)(param_2 + 0x10);
  iVar7 = 0;
  if (-1 < iVar9 + -1) {
    do {
      plVar5 = (longlong *)FUN_00b94e60(param_2,iVar7);
      cVar1 = FUN_0198a580(plVar5);
      if (cVar1 == '\x03') {
        (**(code **)(*plVar5 + 0x288))(plVar5,&local_30);
        (**(code **)(*plVar4 + 0x80))(plVar4,local_30,plVar5);
      }
      cVar1 = FUN_0198a580(plVar5);
      if (cVar1 == '\x04') {
        iVar3 = FUN_01cfd2d0();
        iVar8 = 0;
        if (-1 < iVar3 + -1) {
          do {
            cVar1 = (**(code **)(*plVar5 + 0x2d0))(plVar5,iVar8,&local_40);
            if ((cVar1 == '\t') && (*local_40 != '\0')) {
              FUN_004169a0(local_50,local_40);
              (**(code **)(*plVar4 + 0x80))(plVar4,local_50[0],plVar5);
            }
            iVar8 = iVar8 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
        cVar1 = FUN_01d3f210(plVar5);
        if (cVar1 != '\0') {
          if (*(longlong *)(plVar5[0x35] + 0x148) != 0) {
            (**(code **)(*plVar4 + 0x80))(plVar4,*(undefined8 *)(plVar5[0x35] + 0x148),plVar5);
          }
          if (*(longlong *)(plVar5[0x35] + 0x150) != 0) {
            (**(code **)(*plVar4 + 0x80))(plVar4,*(undefined8 *)(plVar5[0x35] + 0x150),plVar5);
          }
        }
      }
      if ((((*PTR_DAT_02001ab0 != '\0') && (cVar1 = FUN_0198a580(plVar5), cVar1 == '\x04')) &&
          (sVar2 = (**(code **)(*plVar5 + 0xf8))(plVar5), sVar2 == 0x39)) &&
         (((char)plVar5[0x34] == '\x01' && (*(longlong *)(plVar5[0x35] + 8) != 0)))) {
        FUN_019a82b0(param_1,*(undefined8 *)(plVar5[0x35] + 8));
      }
      iVar7 = iVar7 + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  iVar9 = 0;
  while (iVar7 = iVar9, iVar9 = (**(code **)(*plVar4 + 0x28))(plVar4), iVar7 < iVar9) {
    (**(code **)(*plVar4 + 0x18))(plVar4,&local_38,iVar7);
    iVar3 = 1;
    iVar9 = iVar7;
    while( true ) {
      iVar9 = iVar9 + 1;
      iVar8 = (**(code **)(*plVar4 + 0x28))(plVar4);
      if (iVar9 < iVar8) {
        (**(code **)(*plVar4 + 0x18))(plVar4,&local_58,iVar9);
        if (local_58 == local_38) {
          bVar10 = true;
        }
        else if ((local_58 == 0) || (local_38 == 0)) {
          bVar10 = false;
        }
        else {
          iVar8 = FUN_0043e420(local_58,local_38);
          bVar10 = iVar8 == 0;
        }
      }
      else {
        bVar10 = false;
      }
      if (!bVar10) break;
      iVar3 = iVar3 + 1;
    }
    if (iVar3 == 1) {
      uVar6 = (**(code **)(*plVar4 + 0x30))(plVar4,iVar7);
      cVar1 = FUN_0198a580(uVar6);
      if (cVar1 == '\x03') {
        FUN_0041ddd0(&local_70,&PTR_PTR_0198a550);
        FUN_00de8a20(&local_68,L"SchEd",L"sERCSingleJumper",*(undefined8 *)(param_1 + 0x450),
                     local_70);
        FUN_004168b0(&local_78,local_68);
        uVar6 = (**(code **)(*plVar4 + 0x30))(plVar4,iVar7);
        FUN_019a7350(param_1,&local_90,uVar6);
        local_88 = local_90;
        local_80 = 0x11;
        FUN_00442f70(&local_60,local_78,&local_88,0);
        local_98 = (**(code **)(*plVar4 + 0x30))(plVar4,iVar7);
        uVar6 = FUN_019a74e0(param_1,1,&local_98,0);
        (**(code **)(**(longlong **)(param_1 + 0x4b8) + 0x80))
                  (*(longlong **)(param_1 + 0x4b8),local_60,uVar6);
        *(int *)(param_1 + 0x438) = *(int *)(param_1 + 0x438) + 1;
      }
    }
  }
  FUN_00410f20(plVar4);
  FUN_00414480(&local_90);
  FUN_00414560(&local_78,2);
  FUN_00414520(&local_68);
  FUN_00414560(&local_60,3);
  FUN_00414560(&local_38,2);
  return;
}

