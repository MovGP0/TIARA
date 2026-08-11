/* Ghidra address: 019a5b40 */
/* Ghidra symbol: FUN_019a5b40 */


void FUN_019a5b40(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  int local_e0;
  int local_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_d8 = 0;
  local_d0 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_90 = 0;
  local_88 = 0;
  local_78 = 0;
  local_80 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  iVar7 = *(int *)(param_2 + 0x10);
  iVar6 = 0;
  if (-1 < iVar7 + -1) {
    do {
      plVar5 = (longlong *)FUN_00b94e60(param_2,iVar6);
      cVar1 = FUN_0198a580(plVar5);
      if (cVar1 == '\x04') {
        uVar2 = (**(code **)(*plVar5 + 0xf8))(plVar5);
        cVar1 = FUN_019a5aa0(param_1,uVar2);
        if (((cVar1 == '\0') && (cVar1 = FUN_0199c7c0(plVar5), cVar1 == '\0')) &&
           (*(int *)((longlong)plVar5 + 0x18c) < 2)) {
          FUN_01d04330(plVar5,&local_60);
          iVar3 = FUN_004170c0(L"NOPCB",local_60,1);
          if (iVar3 < 1) {
            cVar1 = FUN_01d04d50(plVar5);
            if (cVar1 != '\0') {
              if (*(longlong *)(plVar5[0x35] + 8) == 0) {
                FUN_01d04330(plVar5,&local_88);
                iVar3 = FUN_004170c0(L"NOPCB",local_88,1);
              }
              else if ((*(char *)(plVar5[0x35] + 0xb0) == '\0') &&
                      (*(char *)(param_1 + 0x178) == '\0')) {
                cVar1 = FUN_019af180(*(undefined8 *)(plVar5[0x35] + 8));
                if (cVar1 == '\0') {
                  FUN_01d04330(plVar5,&local_78);
                  if (local_78 != 0) {
                    FUN_01d04330(plVar5,&local_80);
                    iVar3 = FUN_004170c0(L"NOPCB",local_80,1);
                    if (iVar3 < 1) goto LAB_019a5e18;
                  }
                  FUN_019a5b40(param_1,*(undefined8 *)(plVar5[0x35] + 8));
                  goto LAB_019a60ae;
                }
                FUN_01d04330(plVar5,&local_70);
                iVar3 = FUN_004170c0(L"NOPCB",local_70,1);
              }
              else {
                FUN_01d04330(plVar5,&local_68);
                iVar3 = FUN_004170c0(L"NOPCB",local_68,1);
              }
              if (0 < iVar3) goto LAB_019a60ae;
            }
LAB_019a5e18:
            (**(code **)(*plVar5 + 0x288))(plVar5,&local_30);
            FUN_01d05320(plVar5,&local_38,0,*PTR_DAT_02005310,*(undefined8 *)PTR_DAT_02001f18);
            local_a0 = 0;
            local_98 = 0x11;
            FUN_00442f70(&local_90,local_38,&local_a0,0);
            FUN_00414b50(&local_38,local_90);
            FUN_01d04330(plVar5,&local_b0);
            FUN_01d04330(plVar5,&local_b8);
            iVar3 = FUN_004170c0(&DAT_019a6184,local_b8,1);
            FUN_00416dc0(&local_a8,local_b0,1,iVar3 + -1);
            FUN_0043ea00(&local_40,local_a8);
            plVar5 = (longlong *)plVar5[0x7c];
            FUN_00414480(&local_48);
            local_dc = 0;
            do {
              FUN_00414480(&local_50);
              iVar3 = (**(code **)(*plVar5 + 0x28))();
              local_e0 = 0;
              if (-1 < iVar3 + -1) {
                do {
                  (**(code **)(*plVar5 + 0x18))(plVar5,&local_c8,local_e0);
                  FUN_00648720(&local_c0,local_c8);
                  iVar4 = FUN_0043fc50(local_c0,0);
                  if (iVar4 == local_dc) {
                    (**(code **)(*plVar5 + 0x18))(plVar5,&local_d0,local_e0);
                    FUN_00648780(&local_50,local_d0);
                  }
                  local_e0 = local_e0 + 1;
                  iVar3 = iVar3 + -1;
                } while (iVar3 != 0);
              }
              FUN_00416cd0(&local_48,3,local_48,&DAT_019a6194,local_50);
              local_dc = local_dc + 1;
            } while (local_dc != 4);
            FUN_00416cd0(&local_48,6,local_30,&DAT_019a6194,local_38,&DAT_019a6194,local_40,local_48
                        );
            FUN_019a58e0(param_1,&local_d8,local_48,*(undefined4 *)(param_1 + 0x160));
            FUN_00416cd0(&local_48,3,local_d8,&DAT_019a61a4,local_48);
            (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x78))
                      (*(longlong **)(param_1 + 0xd8),local_48);
          }
        }
      }
LAB_019a60ae:
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  FUN_00414560(&local_d8,7);
  FUN_00414560(&local_90,7);
  FUN_0041b800(&local_58);
  FUN_00414560(&local_50,5);
  return;
}

