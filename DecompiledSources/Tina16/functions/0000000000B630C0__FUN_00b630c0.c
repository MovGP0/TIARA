/* Ghidra address: 00b630c0 */
/* Ghidra symbol: FUN_00b630c0 */


void FUN_00b630c0(longlong param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  short sVar9;
  int local_d0;
  int local_cc;
  longlong local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  longlong local_80;
  undefined1 local_78;
  undefined1 local_77;
  undefined1 local_70 [8];
  undefined1 local_68;
  undefined1 local_67;
  undefined8 local_60 [2];
  short *local_50;
  char *local_48;
  longlong local_40;
  longlong local_38;
  undefined8 local_30;
  
  local_b0 = 0;
  local_a8 = 0;
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_88 = 0;
  local_80 = 0;
  local_60[0] = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = (char *)0x0;
  uVar6 = FUN_00b1ae90(&DAT_00b1a180,1,0xfff);
  *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x58) = uVar6;
  uVar6 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x50) = uVar6;
  uVar2 = FUN_00b59a10(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x18) + 8));
  FUN_004aef40(uVar6,uVar2);
  iVar3 = FUN_00b59a10();
  local_d0 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar6 = FUN_00410e60(&PTR_FUN_00472dd0,1);
      FUN_004ae7e0(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x50),uVar6);
      lVar7 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x18) + 8),
                           local_d0);
      uVar2 = FUN_00b4e330(*(undefined8 *)(lVar7 + 0x10));
      FUN_004aef40(uVar6,uVar2);
      FUN_00b598d0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x18) + 8),local_d0
                  );
      iVar4 = FUN_00b4e330();
      local_cc = 0;
      if (-1 < iVar4 + -1) {
        do {
          lVar7 = FUN_00b598d0(*(undefined8 *)
                                (*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x18) + 8),local_d0);
          lVar7 = FUN_00b4fc70(*(undefined8 *)(lVar7 + 0x10),local_cc);
          local_50 = (short *)(lVar7 + 0x28);
          sVar1 = *local_50;
          if (((sVar1 == 0x100) || (sVar1 == 0x102)) || (sVar1 == 8)) {
            uVar8 = 0;
            FUN_004144d0(&local_40);
            sVar9 = 0;
            if (sVar1 == 0x100) {
              FUN_00466730(&local_48,lVar7 + 0x28,0);
              FUN_00b14fc0(local_60,local_48);
              FUN_00414c70(&local_48,local_60[0]);
              if (*local_48 == '\x01') {
                uVar8 = 1;
                iVar5 = 0;
                if (local_48 != (char *)0x0) {
                  iVar5 = *(int *)(local_48 + -4);
                }
                sVar9 = (short)((longlong)(iVar5 + -1) / 2);
              }
              else {
                sVar9 = 0;
                if (local_48 != (char *)0x0) {
                  sVar9 = (short)*(undefined4 *)(local_48 + -4);
                }
                sVar9 = sVar9 + -1;
              }
              iVar5 = 0;
              if (local_48 != (char *)0x0) {
                iVar5 = *(int *)(local_48 + -4);
              }
              FUN_00415ad0(&local_48,local_48,2,iVar5 + -1);
            }
            else if ((sVar1 == 8) || (sVar1 == 0x102)) {
              uVar8 = 1;
              FUN_00467310(&local_38,lVar7 + 0x28);
              sVar9 = 0;
              if (local_38 != 0) {
                sVar9 = (short)(*(uint *)(local_38 + -4) >> 1);
              }
              FUN_00b15100(&local_48,local_38);
            }
            local_68 = 1;
            local_67 = (undefined1)sVar9;
            FUN_00414ff0(local_70,&local_68);
            local_78 = 1;
            local_77 = (undefined1)((ushort)sVar9 >> 8);
            FUN_00415110(local_70,&local_78);
            FUN_004154b0(&local_30,local_70);
            FUN_00b4f740(lVar7,&local_80);
            if (local_80 == 0) {
              FUN_004153d0(&local_a8,uVar8);
              FUN_004155b0(&local_30,local_a8);
            }
            else {
              FUN_00b4f740(lVar7,&local_88);
              uVar2 = FUN_00b4dab0(lVar7);
              FUN_00b37360(&local_40,local_88,uVar2,
                           *(undefined8 *)
                            (*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x18) + 0x18));
              iVar5 = 0;
              if (local_40 != 0) {
                iVar5 = *(int *)(local_40 + -4);
              }
              FUN_004153d0(&local_90,uVar8 | 8,0);
              FUN_004153d0(&local_98,iVar5 / 4,0);
              FUN_004153d0(&local_a0,(ushort)(iVar5 / 4) >> 8,0);
              FUN_00415980(&local_30,4,local_30,local_90,local_98,local_a0);
            }
            FUN_004155b0(&local_30,local_48);
            FUN_00b4f740(lVar7,&local_b0);
            if (local_b0 != 0) {
              FUN_004155b0(&local_30,local_40);
            }
            iVar5 = FUN_00b1b100(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x58),&local_30);
            if (iVar5 < 0) {
              iVar5 = FUN_00b1b130(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x58));
              FUN_00b1b070(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x58),local_30);
            }
            FUN_004ae7e0(uVar6,(longlong)iVar5);
          }
          else {
            FUN_004ae7e0(uVar6,0);
          }
          local_cc = local_cc + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      local_d0 = local_d0 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00414590(&local_b0,7);
  FUN_004144d0(local_60);
  FUN_00414590(&local_48,2);
  FUN_00414520(&local_38);
  FUN_004144d0(&local_30);
  return;
}

