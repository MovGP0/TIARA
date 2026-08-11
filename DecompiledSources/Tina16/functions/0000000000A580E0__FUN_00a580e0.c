/* Ghidra address: 00a580e0 */
/* Ghidra symbol: FUN_00a580e0 */


void FUN_00a580e0(longlong param_1,longlong param_2,char param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  ulonglong uVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined1 auStack_1d8 [40];
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 *local_90;
  bool local_7d;
  int local_7c;
  ulonglong local_78;
  ulonglong local_70;
  char local_61;
  ushort *local_60;
  ulonglong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  int local_38;
  byte local_32;
  byte local_31;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  local_90 = auStack_1d8;
  local_1b0 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  local_198 = 0;
  uStack_190 = 0;
  uStack_188 = 0;
  local_180 = 0;
  uStack_178 = 0;
  uStack_170 = 0;
  local_168 = 0;
  uStack_160 = 0;
  uStack_158 = 0;
  local_150 = 0;
  local_148 = 0;
  local_140 = 0;
  local_138 = 0;
  local_130 = 0;
  uStack_128 = 0;
  uStack_120 = 0;
  local_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  uStack_108 = 0;
  local_f8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  local_40 = 0;
  local_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  local_31 = 0;
  do {
    if (param_3 == '\0') {
LAB_00a5833c:
      if ((*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x90) + 0x703 +
                    (ulonglong)local_31) == '\0') ||
         (*(char *)(param_2 + 0x703 + (ulonglong)local_31) != '\0')) {
        uVar4 = (ulonglong)local_31;
        cVar1 = FUN_0046c390(param_2 + 0x78 + uVar4 * 0x18);
        if (cVar1 != '\0') {
          FUN_00468a10(&local_c0,L"inherit");
          cVar1 = FUN_0046f320(param_2 + 0x78 + uVar4 * 0x18,&local_c0);
          if (cVar1 != '\0') goto LAB_00a58f29;
        }
        local_70 = uVar4;
        if ((*(short *)(param_2 + 0x78 + uVar4 * 0x18) != 0) &&
           (local_78 = uVar4, *(short *)(param_2 + 0x78 + uVar4 * 0x18) != 1)) {
          if (3 < local_31) {
            if (local_31 == 5) {
              *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x90) + 0x703 + uVar4)
                   = *(undefined1 *)(param_2 + 0x703 + uVar4);
              *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x90) + 0x6c0 + uVar4)
                   = 1;
              FUN_00467e90(&local_40,
                           *(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x90) + 0x78 +
                           uVar4 * 0x18);
              iVar3 = FUN_00416db0(local_40,L"none");
              if (iVar3 == 0) {
                local_7d = true;
              }
              else {
                local_7c = 0;
                if (local_40 != 0) {
                  local_7c = *(int *)(local_40 + -4);
                }
                local_7d = local_7c == 0;
              }
              if (local_7d == false) {
                FUN_00468a10(&local_f0,L"none");
                cVar1 = FUN_0046f320(param_2 + 0x78 + (ulonglong)local_31 * 0x18,&local_f0);
                if (cVar1 != '\0') goto LAB_00a586c7;
                uVar4 = (ulonglong)local_31;
                FUN_00467e90(&local_f8,param_2 + 0x78 + uVar4 * 0x18);
                iVar3 = FUN_004170c0(local_f8,local_40,1);
                if (iVar3 == 0) {
                  FUN_00416ba0(&local_100,local_40,&DAT_00a590e8);
                  FUN_00468a10(&local_118,local_100);
                  FUN_0046f1c0(&local_118,param_2 + 0x78 + uVar4 * 0x18);
                  FUN_00461840(*(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x90) + 0x78 +
                               uVar4 * 0x18,&local_118);
                }
              }
              else {
LAB_00a586c7:
                FUN_00461840(*(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x90) + 0x78 +
                             (ulonglong)local_31 * 0x18,param_2 + 0x78 + (ulonglong)local_31 * 0x18)
                ;
              }
              if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x90) + 0x20) != '\0') {
                local_32 = 0;
                do {
                  local_48 = *(longlong *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x90) + 0x748) + 8 +
                             (ulonglong)local_32 * 0x40;
                  uVar4 = (ulonglong)local_31;
                  FUN_00468a10(&local_130,L"none");
                  cVar1 = FUN_0046f320(*(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x90) + 0x78 +
                                       uVar4 * 0x18,&local_130);
                  if (cVar1 == '\0') {
                    FUN_00467e90(&local_138,
                                 *(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x90) + 0x78 +
                                 uVar4 * 0x18);
                    iVar3 = FUN_004170c0(L"underline",local_138,1);
                    if (0 < iVar3) {
                      *(byte *)(local_48 + 0x10) = *(byte *)(local_48 + 0x10) | 4;
                    }
                    FUN_00467e90(&local_140,
                                 *(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x90) + 0x78 +
                                 uVar4 * 0x18);
                    iVar3 = FUN_004170c0(L"line-through",local_140,1);
                    if (0 < iVar3) {
                      *(byte *)(local_48 + 0x10) = *(byte *)(local_48 + 0x10) | 8;
                    }
                  }
                  else {
                    *(byte *)(local_48 + 0x10) = *(byte *)(local_48 + 0x10) & 0xf3;
                  }
                  local_32 = local_32 + 1;
                } while (local_32 != 4);
                local_32 = 4;
              }
              goto LAB_00a58f29;
            }
            if (2 < (byte)(local_31 - 6)) {
              if ((byte)(local_31 - 0x12) < 0x1c) {
                cVar1 = FUN_0046c390(param_2 + 0x78 + uVar4 * 0x18);
                if (cVar1 == '\0') {
                  FUN_00468530(&local_d8,0xff439eb2,0xfffffffffffffffc);
                  cVar1 = FUN_0046f340(param_2 + 0x78 + uVar4 * 0x18,&local_d8);
                  if (cVar1 != '\0') {
                    FUN_00461840(*(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x90) + 0x78 +
                                 uVar4 * 0x18,param_2 + 0x78 + uVar4 * 0x18);
                    *(undefined1 *)
                     (*(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x90) + 0x703 + uVar4) =
                         *(undefined1 *)(param_2 + 0x703 + uVar4);
                    *(undefined1 *)
                     (*(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x90) + 0x6c0 + uVar4) = 1;
                  }
                }
                else {
                  FUN_00461840(*(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x90) + 0x78 +
                               uVar4 * 0x18,param_2 + 0x78 + uVar4 * 0x18);
                  *(undefined1 *)
                   (*(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x90) + 0x703 + uVar4) =
                       *(undefined1 *)(param_2 + 0x703 + uVar4);
                  *(undefined1 *)
                   (*(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x90) + 0x6c0 + uVar4) = 1;
                }
              }
              else {
                FUN_00461840(*(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x90) + 0x78 +
                             uVar4 * 0x18,param_2 + 0x78 + uVar4 * 0x18);
                *(undefined1 *)
                 (*(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x90) + 0x703 + uVar4) =
                     *(undefined1 *)(param_2 + 0x703 + uVar4);
                *(undefined1 *)
                 (*(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x90) + 0x6c0 + uVar4) = 1;
              }
              goto LAB_00a58f29;
            }
          }
          *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x90) + 0x703 + uVar4) =
               *(undefined1 *)(param_2 + 0x703 + uVar4);
          *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x90) + 0x6c0 + uVar4) = 1;
          FUN_00461840(*(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x90) + 0x78 + uVar4 * 0x18,
                       param_2 + 0x78 + uVar4 * 0x18);
          if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x90) + 0x20) != '\0') {
            local_32 = 0;
            do {
              local_50 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x90) + 0x748)
                         + 8 + (ulonglong)local_32 * 0x40;
              if (local_31 < 4) {
                if (local_31 == 3) {
                  FUN_00467e90(&local_1a0,
                               *(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x90) + 0xc0);
                  iVar3 = FUN_004170c0(L"bold",local_1a0,1);
                  if (iVar3 < 1) {
                    FUN_00467e90(&local_1a8,
                                 *(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x90) + 0xc0);
                    iVar3 = FUN_004170c0(L"normal",local_1a8,1);
                    if (iVar3 < 1) {
                      FUN_00467e90(&local_1b0,
                                   *(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x90) + 0xc0);
                      local_38 = FUN_0043fc50(local_1b0,0);
                      if (599 < local_38) {
                        *(byte *)(local_50 + 0x10) = *(byte *)(local_50 + 0x10) | 1;
                      }
                    }
                    else {
                      *(byte *)(local_50 + 0x10) = *(byte *)(local_50 + 0x10) & 0xfe;
                    }
                  }
                  else {
                    *(byte *)(local_50 + 0x10) = *(byte *)(local_50 + 0x10) | 1;
                  }
                }
                else if (local_31 == 0) {
                  FUN_00467e90(&local_148,
                               *(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x90) + 0x78);
                  FUN_00a5b8c0(&local_40,local_148);
                  if (local_40 != 0) {
                    FUN_00414ad0(local_50,local_40);
                  }
                }
                else if (local_31 == 1) {
                  FUN_00467e90(&local_150,
                               *(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x90) + 0x90);
                  uVar6 = FUN_00a612b0(local_150,*(undefined8 *)(local_50 + 8),
                                       *(undefined8 *)
                                        (*(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x90) + 8),
                                       *(undefined1 *)
                                        (*(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x90) + 0x30
                                        ));
                  *(undefined8 *)(local_50 + 8) = uVar6;
                }
                else if (local_31 == 2) {
                  FUN_00468a10(&local_168,L"italic");
                  cVar1 = FUN_0046f320(*(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x90) + 0xa8,
                                       &local_168);
                  if (cVar1 == '\0') {
                    FUN_00468a10(&local_180,L"oblique");
                    cVar1 = FUN_0046f320(*(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x90) + 0xa8
                                         ,&local_180);
                    if (cVar1 == '\0') {
                      FUN_00468a10(&local_198,L"normal");
                      cVar1 = FUN_0046f320(*(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x90) +
                                           0xa8,&local_198);
                      if (cVar1 != '\0') {
                        *(byte *)(local_50 + 0x10) = *(byte *)(local_50 + 0x10) & 0xfd;
                      }
                      goto LAB_00a58e8d;
                    }
                  }
                  *(byte *)(local_50 + 0x10) = *(byte *)(local_50 + 0x10) | 2;
                }
              }
              else if (local_31 == 6) {
                FUN_00461840(local_50 + 0x20,
                             *(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x90) + 0x108);
              }
              else if (local_31 == 7) {
                uVar2 = FUN_00462650(*(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x90) + 0x120);
                *(undefined4 *)(local_50 + 0x14) = uVar2;
              }
              else if (local_31 == 8) {
                uVar2 = FUN_00462650(*(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x90) + 0x138);
                *(undefined4 *)(local_50 + 0x18) = uVar2;
              }
LAB_00a58e8d:
              local_32 = local_32 + 1;
            } while (local_32 != 4);
            local_32 = 4;
          }
        }
      }
    }
    else {
      FUN_00460ba0(&local_30);
      FUN_00460b80(&local_30);
      local_61 = FUN_0046f340(*(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x90) + 0x78 +
                              (ulonglong)local_31 * 0x18,&local_30);
      FUN_00460ba0(&local_30);
      if (local_61 == '\0') goto LAB_00a5833c;
      local_58 = (ulonglong)local_31;
      local_60 = (ushort *)
                 (*(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x90) + 0x78 + local_58 * 0x18);
      if (*local_60 < 0x20) {
        bVar5 = (1 << ((byte)*local_60 & 0x1f) & 0x1f000cU) != 0;
      }
      else {
        bVar5 = false;
      }
      if (bVar5) {
        FUN_00468530(&local_a8,0xff439eb2,0xfffffffffffffffc);
        cVar1 = FUN_0046f320(*(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x90) + 0x78 +
                             local_58 * 0x18,&local_a8);
        if (cVar1 != '\0') goto LAB_00a5833c;
      }
    }
LAB_00a58f29:
    local_31 = local_31 + 1;
    if (local_31 == 0x43) {
      FUN_00414560(&local_1b0,3);
      FUN_00417840(&local_198,&DAT_004013d8,3);
      FUN_00414560(&local_150,4);
      FUN_00417840(&local_130,&DAT_004013d8,2);
      FUN_00414560(&local_100,2);
      FUN_00417840(&local_f0,&DAT_004013d8,4);
      FUN_00414480(&local_40);
      FUN_00460ba0(&local_30);
      return;
    }
  } while( true );
}

