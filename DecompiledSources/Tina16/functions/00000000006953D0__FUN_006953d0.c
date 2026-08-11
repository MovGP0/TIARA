/* Ghidra address: 006953d0 */
/* Ghidra symbol: FUN_006953d0 */


void FUN_006953d0(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined1 local_168 [12];
  int local_15c;
  int local_158;
  int iStack_154;
  undefined1 local_150 [16];
  undefined1 local_140 [16];
  undefined1 local_130 [16];
  undefined1 local_120 [16];
  undefined1 local_110 [16];
  undefined1 local_100 [16];
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined8 local_30;
  
  local_158 = (int)*(short *)(param_2 + 0x10);
  iStack_154 = (int)*(short *)(param_2 + 0x12);
  iVar2 = local_158;
  if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x10) + 0xb1) == '\x01') {
    iVar2 = -local_158;
  }
  local_30 = CONCAT44(iStack_154,iVar2);
  *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x48) = local_30;
  if (*(char *)(*(longlong *)(param_1 + 0x70) + 0x60) == '\x1c') {
    iVar2 = thunk_FUN_041b2403(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x68),0x18e,0,0);
    FUN_00693850(*(undefined8 *)(param_1 + 0x70),local_50);
    iVar3 = FUN_004230c0(local_50);
    FUN_006939a0(*(undefined8 *)(param_1 + 0x70),local_60);
    iVar4 = FUN_004230c0(local_60);
    FUN_00693910(*(undefined8 *)(param_1 + 0x70),local_70);
    iVar5 = FUN_004230c0(local_70);
    FUN_00693b00(*(undefined8 *)(param_1 + 0x70),local_80);
    iVar6 = FUN_004230c0(local_80);
    iVar6 = ((iVar3 - iVar4) - iVar5) - iVar6;
    if (0 < iVar6) {
      FUN_006939a0(*(undefined8 *)(param_1 + 0x70),local_168);
      iVar3 = FUN_0040c770(((double)((*(int *)(*(longlong *)(param_1 + 0x70) + 0x4c) -
                                     *(int *)(*(longlong *)(param_1 + 0x70) + 0x50)) - local_15c) /
                           (double)iVar6) * (double)*(int *)(*(longlong *)(param_1 + 0x70) + 0x58));
      if (iVar3 != iVar2) {
        if (iVar3 < 0) {
          iVar3 = 0;
        }
        lVar9 = thunk_FUN_041b2403(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x68),0x18b,0,0);
        if (lVar9 <= iVar3) {
          iVar3 = thunk_FUN_041b2403(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x68),0x18b,0,0
                                    );
          iVar3 = iVar3 + -1;
        }
        thunk_FUN_041b2403(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x68),0xb,0,0);
        thunk_FUN_041b2403(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x68),0x197,
                           (longlong)iVar3,0);
        thunk_FUN_041b2403(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x68),0xb,1,0);
        FUN_00693810(*(undefined8 *)(param_1 + 0x70),local_90);
        uVar7 = FUN_004230a0(local_90);
        FUN_00693810(*(undefined8 *)(param_1 + 0x70),local_a0);
        uVar8 = FUN_004230c0(local_a0);
        FUN_004238d0(local_40,0,0,uVar7,uVar8);
        thunk_FUN_041543e0(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x68),local_40,0,5);
        FUN_00693fa0(*(undefined8 *)(param_1 + 0x70),0);
      }
    }
    *(undefined1 *)(param_1 + 0x4f) = 1;
  }
  else {
    if (*(char *)(*(longlong *)(param_1 + 0x70) + 0x8c) != '\0') {
      FUN_006939a0(*(undefined8 *)(param_1 + 0x70),local_b0);
      cVar1 = FUN_00423210(local_b0,&local_30);
      if ((cVar1 == '\0') && (*(char *)(*(longlong *)(param_1 + 0x70) + 0x61) == '\x04')) {
        *(undefined1 *)(*(longlong *)(param_1 + 0x70) + 0x61) = 2;
        FUN_00693fa0(*(undefined8 *)(param_1 + 0x70),0);
        FUN_006926b0(*(undefined8 *)(param_1 + 0x70));
        return;
      }
    }
    if (*(char *)(*(longlong *)(param_1 + 0x70) + 0x8c) != '\0') {
      FUN_006939a0(*(undefined8 *)(param_1 + 0x70),local_c0);
      cVar1 = FUN_00423210(local_c0,&local_30);
      if ((cVar1 != '\0') && (*(char *)(*(longlong *)(param_1 + 0x70) + 0x61) == '\x02')) {
        *(undefined1 *)(*(longlong *)(param_1 + 0x70) + 0x61) = 4;
        FUN_00693fa0(*(undefined8 *)(param_1 + 0x70),0);
        FUN_00692650(*(undefined8 *)(param_1 + 0x70),5);
        return;
      }
    }
    if (*(char *)(*(longlong *)(param_1 + 0x70) + 0x8d) != '\0') {
      FUN_00693910(*(undefined8 *)(param_1 + 0x70),local_d0);
      cVar1 = FUN_00423210(local_d0,&local_30);
      if ((cVar1 == '\0') && (*(char *)(*(longlong *)(param_1 + 0x70) + 0x62) == '\b')) {
        *(undefined1 *)(*(longlong *)(param_1 + 0x70) + 0x62) = 6;
        FUN_00693fa0(*(undefined8 *)(param_1 + 0x70),0);
        FUN_006926b0(*(undefined8 *)(param_1 + 0x70));
        return;
      }
    }
    if (*(char *)(*(longlong *)(param_1 + 0x70) + 0x8d) != '\0') {
      FUN_00693910(*(undefined8 *)(param_1 + 0x70),local_e0);
      cVar1 = FUN_00423210(local_e0,&local_30);
      if ((cVar1 != '\0') && (*(char *)(*(longlong *)(param_1 + 0x70) + 0x62) == '\x06')) {
        *(undefined1 *)(*(longlong *)(param_1 + 0x70) + 0x62) = 8;
        FUN_00693fa0(*(undefined8 *)(param_1 + 0x70),0);
        FUN_00692650(*(undefined8 *)(param_1 + 0x70),6);
        return;
      }
    }
    FUN_00693a30(*(undefined8 *)(param_1 + 0x70),local_f0);
    cVar1 = FUN_00423210(local_f0,&local_30);
    if (cVar1 == '\0') {
      if (((*(char *)(*(longlong *)(param_1 + 0x70) + 0x60) != '\x1a') ||
          (*(char *)(*(longlong *)(param_1 + 0x70) + 0x61) != '\x02')) ||
         (*(char *)(*(longlong *)(param_1 + 0x70) + 0x61) != '\x06')) {
        if (*(int *)(*(longlong *)(param_1 + 0x70) + 0x88) != 0) {
          FUN_006926b0(*(undefined8 *)(param_1 + 0x70));
        }
        *(undefined1 *)(*(longlong *)(param_1 + 0x70) + 0x60) = 0x1a;
        *(undefined1 *)(*(longlong *)(param_1 + 0x70) + 0x61) = 2;
        *(undefined1 *)(*(longlong *)(param_1 + 0x70) + 0x62) = 6;
        FUN_00693fa0(*(undefined8 *)(param_1 + 0x70),0);
      }
    }
    else {
      FUN_00693b00(*(undefined8 *)(param_1 + 0x70),local_100);
      cVar1 = FUN_00423210(local_100,&local_30);
      if ((cVar1 == '\0') || (*(char *)(*(longlong *)(param_1 + 0x70) + 0x60) != '\x1a')) {
        FUN_00693b00(*(undefined8 *)(param_1 + 0x70),local_110);
        cVar1 = FUN_00423210(local_110,&local_30);
        if ((cVar1 == '\0') && (*(char *)(*(longlong *)(param_1 + 0x70) + 0x60) == '\x1b')) {
          *(undefined1 *)(*(longlong *)(param_1 + 0x70) + 0x60) = 0x1a;
          FUN_00693fa0(*(undefined8 *)(param_1 + 0x70),0);
        }
        else {
          FUN_006939a0(*(undefined8 *)(param_1 + 0x70),local_120);
          cVar1 = FUN_00423210(local_120,&local_30);
          if ((cVar1 == '\0') || (*(char *)(*(longlong *)(param_1 + 0x70) + 0x61) != '\x02')) {
            FUN_006939a0(*(undefined8 *)(param_1 + 0x70),local_130);
            cVar1 = FUN_00423210(local_130,&local_30);
            if ((cVar1 == '\0') && (*(char *)(*(longlong *)(param_1 + 0x70) + 0x61) == '\x03')) {
              *(undefined1 *)(*(longlong *)(param_1 + 0x70) + 0x61) = 2;
              FUN_00693fa0(*(undefined8 *)(param_1 + 0x70),0);
            }
            else {
              FUN_00693910(*(undefined8 *)(param_1 + 0x70),local_140);
              cVar1 = FUN_00423210(local_140,&local_30);
              if ((cVar1 == '\0') || (*(char *)(*(longlong *)(param_1 + 0x70) + 0x62) != '\x06')) {
                FUN_00693910(*(undefined8 *)(param_1 + 0x70),local_150);
                cVar1 = FUN_00423210(local_150,&local_30);
                if ((cVar1 == '\0') && (*(char *)(*(longlong *)(param_1 + 0x70) + 0x62) == '\a')) {
                  *(undefined1 *)(*(longlong *)(param_1 + 0x70) + 0x62) = 6;
                  FUN_00693fa0(*(undefined8 *)(param_1 + 0x70),0);
                }
              }
              else {
                *(undefined1 *)(*(longlong *)(param_1 + 0x70) + 0x62) = 7;
                FUN_00693fa0(*(undefined8 *)(param_1 + 0x70),0);
              }
            }
          }
          else {
            *(undefined1 *)(*(longlong *)(param_1 + 0x70) + 0x61) = 3;
            FUN_00693fa0(*(undefined8 *)(param_1 + 0x70),0);
          }
        }
      }
      else {
        *(undefined1 *)(*(longlong *)(param_1 + 0x70) + 0x60) = 0x1b;
        FUN_00693fa0(*(undefined8 *)(param_1 + 0x70),0);
      }
      *(undefined1 *)(param_1 + 0x4f) = 1;
    }
  }
  return;
}

