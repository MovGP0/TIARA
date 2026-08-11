/* Ghidra address: 01456ef0 */
/* Ghidra symbol: FUN_01456ef0 */


void FUN_01456ef0(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  double *pdVar2;
  double dVar3;
  undefined8 uVar4;
  undefined8 local_res10 [3];
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
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
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_100 = 0;
  local_108 = 0;
  local_f8 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_e0 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_90 = 0;
  local_98 = 0;
  local_88 = 0;
  local_78 = 0;
  local_80 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_38 = 0;
  local_40 = 0;
  local_30 = 0;
  local_20 = 0;
  local_28 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_019b7940(param_3);
  if ((*(char *)(param_3 + 0x92) == '\0') && (iVar1 = *(int *)(param_1 + 0xed0), 0 < iVar1)) {
    pdVar2 = (double *)(param_1 + 0x200 + (longlong)iVar1 * 0x28);
    do {
      dVar3 = (double)FUN_0040c850(*(double *)(param_3 + 0xa0) * *pdVar2);
      if (1e-100 < dVar3) {
        FUN_019b7940(param_3);
        dVar3 = (double)FUN_0040c850(pdVar2[2]);
        if (1e-100 <= dVar3) {
          if (*(double *)(param_3 + 0xa0) * *pdVar2 < 0.0) {
            *pdVar2 = -*pdVar2;
            pdVar2[3] = pdVar2[3] + 3.141592653589793;
          }
          if (iVar1 == *(int *)(param_1 + 0xed0)) {
            FUN_00efa6e0(&local_88,*(double *)(param_3 + 0xa0) * 2.0 * *pdVar2,
                         *(undefined1 *)(param_3 + 0xe98));
            FUN_019b6e50(param_1 + 0xea8,local_88,param_3);
          }
          else if (*(double *)(param_3 + 0xa0) * 2.0 * *pdVar2 <= 0.0) {
            FUN_00efa6e0(&local_a0,*(double *)(param_3 + 0xa0) * 2.0 * *pdVar2,
                         *(undefined1 *)(param_3 + 0xe98));
            FUN_019b6e50(param_1 + 0xea8,local_a0,param_3);
          }
          else {
            FUN_00efa6e0(&local_98,*(double *)(param_3 + 0xa0) * 2.0 * *pdVar2,
                         *(undefined1 *)(param_3 + 0xe98));
            FUN_00416ba0(&local_90,&DAT_01457d0c,local_98);
            FUN_019b6e50(param_1 + 0xea8,local_90,param_3);
          }
          dVar3 = (double)FUN_0040c850(pdVar2[4]);
          if (1e-100 <= dVar3) {
            dVar3 = (double)FUN_0040c850(pdVar2[4]);
            dVar3 = (double)FUN_0040c850(dVar3 - 1.0);
            if (1e-100 <= dVar3) {
              FUN_00416cd0(&local_b0,3,L"*\\e(",local_res10[0],&DAT_01457d44);
              FUN_019b6e50(param_1 + 0xea8,local_b0,param_3);
            }
            else {
              FUN_00416ba0(&local_a8,&DAT_01457d1c,local_res10[0]);
              FUN_019b6e50(param_1 + 0xea8,local_a8,param_3);
            }
            dVar3 = (double)FUN_0040c850(pdVar2[4] - 1.0);
            if (1e-100 <= dVar3) {
              FUN_00efa6e0(&local_b8,pdVar2[4],*(undefined1 *)(param_3 + 0xe98));
              FUN_00416ad0(&local_b8,&DAT_01457d54);
              FUN_019b6e50(param_1 + 0xea8,local_b8,param_3);
            }
          }
          dVar3 = (double)FUN_0040c850(pdVar2[1]);
          if (1e-100 <= dVar3) {
            dVar3 = (double)FUN_0040c850(pdVar2[1] - 1.0);
            if (1e-100 <= dVar3) {
              dVar3 = (double)FUN_0040c850(pdVar2[1] + 1.0);
              if (1e-100 <= dVar3) {
                FUN_00efa6e0(&local_d8,pdVar2[1],*(undefined1 *)(param_3 + 0xe98));
                FUN_00416cd0(&local_d0,5,L"*\\e(e,",local_d8,&DAT_01457d1c,local_res10[0],
                             &DAT_01457d54);
                FUN_019b6e50(param_1 + 0xea8,local_d0,param_3);
              }
              else {
                FUN_00416cd0(&local_c8,3,L"*\\e(e,-",local_res10[0],&DAT_01457d54);
                FUN_019b6e50(param_1 + 0xea8,local_c8,param_3);
              }
            }
            else {
              FUN_00416cd0(&local_c0,3,L"*\\e(e,",local_res10[0],&DAT_01457d54);
              FUN_019b6e50(param_1 + 0xea8,local_c0,param_3);
            }
          }
          dVar3 = (double)FUN_0040c850(pdVar2[2]);
          dVar3 = (double)FUN_0040c850(dVar3 - 1.0);
          if (1e-100 <= dVar3) {
            uVar4 = FUN_0040c850(pdVar2[2]);
            FUN_00efa6e0(&local_f0,uVar4,*(undefined1 *)(param_3 + 0xe98));
            FUN_00416cd0(&local_e8,4,L"*cos(",local_f0,&DAT_01457d1c,local_res10[0]);
            FUN_019b6e50(param_1 + 0xea8,local_e8,param_3);
          }
          else {
            FUN_00416ba0(&local_e0,L"*cos(",local_res10[0]);
            FUN_019b6e50(param_1 + 0xea8,local_e0,param_3);
          }
          if (pdVar2[2] <= 0.0 && pdVar2[2] != 0.0) {
            pdVar2[3] = -pdVar2[3];
          }
          dVar3 = (double)FUN_0040c850(pdVar2[3] * 57.29577951308232);
          if (1e-100 <= dVar3) {
            if (0.0 <= pdVar2[3] * 57.29577951308232) {
              FUN_00efa6e0(&local_108,pdVar2[3] * 57.29577951308232,*(undefined1 *)(param_3 + 0xe98)
                          );
              FUN_00416cd0(&local_100,3,&DAT_01457d0c,local_108,&LAB_01457ddc);
              FUN_019b6e50(param_1 + 0xea8,local_100,param_3);
            }
            else {
              FUN_00efa6e0(&local_f8,pdVar2[3] * 57.29577951308232,*(undefined1 *)(param_3 + 0xe98))
              ;
              FUN_00416ad0(&local_f8,&LAB_01457ddc);
              FUN_019b6e50(param_1 + 0xea8,local_f8,param_3);
            }
          }
          else {
            FUN_019b6e50(param_1 + 0xea8,&DAT_01457d54,param_3);
          }
        }
        else {
          if (iVar1 == *(int *)(param_1 + 0xed0)) {
            dVar3 = (double)FUN_0040c850(*(double *)(param_3 + 0xa0) * *pdVar2 - 1.0);
            if (1e-100 <= dVar3) {
              dVar3 = (double)FUN_0040c850(*(double *)(param_3 + 0xa0) * *pdVar2 + 1.0);
              if (1e-100 <= dVar3) {
                FUN_00efa6e0(&local_30,*(double *)(param_3 + 0xa0) * *pdVar2,
                             *(undefined1 *)(param_3 + 0xe98));
                FUN_019b6e50(param_1 + 0xea8,local_30,param_3);
              }
              else {
                FUN_019b6e50(param_1 + 0xea8,&DAT_01457cfc,param_3);
              }
            }
            else {
              FUN_019b6e50(param_1 + 0xea8,0,param_3);
            }
          }
          else {
            dVar3 = (double)FUN_0040c850(*(double *)(param_3 + 0xa0) * *pdVar2 - 1.0);
            if (1e-100 <= dVar3) {
              dVar3 = (double)FUN_0040c850(*(double *)(param_3 + 0xa0) * *pdVar2 + 1.0);
              if (1e-100 <= dVar3) {
                if (*(double *)(param_3 + 0xa0) * *pdVar2 <= 0.0) {
                  FUN_00efa6e0(&local_48,*(double *)(param_3 + 0xa0) * *pdVar2,
                               *(undefined1 *)(param_3 + 0xe98));
                  FUN_019b6e50(param_1 + 0xea8,local_48,param_3);
                }
                else {
                  FUN_00efa6e0(&local_40,*(double *)(param_3 + 0xa0) * *pdVar2,
                               *(undefined1 *)(param_3 + 0xe98));
                  FUN_00416ba0(&local_38,&DAT_01457d0c,local_40);
                  FUN_019b6e50(param_1 + 0xea8,local_38,param_3);
                }
              }
              else {
                FUN_019b6e50(param_1 + 0xea8,&DAT_01457cfc,param_3);
              }
            }
            else {
              FUN_019b6e50(param_1 + 0xea8,&DAT_01457d0c,param_3);
            }
          }
          dVar3 = (double)FUN_0040c850(pdVar2[4]);
          if (1e-100 <= dVar3) {
            dVar3 = (double)FUN_0040c850(pdVar2[4]);
            dVar3 = (double)FUN_0040c850(dVar3 - 1.0);
            if (1e-100 <= dVar3) {
              FUN_00416cd0(&local_58,3,L"*\\e(",local_res10[0],&DAT_01457d44);
              FUN_019b6e50(param_1 + 0xea8,local_58,param_3);
            }
            else {
              FUN_00416ba0(&local_50,&DAT_01457d1c,local_res10[0]);
              FUN_019b6e50(param_1 + 0xea8,local_50,param_3);
            }
            dVar3 = (double)FUN_0040c850(pdVar2[4] - 1.0);
            if (1e-100 <= dVar3) {
              FUN_00efa6e0(&local_60,pdVar2[4],*(undefined1 *)(param_3 + 0xe98));
              FUN_00416ad0(&local_60,&DAT_01457d54);
              FUN_019b6e50(param_1 + 0xea8,local_60,param_3);
            }
          }
          dVar3 = (double)FUN_0040c850(pdVar2[1]);
          if (1e-100 <= dVar3) {
            dVar3 = (double)FUN_0040c850(*(double *)(param_3 + 0xa0) * *pdVar2);
            dVar3 = (double)FUN_0040c850(dVar3 - 1.0);
            if (1e-100 <= dVar3) {
              FUN_019b6e50(param_1 + 0xea8,L"*\\e(e,",param_3);
            }
            else {
              FUN_019b6e50(param_1 + 0xea8,L"\\e(e,",param_3);
            }
            dVar3 = (double)FUN_0040c850(pdVar2[1] - 1.0);
            if (1e-100 <= dVar3) {
              dVar3 = (double)FUN_0040c850(pdVar2[1] + 1.0);
              if (1e-100 <= dVar3) {
                FUN_00efa6e0(&local_80,pdVar2[1],*(undefined1 *)(param_3 + 0xe98));
                FUN_00416cd0(&local_78,4,local_80,&DAT_01457d1c,local_res10[0],&DAT_01457d54);
                FUN_019b6e50(param_1 + 0xea8,local_78,param_3);
              }
              else {
                FUN_00416cd0(&local_70,3,&DAT_01457cfc,local_res10[0],&DAT_01457d54);
                FUN_019b6e50(param_1 + 0xea8,local_70,param_3);
              }
            }
            else {
              FUN_00416ba0(&local_68,local_res10[0],&DAT_01457d54);
              FUN_019b6e50(param_1 + 0xea8,local_68,param_3);
            }
          }
          else {
            dVar3 = (double)FUN_0040c850(*(double *)(param_3 + 0xa0) * *pdVar2);
            dVar3 = (double)FUN_0040c850(dVar3 - 1.0);
            if (dVar3 < 1e-100) {
              FUN_019b6e50(param_1 + 0xea8,&DAT_01457d64,param_3);
            }
          }
        }
      }
      iVar1 = iVar1 + -1;
      pdVar2 = pdVar2 + -5;
    } while (iVar1 != 0);
  }
  FUN_00414560(&local_108,0x1e);
  FUN_00414480(local_res10);
  return;
}

