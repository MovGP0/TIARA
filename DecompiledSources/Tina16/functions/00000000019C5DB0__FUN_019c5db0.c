/* Ghidra address: 019c5db0 */
/* Ghidra symbol: FUN_019c5db0 */


void FUN_019c5db0(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_248 [40];
  longlong local_220;
  int local_214;
  int local_210 [2];
  undefined1 local_208;
  undefined8 local_200;
  undefined1 local_1f8;
  undefined8 local_1f0;
  undefined1 local_1e8;
  undefined4 local_1e0;
  undefined1 local_1d8;
  undefined4 local_1d0;
  undefined1 local_1c8;
  undefined4 local_1c0;
  undefined1 local_1b8;
  undefined4 local_1b0;
  undefined1 local_1a8;
  longlong *local_1a0;
  undefined1 local_198;
  undefined8 local_190;
  undefined1 local_188;
  undefined8 local_180;
  int local_178 [2];
  undefined1 local_170;
  undefined8 local_168;
  undefined1 local_160;
  undefined8 local_158;
  undefined1 local_150;
  undefined8 local_148;
  undefined1 local_140;
  longlong *local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_120;
  undefined8 local_118;
  undefined1 local_110;
  undefined8 local_108;
  undefined4 local_100 [2];
  undefined1 local_f8;
  undefined1 *local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined1 local_90 [40];
  undefined8 local_68 [5];
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_18;
  undefined8 local_10;
  
  local_f0 = auStack_248;
  local_180 = 0;
  local_108 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_68[0] = 0;
  local_18 = 0;
  local_10 = 0;
  FUN_00417580(local_90,&DAT_019bf1e0);
  if ((*(char *)(param_1 + 0x30) != '\0') && (*(longlong *)(param_1 + 0x70) != 0)) {
    (**(code **)(**(longlong **)(param_1 + 0x70) + 0x78))(*(longlong **)(param_1 + 0x70),0);
    (**(code **)(**(longlong **)(param_1 + 0x70) + 0x78))
              (*(longlong **)(param_1 + 0x70),L"FixedRoutes summary:");
    local_c0 = *(longlong *)(param_1 + 0x78);
    local_c8 = local_c0;
    if (local_c0 != 0) {
      local_c8 = *(longlong *)(local_c0 + -8);
    }
    local_214 = (int)local_c8 + -1;
    local_3c = 0;
    iVar2 = (int)local_c8;
    if (-1 < local_214) {
      do {
        local_214 = iVar2;
        local_18 = 0;
        local_220 = (longlong)local_3c;
        if (*(char *)(*(longlong *)(param_1 + 0x78) + 0x20 + local_220 * 0x40) == '\x01') {
          FUN_00414b50(local_68,L"orthogonal");
        }
        else if (*(char *)(*(longlong *)(param_1 + 0x78) + 0x20 + local_220 * 0x40) == '\0') {
          FUN_00414b50(local_68,L"straight");
        }
        else if (*(char *)(*(longlong *)(param_1 + 0x78) + 0x20 + local_220 * 0x40) == '\x02') {
          FUN_00414b50(local_68,L"dynamic");
        }
        FUN_019c18e0(&local_30,*(longlong *)(param_1 + 0x78) + local_220 * 0x40,
                     *(undefined8 *)(param_1 + 0x88));
        FUN_019c18e0(&local_38,*(longlong *)(param_1 + 0x78) + 8 + local_220 * 0x40,
                     *(undefined8 *)(param_1 + 0x88));
        FUN_019c5c80(*(longlong *)(param_1 + 0x78) + local_220 * 0x40,
                     *(undefined8 *)(param_1 + 0x88));
        FUN_019c5c80(*(longlong *)(param_1 + 0x78) + 8 + local_220 * 0x40,
                     *(undefined8 *)(param_1 + 0x88));
        FUN_00414480(&local_18);
        cVar1 = *(char *)(*(longlong *)(param_1 + 0x78) + 0x18 + local_220 * 0x40);
        if (cVar1 == '\0') {
          FUN_00414b50(&local_18,L"invalid");
        }
        else if (cVar1 == '\x01') {
          local_100[0] = *(undefined4 *)(*(longlong *)(param_1 + 0x78) + 0x1c + local_220 * 0x40);
          local_f8 = 0;
          FUN_00442f70(&local_18,L"valid, overlapped (size = %d)",local_100,0);
        }
        else if (cVar1 == '\x02') {
          FUN_00414b50(&local_18,L"valid, nonoverlapping");
        }
        iVar2 = FUN_00416db0(local_68[0],L"orthogonal");
        if (iVar2 == 0) {
          local_10 = 0;
          FUN_019c1af0(&local_10,
                       *(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x10 + local_220 * 0x40));
          local_d0 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x10 + local_220 * 0x40);
          local_d8 = local_d0;
          if (local_d0 != 0) {
            local_d8 = *(longlong *)(local_d0 + -8);
          }
          local_178[0] = local_3c + 1;
          local_170 = 0;
          local_168 = local_30;
          local_160 = 0x11;
          local_158 = local_38;
          local_150 = 0x11;
          local_148 = local_10;
          local_140 = 0x11;
          local_138 = &local_d8;
          local_130 = 0x10;
          local_128 = local_68[0];
          local_120 = 0x11;
          local_118 = local_18;
          local_110 = 0x11;
          FUN_00442f70(&local_108,L"  Route %d: %s -> %s: %s, %d points, type: %s, status: %s",
                       local_178,6);
          (**(code **)(**(longlong **)(param_1 + 0x70) + 0x78))
                    (*(longlong **)(param_1 + 0x70),local_108);
          FUN_00414480(&local_10);
        }
        else {
          local_e0 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x10 + local_220 * 0x40);
          local_e8 = local_e0;
          if (local_e0 != 0) {
            local_e8 = *(longlong *)(local_e0 + -8);
          }
          local_210[0] = local_3c + 1;
          local_208 = 0;
          local_200 = local_30;
          local_1f8 = 0x11;
          local_1f0 = local_38;
          local_1e8 = 0x11;
          local_1e0 = *(undefined4 *)(*(longlong *)(param_1 + 0x78) + local_220 * 0x40);
          local_1d8 = 0;
          local_1d0 = *(undefined4 *)(*(longlong *)(param_1 + 0x78) + 4 + local_220 * 0x40);
          local_1c8 = 0;
          local_1c0 = *(undefined4 *)(*(longlong *)(param_1 + 0x78) + 8 + (longlong)local_3c * 0x40)
          ;
          local_1b8 = 0;
          local_1b0 = *(undefined4 *)
                       (*(longlong *)(param_1 + 0x78) + 0xc + (longlong)local_3c * 0x40);
          local_1a8 = 0;
          local_1a0 = &local_e8;
          local_198 = 0x10;
          local_190 = local_68[0];
          local_188 = 0x11;
          FUN_00442f70(&local_180,L"  Route %d: %s -> %s: (%d,%d) -> (%d,%d), %d points, type: %s",
                       local_210,8);
          (**(code **)(**(longlong **)(param_1 + 0x70) + 0x78))
                    (*(longlong **)(param_1 + 0x70),local_180);
        }
        FUN_00414480(&local_18);
        local_3c = local_3c + 1;
        local_214 = local_214 + -1;
        iVar2 = local_214;
      } while (local_214 != 0);
    }
    (**(code **)(**(longlong **)(param_1 + 0x70) + 0x78))(*(longlong **)(param_1 + 0x70),0);
  }
  FUN_00414480(&local_180);
  FUN_00414480(&local_108);
  FUN_00417740(local_90,&DAT_019bf1e0);
  FUN_00414480(local_68);
  FUN_00414560(&local_38,3);
  return;
}

