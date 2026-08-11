/* Ghidra address: 015a05e0 */
/* Ghidra symbol: FUN_015a05e0 */


undefined8
FUN_015a05e0(int param_1,longlong param_2,uint param_3,longlong *param_4,uint *param_5,char *param_6
            )

{
  ushort uVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  uint local_c8;
  uint local_c4;
  undefined4 local_c0;
  int local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_90;
  int local_8c;
  char *local_88;
  longlong local_78;
  char *local_70;
  ushort auStack_50 [16];
  ushort auStack_30 [24];
  
  for (local_c8 = 0; local_c8 < 0x10; local_c8 = local_c8 + 1) {
    auStack_50[local_c8] = 0;
  }
  for (local_c4 = 0; local_c4 < param_3; local_c4 = local_c4 + 1) {
    auStack_50[*(ushort *)(param_2 + (ulonglong)local_c4 * 2)] =
         auStack_50[*(ushort *)(param_2 + (ulonglong)local_c4 * 2)] + 1;
  }
  local_b0 = *param_5;
  for (local_b8 = 0xf; (local_b8 != 0 && (auStack_50[local_b8] == 0)); local_b8 = local_b8 - 1) {
  }
  if (local_b8 < local_b0) {
    local_b0 = local_b8;
  }
  if (local_b8 == 0) {
    *(undefined4 *)*param_4 = 0x140;
    *param_4 = *param_4 + 4;
    *(undefined4 *)*param_4 = 0x140;
    *param_4 = *param_4 + 4;
    *param_5 = 1;
    uVar7 = 0;
  }
  else {
    for (local_ac = 1; (local_ac < local_b8 && (auStack_50[local_ac] == 0)); local_ac = local_ac + 1
        ) {
    }
    if (local_b0 < local_ac) {
      local_b0 = local_ac;
    }
    local_bc = 1;
    for (local_c8 = 1; local_c8 < 0x10; local_c8 = local_c8 + 1) {
      local_bc = local_bc * 2 - (uint)auStack_50[local_c8];
      if (local_bc < 0) {
        return 0xffffffff;
      }
    }
    if ((local_bc < 1) || ((param_1 != 0 && (local_b8 == 1)))) {
      auStack_30[1] = 0;
      for (local_c8 = 1; local_c8 < 0xf; local_c8 = local_c8 + 1) {
        auStack_30[local_c8 + 1] = auStack_30[local_c8] + auStack_50[local_c8];
      }
      for (local_c4 = 0; local_c4 < param_3; local_c4 = local_c4 + 1) {
        if (*(short *)(param_2 + (ulonglong)local_c4 * 2) != 0) {
          *(undefined2 *)
           (param_6 + (ulonglong)auStack_30[*(ushort *)(param_2 + (ulonglong)local_c4 * 2)] * 2) =
               (undefined2)local_c4;
          auStack_30[*(ushort *)(param_2 + (ulonglong)local_c4 * 2)] =
               auStack_30[*(ushort *)(param_2 + (ulonglong)local_c4 * 2)] + 1;
        }
      }
      if (param_1 == 0) {
        local_88 = param_6;
        local_70 = param_6;
        local_8c = 0x13;
      }
      else if (param_1 == 1) {
        local_70 = s_invalid_code_lengths_set_01f68e70 + 0xe;
        local_88 = s_invalid_bit_length_repeat_01f68eb0 + 0xe;
        local_8c = 0x100;
      }
      else {
        local_70 = &DAT_01f69100;
        local_88 = &DAT_01f69140;
        local_8c = -1;
      }
      local_b4 = 0;
      local_c4 = 0;
      local_c8 = local_ac;
      local_78 = *param_4;
      local_a8 = local_b0;
      local_a4 = 0;
      local_98 = 0xffffffff;
      local_a0 = 1 << ((byte)local_b0 & 0x1f);
      uVar5 = local_a0 - 1;
      if (((param_1 == 1) && (0x354 < local_a0)) || ((param_1 == 2 && (0x250 < local_a0)))) {
        uVar7 = 1;
      }
      else {
        while( true ) {
          do {
            bVar3 = (byte)local_a4;
            cVar2 = (char)local_c8;
            bVar4 = cVar2 - bVar3;
            if ((int)(uint)*(ushort *)(param_6 + (ulonglong)local_c4 * 2) < local_8c) {
              local_c0 = (uint)CONCAT21(*(undefined2 *)(param_6 + (ulonglong)local_c4 * 2),bVar4) <<
                         8;
            }
            else if (local_8c < (int)(uint)*(ushort *)(param_6 + (ulonglong)local_c4 * 2)) {
              local_c0 = CONCAT22(*(undefined2 *)
                                   (local_70 +
                                   (ulonglong)*(ushort *)(param_6 + (ulonglong)local_c4 * 2) * 2),
                                  CONCAT11(bVar4,local_88[(ulonglong)
                                                          *(ushort *)
                                                           (param_6 + (ulonglong)local_c4 * 2) * 2])
                                 );
            }
            else {
              local_c0 = CONCAT31((uint3)bVar4,0x60);
            }
            uVar6 = 1 << ((byte)local_a8 & 0x1f);
            local_90 = uVar6;
            do {
              local_90 = local_90 - (1 << (cVar2 - bVar3 & 0x1f));
              *(uint *)(local_78 + (ulonglong)((local_b4 >> (bVar3 & 0x1f)) + local_90) * 4) =
                   local_c0;
            } while (local_90 != 0);
            for (local_9c = 1 << (cVar2 - 1U & 0x1f); (local_b4 & local_9c) != 0;
                local_9c = local_9c >> 1) {
            }
            if (local_9c == 0) {
              local_b4 = 0;
            }
            else {
              local_b4 = (local_b4 & local_9c - 1) + local_9c;
            }
            local_c4 = local_c4 + 1;
            uVar1 = auStack_50[local_c8];
            auStack_50[local_c8] = uVar1 - 1;
            if ((ushort)(uVar1 - 1) == 0) {
              if (local_c8 == local_b8) {
                if (local_b4 != 0) {
                  local_c0 = (uint)CONCAT11(cVar2 - bVar3,0x40);
                  *(uint *)(local_78 + (ulonglong)local_b4 * 4) = local_c0;
                }
                *param_4 = *param_4 + (ulonglong)local_a0 * 4;
                *param_5 = local_b0;
                return 0;
              }
              local_c8 = (uint)*(ushort *)
                                (param_2 +
                                (ulonglong)*(ushort *)(param_6 + (ulonglong)local_c4 * 2) * 2);
            }
          } while ((local_c8 <= local_b0) || ((local_b4 & uVar5) == local_98));
          if (local_a4 == 0) {
            local_a4 = local_b0;
          }
          local_78 = local_78 + (ulonglong)uVar6 * 4;
          local_a8 = local_c8 - local_a4;
          for (local_bc = 1 << ((byte)local_a8 & 0x1f);
              (local_a8 + local_a4 < local_b8 &&
              (uVar6 = local_a8 + local_a4, 0 < (int)(local_bc - (uint)auStack_50[uVar6])));
              local_bc = (local_bc - (uint)auStack_50[uVar6]) * 2) {
            local_a8 = local_a8 + 1;
          }
          local_a0 = local_a0 + (1 << ((byte)local_a8 & 0x1f));
          if (((param_1 == 1) && (0x354 < local_a0)) || ((param_1 == 2 && (0x250 < local_a0))))
          break;
          local_98 = local_b4 & uVar5;
          *(byte *)(*param_4 + (ulonglong)local_98 * 4) = (byte)local_a8;
          *(byte *)(*param_4 + 1 + (ulonglong)local_98 * 4) = (byte)local_b0;
          *(short *)(*param_4 + 2 + (ulonglong)local_98 * 4) = (short)(local_78 - *param_4 >> 2);
        }
        uVar7 = 1;
      }
    }
    else {
      uVar7 = 0xffffffff;
    }
  }
  return uVar7;
}

