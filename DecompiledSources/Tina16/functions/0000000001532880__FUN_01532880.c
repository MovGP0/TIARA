/* Ghidra address: 01532880 */
/* Ghidra symbol: FUN_01532880 */


void FUN_01532880(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  double *pdVar4;
  longlong *plVar5;
  double *pdVar6;
  longlong *plVar7;
  undefined1 auStack_248 [32];
  undefined8 local_228;
  undefined *local_210;
  undefined1 local_208;
  undefined *local_200;
  undefined1 local_1f8;
  undefined *local_1f0;
  undefined1 local_1e8;
  uint local_1e0;
  undefined1 local_1d8;
  undefined *local_1d0;
  undefined1 local_1c8;
  undefined1 *local_1c0;
  longlong *local_1b8;
  double local_1b0 [4];
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_160;
  double local_158;
  double local_138;
  double local_118;
  double local_108;
  double local_100;
  undefined8 local_20;
  
  local_1c0 = auStack_248;
  uVar2 = FUN_0065b870(param_1);
  local_20 = FUN_007f94c0(uVar2);
  FUN_00ee4f70(*(undefined8 *)(param_1 + 0x968));
  FUN_007f95c0(local_20);
  pdVar4 = (double *)(PTR_DAT_02004010 + 200);
  pdVar6 = local_1b0;
  for (lVar3 = 0x32; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pdVar6 = *pdVar4;
    pdVar4 = pdVar4 + 1;
    pdVar6 = pdVar6 + 1;
  }
  local_228 = *(longlong *)(PTR_DAT_02004010 + 600);
  local_1b8 = (longlong *)
              FUN_01152540(&PTR_FUN_01151658,1,*(undefined8 *)PTR_DAT_02004030,
                           PTR_DAT_02004010 + 200);
  iVar1 = (**(code **)(*local_1b8 + 0x2d0))(local_1b8);
  if (iVar1 == 1) {
    plVar5 = local_1b8 + 0xe8;
    plVar7 = (longlong *)(PTR_DAT_02004010 + 200);
    for (lVar3 = 0x32; lVar3 != 0; lVar3 = lVar3 + -1) {
      *plVar7 = *plVar5;
      plVar5 = plVar5 + 1;
      plVar7 = plVar7 + 1;
    }
    FUN_00414ad0(PTR_DAT_02004010 + 600,local_1b8[0x11b]);
    if (*(double *)(PTR_DAT_02004010 + 200) == *(double *)(PTR_DAT_02001120 + 200)) {
      if (*(double *)(PTR_DAT_02004010 + 0xd0) == local_1b0[1]) {
        if (*(double *)(PTR_DAT_02004010 + 0xe0) == local_1b0[3]) {
          if (*(double *)(PTR_DAT_02004010 + 0xe8) == local_190) {
            if (*(double *)(PTR_DAT_02004010 + 0xf8) == local_180) {
              if (*(double *)(PTR_DAT_02004010 + 0x100) == local_178) {
                if (*(double *)(PTR_DAT_02004010 + 0x118) == local_160) {
                  if (*(double *)(PTR_DAT_02004010 + 0x120) == local_158) {
                    if (*(double *)(PTR_DAT_02004010 + 0x140) == local_138) {
                      if (*(double *)(PTR_DAT_02004010 + 0x170) == local_108) {
                        if (*(double *)(PTR_DAT_02004010 + 0x178) == local_100) {
                          if (*(double *)(PTR_DAT_02004010 + 0xf0) == local_188) {
                            if (*(double *)(PTR_DAT_02004010 + 0x160) != local_118) {
                              local_1d0 = PTR_DAT_02004010 + 0x160;
                              local_1c8 = 3;
                              local_228 = (ulonglong)local_228._4_4_ << 0x20;
                              FUN_016cd2c0(*(undefined8 *)(*(longlong *)(param_1 + 0x958) + 0x4e8),
                                           L".OPTIONS",L"TRTOL",&local_1d0);
                            }
                          }
                          else {
                            local_1d0 = PTR_DAT_02004010 + 0xf0;
                            local_1c8 = 3;
                            local_228 = (ulonglong)local_228._4_4_ << 0x20;
                            FUN_016cd2c0(*(undefined8 *)(*(longlong *)(param_1 + 0x958) + 0x4e8),
                                         L".OPTIONS",L"GMIN",&local_1d0);
                          }
                        }
                        else {
                          local_210 = PTR_DAT_02004010 + 0x2b8;
                          local_208 = 3;
                          local_200 = PTR_DAT_02004010 + 0x2b0;
                          local_1f8 = 3;
                          local_1f0 = PTR_DAT_02004010 + 0x178;
                          local_1e8 = 3;
                          local_1e0 = (uint)(byte)PTR_DAT_02004010[0x2ad];
                          local_1d8 = 0;
                          local_228 = CONCAT44(local_228._4_4_,3);
                          FUN_016cd2c0(*(undefined8 *)(*(longlong *)(param_1 + 0x958) + 0x4e8),
                                       L".TRAN",0,&local_210);
                        }
                      }
                      else {
                        local_1d0 = PTR_DAT_02004010 + 0x170;
                        local_1c8 = 3;
                        local_228 = (ulonglong)local_228._4_4_ << 0x20;
                        FUN_016cd2c0(*(undefined8 *)(*(longlong *)(param_1 + 0x958) + 0x4e8),
                                     L".OPTIONS",L"CHGTOL",&local_1d0);
                      }
                    }
                    else {
                      local_1d0 = PTR_DAT_02004010 + 0x140;
                      local_1c8 = 3;
                      local_228 = (ulonglong)local_228._4_4_ << 0x20;
                      FUN_016cd2c0(*(undefined8 *)(*(longlong *)(param_1 + 0x958) + 0x4e8),
                                   L".OPTIONS",L"ITL4",&local_1d0);
                    }
                  }
                  else {
                    local_1d0 = PTR_DAT_02004010 + 0x120;
                    local_1c8 = 3;
                    local_228 = (ulonglong)local_228._4_4_ << 0x20;
                    FUN_016cd2c0(*(undefined8 *)(*(longlong *)(param_1 + 0x958) + 0x4e8),L".OPTIONS"
                                 ,L"ITL2",&local_1d0);
                  }
                }
                else {
                  local_1d0 = PTR_DAT_02004010 + 0x118;
                  local_1c8 = 3;
                  local_228 = (ulonglong)local_228._4_4_ << 0x20;
                  FUN_016cd2c0(*(undefined8 *)(*(longlong *)(param_1 + 0x958) + 0x4e8),L".OPTIONS",
                               L"ITL1",&local_1d0);
                }
              }
              else {
                local_1d0 = PTR_DAT_02004010 + 0x100;
                local_1c8 = 3;
                local_228 = (ulonglong)local_228._4_4_ << 0x20;
                FUN_016cd2c0(*(undefined8 *)(*(longlong *)(param_1 + 0x958) + 0x4e8),L".OPTIONS",
                             L"PIVTOL",&local_1d0);
              }
            }
            else {
              local_1d0 = PTR_DAT_02004010 + 0xf8;
              local_1c8 = 3;
              local_228 = (ulonglong)local_228._4_4_ << 0x20;
              FUN_016cd2c0(*(undefined8 *)(*(longlong *)(param_1 + 0x958) + 0x4e8),L".OPTIONS",
                           L"PIVREL",&local_1d0);
            }
          }
          else {
            local_1d0 = PTR_DAT_02004010 + 0xe8;
            local_1c8 = 3;
            local_228 = (ulonglong)local_228._4_4_ << 0x20;
            FUN_016cd2c0(*(undefined8 *)(*(longlong *)(param_1 + 0x958) + 0x4e8),L".OPTIONS",
                         L"RELTOL",&local_1d0);
          }
        }
        else {
          local_1d0 = PTR_DAT_02004010 + 0xe0;
          local_1c8 = 3;
          local_228 = (ulonglong)local_228._4_4_ << 0x20;
          FUN_016cd2c0(*(undefined8 *)(*(longlong *)(param_1 + 0x958) + 0x4e8),L".OPTIONS",L"VNTOL",
                       &local_1d0);
        }
      }
      else {
        local_1d0 = PTR_DAT_02004010 + 0xd0;
        local_1c8 = 3;
        local_228 = (ulonglong)local_228._4_4_ << 0x20;
        FUN_016cd2c0(*(undefined8 *)(*(longlong *)(param_1 + 0x958) + 0x4e8),L".OPTIONS",L"ABSTOL",
                     &local_1d0);
      }
    }
    else {
      local_1d0 = PTR_DAT_02004010 + 200;
      local_1c8 = 3;
      local_228 = (ulonglong)local_228._4_4_ << 0x20;
      FUN_016cd2c0(*(undefined8 *)(*(longlong *)(param_1 + 0x958) + 0x4e8),L".OPTIONS",L"TNOM",
                   &local_1d0);
    }
  }
  FUN_00410f20(local_1b8);
  return;
}

