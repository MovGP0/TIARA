/* Ghidra address: 0159c770 */
/* Ghidra symbol: FUN_0159c770 */


int FUN_0159c770(longlong *param_1,int param_2)

{
  byte bVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  byte *local_c0;
  undefined4 local_b8;
  uint local_b4;
  uint local_b0;
  int local_a0;
  undefined1 *local_98;
  int local_88;
  int local_84;
  int local_7c;
  undefined1 *local_78;
  int local_70;
  int local_64;
  uint local_5c;
  int local_58;
  
  if ((((param_1 == (longlong *)0x0) || (param_1[5] == 0)) || (param_1[2] == 0)) ||
     ((*param_1 == 0 && ((int)param_1[1] != 0)))) {
    return -2;
  }
  piVar6 = (int *)param_1[5];
  if (*piVar6 == 0xb) {
    *piVar6 = 0xc;
  }
  local_98 = (undefined1 *)param_1[2];
  local_b4 = *(uint *)(param_1 + 3);
  local_c0 = (byte *)*param_1;
  uVar3 = *(uint *)(param_1 + 1);
  local_d0 = piVar6[0x10];
  local_cc = piVar6[0x11];
  local_a0 = 0;
  local_c8 = uVar3;
  local_b0 = local_b4;
  do {
    switch(*piVar6) {
    case 0:
      if (piVar6[2] == 0) {
        *piVar6 = 0xc;
      }
      else {
        for (; local_cc < 0x10; local_cc = local_cc + 8) {
          if (local_c8 == 0) goto LAB_0159f10b;
          local_c8 = local_c8 - 1;
          local_d0 = local_d0 + ((uint)*local_c0 << ((byte)local_cc & 0x1f));
          local_c0 = local_c0 + 1;
        }
        if (((piVar6[2] & 2U) != 0) && (local_d0 == 0x8b1f)) {
          iVar8 = FUN_015a60c0(0,0,0);
          piVar6[6] = iVar8;
          iVar8 = FUN_015a60c0(piVar6[6]);
          piVar6[6] = iVar8;
          local_d0 = 0;
          local_cc = 0;
          *piVar6 = 1;
          break;
        }
        piVar6[4] = 0;
        if (*(longlong *)(piVar6 + 8) != 0) {
          *(undefined4 *)(*(longlong *)(piVar6 + 8) + 0x3c) = 0xffffffff;
        }
        if (((piVar6[2] & 1U) != 0) && (((local_d0 & 0xff) * 0x100 + (local_d0 >> 8)) % 0x1f == 0))
        {
          if ((local_d0 & 0xf) != 8) {
            param_1[4] = (longlong)s_unknown_compression_method_01f68d78;
            *piVar6 = 0x1d;
            break;
          }
          local_d0 = local_d0 >> 4;
          local_cc = local_cc - 4;
          uVar7 = (local_d0 & 0xf) + 8;
          if (piVar6[10] == 0) {
            piVar6[10] = uVar7;
          }
          else if ((uint)piVar6[10] < uVar7) {
            param_1[4] = (longlong)s_invalid_window_size_01f68d98;
            *piVar6 = 0x1d;
            break;
          }
          piVar6[5] = 1 << (sbyte)uVar7;
          iVar8 = FUN_015a5730(0,0,0);
          piVar6[6] = iVar8;
          *(int *)((longlong)param_1 + 0x4c) = iVar8;
          if ((local_d0 & 0x200) == 0) {
            local_58 = 0xb;
          }
          else {
            local_58 = 9;
          }
          *piVar6 = local_58;
          local_d0 = 0;
          local_cc = 0;
          break;
        }
        param_1[4] = (longlong)s_incorrect_header_check_01f68d60;
        *piVar6 = 0x1d;
      }
      break;
    case 1:
      for (; local_cc < 0x10; local_cc = local_cc + 8) {
        if (local_c8 == 0) goto LAB_0159f10b;
        local_c8 = local_c8 - 1;
        local_d0 = local_d0 + ((uint)*local_c0 << ((byte)local_cc & 0x1f));
        local_c0 = local_c0 + 1;
      }
      piVar6[4] = local_d0;
      if ((piVar6[4] & 0xffU) != 8) {
        param_1[4] = (longlong)s_unknown_compression_method_01f68db0;
        *piVar6 = 0x1d;
        break;
      }
      if ((piVar6[4] & 0xe000U) != 0) {
        param_1[4] = (longlong)s_unknown_header_flags_set_01f68dd0;
        *piVar6 = 0x1d;
        break;
      }
      if (*(longlong *)(piVar6 + 8) != 0) {
        **(uint **)(piVar6 + 8) = local_d0 >> 8 & 1;
      }
      if ((piVar6[4] & 0x200U) != 0) {
        iVar8 = FUN_015a60c0(piVar6[6]);
        piVar6[6] = iVar8;
      }
      local_d0 = 0;
      local_cc = 0;
      *piVar6 = 2;
    case 2:
      for (; local_cc < 0x20; local_cc = local_cc + 8) {
        if (local_c8 == 0) goto LAB_0159f10b;
        local_c8 = local_c8 - 1;
        local_d0 = local_d0 + ((uint)*local_c0 << ((byte)local_cc & 0x1f));
        local_c0 = local_c0 + 1;
      }
      if (*(longlong *)(piVar6 + 8) != 0) {
        *(uint *)(*(longlong *)(piVar6 + 8) + 4) = local_d0;
      }
      if ((piVar6[4] & 0x200U) != 0) {
        iVar8 = FUN_015a60c0(piVar6[6]);
        piVar6[6] = iVar8;
      }
      local_d0 = 0;
      local_cc = 0;
      *piVar6 = 3;
switchD_0159c89f_caseD_3:
      for (; local_cc < 0x10; local_cc = local_cc + 8) {
        if (local_c8 == 0) goto LAB_0159f10b;
        local_c8 = local_c8 - 1;
        local_d0 = local_d0 + ((uint)*local_c0 << ((byte)local_cc & 0x1f));
        local_c0 = local_c0 + 1;
      }
      if (*(longlong *)(piVar6 + 8) != 0) {
        *(uint *)(*(longlong *)(piVar6 + 8) + 8) = local_d0 & 0xff;
        *(uint *)(*(longlong *)(piVar6 + 8) + 0xc) = local_d0 >> 8;
      }
      if ((piVar6[4] & 0x200U) != 0) {
        iVar8 = FUN_015a60c0(piVar6[6]);
        piVar6[6] = iVar8;
      }
      local_d0 = 0;
      local_cc = 0;
      *piVar6 = 4;
switchD_0159c89f_caseD_4:
      if ((piVar6[4] & 0x400U) == 0) {
        if (*(longlong *)(piVar6 + 8) != 0) {
          *(undefined8 *)(*(longlong *)(piVar6 + 8) + 0x10) = 0;
        }
      }
      else {
        for (; local_cc < 0x10; local_cc = local_cc + 8) {
          if (local_c8 == 0) goto LAB_0159f10b;
          local_c8 = local_c8 - 1;
          local_d0 = local_d0 + ((uint)*local_c0 << ((byte)local_cc & 0x1f));
          local_c0 = local_c0 + 1;
        }
        piVar6[0x12] = local_d0;
        if (*(longlong *)(piVar6 + 8) != 0) {
          *(uint *)(*(longlong *)(piVar6 + 8) + 0x18) = local_d0;
        }
        if ((piVar6[4] & 0x200U) != 0) {
          iVar8 = FUN_015a60c0(piVar6[6]);
          piVar6[6] = iVar8;
        }
        local_d0 = 0;
        local_cc = 0;
      }
      *piVar6 = 5;
switchD_0159c89f_caseD_5:
      if ((piVar6[4] & 0x400U) != 0) {
        local_c4 = piVar6[0x12];
        if (local_c8 < local_c4) {
          local_c4 = local_c8;
        }
        if (local_c4 != 0) {
          if ((*(longlong *)(piVar6 + 8) != 0) &&
             (*(longlong *)(*(longlong *)(piVar6 + 8) + 0x10) != 0)) {
            FUN_01596930((ulonglong)
                         (uint)(*(int *)(*(longlong *)(piVar6 + 8) + 0x18) - piVar6[0x12]) +
                         *(longlong *)(*(longlong *)(piVar6 + 8) + 0x10));
          }
          if ((piVar6[4] & 0x200U) != 0) {
            iVar8 = FUN_015a60c0(piVar6[6]);
            piVar6[6] = iVar8;
          }
          local_c8 = local_c8 - local_c4;
          local_c0 = local_c0 + local_c4;
          piVar6[0x12] = piVar6[0x12] - local_c4;
        }
        if (piVar6[0x12] != 0) goto LAB_0159f10b;
      }
      piVar6[0x12] = 0;
      *piVar6 = 6;
switchD_0159c89f_caseD_6:
      if ((piVar6[4] & 0x800U) == 0) {
        if (*(longlong *)(piVar6 + 8) != 0) {
          *(undefined8 *)(*(longlong *)(piVar6 + 8) + 0x20) = 0;
        }
      }
      else {
        if (local_c8 == 0) goto LAB_0159f10b;
        local_c4 = 0;
        do {
          bVar1 = local_c0[local_c4];
          local_c4 = local_c4 + 1;
          if (((*(longlong *)(piVar6 + 8) != 0) &&
              (*(longlong *)(*(longlong *)(piVar6 + 8) + 0x20) != 0)) &&
             ((uint)piVar6[0x12] < *(uint *)(*(longlong *)(piVar6 + 8) + 0x28))) {
            *(byte *)(*(longlong *)(*(longlong *)(piVar6 + 8) + 0x20) +
                     (ulonglong)(uint)piVar6[0x12]) = bVar1;
            piVar6[0x12] = piVar6[0x12] + 1;
          }
        } while ((bVar1 != 0) && (local_c4 < local_c8));
        if ((piVar6[4] & 0x200U) != 0) {
          iVar8 = FUN_015a60c0(piVar6[6]);
          piVar6[6] = iVar8;
        }
        local_c8 = local_c8 - local_c4;
        local_c0 = local_c0 + local_c4;
        if (bVar1 != 0) goto LAB_0159f10b;
      }
      piVar6[0x12] = 0;
      *piVar6 = 7;
switchD_0159c89f_caseD_7:
      if ((piVar6[4] & 0x1000U) == 0) {
        if (*(longlong *)(piVar6 + 8) != 0) {
          *(undefined8 *)(*(longlong *)(piVar6 + 8) + 0x2c) = 0;
        }
      }
      else {
        if (local_c8 == 0) goto LAB_0159f10b;
        local_c4 = 0;
        do {
          bVar1 = local_c0[local_c4];
          local_c4 = local_c4 + 1;
          if (((*(longlong *)(piVar6 + 8) != 0) &&
              (*(longlong *)(*(longlong *)(piVar6 + 8) + 0x2c) != 0)) &&
             ((uint)piVar6[0x12] < *(uint *)(*(longlong *)(piVar6 + 8) + 0x34))) {
            *(byte *)(*(longlong *)(*(longlong *)(piVar6 + 8) + 0x2c) +
                     (ulonglong)(uint)piVar6[0x12]) = bVar1;
            piVar6[0x12] = piVar6[0x12] + 1;
          }
        } while ((bVar1 != 0) && (local_c4 < local_c8));
        if ((piVar6[4] & 0x200U) != 0) {
          iVar8 = FUN_015a60c0(piVar6[6]);
          piVar6[6] = iVar8;
        }
        local_c8 = local_c8 - local_c4;
        local_c0 = local_c0 + local_c4;
        if (bVar1 != 0) goto LAB_0159f10b;
      }
      *piVar6 = 8;
switchD_0159c89f_caseD_8:
      if ((piVar6[4] & 0x200U) != 0) {
        for (; local_cc < 0x10; local_cc = local_cc + 8) {
          if (local_c8 == 0) goto LAB_0159f10b;
          local_c8 = local_c8 - 1;
          local_d0 = local_d0 + ((uint)*local_c0 << ((byte)local_cc & 0x1f));
          local_c0 = local_c0 + 1;
        }
        if (local_d0 != (piVar6[6] & 0xffffU)) {
          param_1[4] = (longlong)s_header_crc_mismatch_01f68df8;
          *piVar6 = 0x1d;
          break;
        }
        local_d0 = 0;
        local_cc = 0;
      }
      if (*(longlong *)(piVar6 + 8) != 0) {
        *(uint *)(*(longlong *)(piVar6 + 8) + 0x38) = piVar6[4] >> 9 & 1;
        *(undefined4 *)(*(longlong *)(piVar6 + 8) + 0x3c) = 1;
      }
      iVar8 = FUN_015a60c0(0);
      piVar6[6] = iVar8;
      *(int *)((longlong)param_1 + 0x4c) = iVar8;
      *piVar6 = 0xb;
      break;
    case 3:
      goto switchD_0159c89f_caseD_3;
    case 4:
      goto switchD_0159c89f_caseD_4;
    case 5:
      goto switchD_0159c89f_caseD_5;
    case 6:
      goto switchD_0159c89f_caseD_6;
    case 7:
      goto switchD_0159c89f_caseD_7;
    case 8:
      goto switchD_0159c89f_caseD_8;
    case 9:
      for (; local_cc < 0x20; local_cc = local_cc + 8) {
        if (local_c8 == 0) goto LAB_0159f10b;
        local_c8 = local_c8 - 1;
        local_d0 = local_d0 + ((uint)*local_c0 << ((byte)local_cc & 0x1f));
        local_c0 = local_c0 + 1;
      }
      iVar8 = (local_d0 >> 0x18) + (local_d0 >> 8 & 0xff00) + (local_d0 & 0xff00) * 0x100 +
              local_d0 * 0x1000000;
      piVar6[6] = iVar8;
      *(int *)((longlong)param_1 + 0x4c) = iVar8;
      local_d0 = 0;
      local_cc = 0;
      *piVar6 = 10;
    case 10:
      if (piVar6[3] == 0) {
        param_1[2] = (longlong)local_98;
        *(uint *)(param_1 + 3) = local_b0;
        *param_1 = (longlong)local_c0;
        *(uint *)(param_1 + 1) = local_c8;
        piVar6[0x10] = local_d0;
        piVar6[0x11] = local_cc;
        return 2;
      }
      iVar8 = FUN_015a5730(0,0,0);
      piVar6[6] = iVar8;
      *(int *)((longlong)param_1 + 0x4c) = iVar8;
      *piVar6 = 0xb;
switchD_0159c89f_caseD_b:
      if ((param_2 == 5) || (param_2 == 6)) goto LAB_0159f10b;
switchD_0159c89f_caseD_c:
      if (piVar6[1] == 0) {
        for (; local_cc < 3; local_cc = local_cc + 8) {
          if (local_c8 == 0) goto LAB_0159f10b;
          local_c8 = local_c8 - 1;
          local_d0 = local_d0 + ((uint)*local_c0 << ((byte)local_cc & 0x1f));
          local_c0 = local_c0 + 1;
        }
        piVar6[1] = local_d0 & 1;
        uVar7 = local_d0 >> 1 & 3;
        if (uVar7 == 0) {
          *piVar6 = 0xd;
        }
        else if (uVar7 == 1) {
          FUN_015a0290(piVar6);
          *piVar6 = 0x13;
          if (param_2 == 6) {
            local_d0 = local_d0 >> 3;
            local_cc = local_cc - 3;
            goto LAB_0159f10b;
          }
        }
        else if (uVar7 == 2) {
          *piVar6 = 0x10;
        }
        else if (uVar7 == 3) {
          param_1[4] = (longlong)s_invalid_block_type_01f68e10;
          *piVar6 = 0x1d;
        }
        local_d0 = local_d0 >> 3;
        local_cc = local_cc - 3;
      }
      else {
        local_d0 = local_d0 >> ((byte)local_cc & 7);
        local_cc = local_cc - (local_cc & 7);
        *piVar6 = 0x1a;
      }
      break;
    case 0xb:
      goto switchD_0159c89f_caseD_b;
    case 0xc:
      goto switchD_0159c89f_caseD_c;
    case 0xd:
      local_d0 = local_d0 >> ((byte)local_cc & 7);
      for (local_cc = local_cc - (local_cc & 7); local_cc < 0x20; local_cc = local_cc + 8) {
        if (local_c8 == 0) goto LAB_0159f10b;
        local_c8 = local_c8 - 1;
        local_d0 = local_d0 + ((uint)*local_c0 << ((byte)local_cc & 0x1f));
        local_c0 = local_c0 + 1;
      }
      if ((local_d0 & 0xffff) == (local_d0 >> 0x10 ^ 0xffff)) {
        piVar6[0x12] = local_d0 & 0xffff;
        local_d0 = 0;
        local_cc = 0;
        *piVar6 = 0xe;
        if (param_2 != 6) goto switchD_0159c89f_caseD_e;
        goto LAB_0159f10b;
      }
      param_1[4] = (longlong)s_invalid_stored_block_lengths_01f68e28;
      *piVar6 = 0x1d;
      break;
    case 0xe:
switchD_0159c89f_caseD_e:
      *piVar6 = 0xf;
switchD_0159c89f_caseD_f:
      local_c4 = piVar6[0x12];
      if (local_c4 == 0) {
        *piVar6 = 0xb;
      }
      else {
        if (local_c8 < local_c4) {
          local_c4 = local_c8;
        }
        if (local_b0 < local_c4) {
          local_c4 = local_b0;
        }
        if (local_c4 == 0) goto LAB_0159f10b;
        FUN_01596930(local_98,local_c0,local_c4);
        local_c8 = local_c8 - local_c4;
        local_c0 = local_c0 + local_c4;
        local_b0 = local_b0 - local_c4;
        local_98 = local_98 + local_c4;
        piVar6[0x12] = piVar6[0x12] - local_c4;
      }
      break;
    case 0xf:
      goto switchD_0159c89f_caseD_f;
    case 0x10:
      for (; local_cc < 0xe; local_cc = local_cc + 8) {
        if (local_c8 == 0) goto LAB_0159f10b;
        local_c8 = local_c8 - 1;
        local_d0 = local_d0 + ((uint)*local_c0 << ((byte)local_cc & 0x1f));
        local_c0 = local_c0 + 1;
      }
      piVar6[0x1c] = (local_d0 & 0x1f) + 0x101;
      piVar6[0x1d] = (local_d0 >> 5 & 0x1f) + 1;
      piVar6[0x1b] = (local_d0 >> 10 & 0xf) + 4;
      local_d0 = local_d0 >> 0xe;
      local_cc = local_cc - 0xe;
      if (((uint)piVar6[0x1c] < 0x11f) && ((uint)piVar6[0x1d] < 0x1f)) {
        piVar6[0x1e] = 0;
        *piVar6 = 0x11;
        goto switchD_0159c89f_caseD_11;
      }
      param_1[4] = (longlong)s_too_many_length_or_distance_symb_01f68e48;
      *piVar6 = 0x1d;
      break;
    case 0x11:
switchD_0159c89f_caseD_11:
      while ((uint)piVar6[0x1e] < (uint)piVar6[0x1b]) {
        for (; local_cc < 3; local_cc = local_cc + 8) {
          if (local_c8 == 0) goto LAB_0159f10b;
          local_c8 = local_c8 - 1;
          local_d0 = local_d0 + ((uint)*local_c0 << ((byte)local_cc & 0x1f));
          local_c0 = local_c0 + 1;
        }
        *(ushort *)
         ((longlong)piVar6 +
         (ulonglong)*(ushort *)(&DAT_01f684b0 + (ulonglong)(uint)piVar6[0x1e] * 2) * 2 + 0x84) =
             (ushort)local_d0 & 7;
        piVar6[0x1e] = piVar6[0x1e] + 1;
        local_d0 = local_d0 >> 3;
        local_cc = local_cc - 3;
      }
      while ((uint)piVar6[0x1e] < 0x13) {
        *(undefined2 *)
         ((longlong)piVar6 +
         (ulonglong)*(ushort *)(&DAT_01f684b0 + (ulonglong)(uint)piVar6[0x1e] * 2) * 2 + 0x84) = 0;
        piVar6[0x1e] = piVar6[0x1e] + 1;
      }
      *(int **)(piVar6 + 0x1f) = piVar6 + 0x151;
      *(undefined8 *)(piVar6 + 0x15) = *(undefined8 *)(piVar6 + 0x1f);
      piVar6[0x19] = 7;
      local_a0 = FUN_015a05e0(0,piVar6 + 0x21,0x13,piVar6 + 0x1f,piVar6 + 0x19,piVar6 + 0xc1);
      if (local_a0 == 0) {
        piVar6[0x1e] = 0;
        *piVar6 = 0x12;
switchD_0159c89f_caseD_12:
        while ((uint)piVar6[0x1e] < (uint)(piVar6[0x1c] + piVar6[0x1d])) {
          while( true ) {
            uVar4 = *(undefined4 *)
                     (*(longlong *)(piVar6 + 0x15) +
                     (ulonglong)(local_d0 & (1 << ((byte)piVar6[0x19] & 0x1f)) - 1U) * 4);
            local_b8._1_1_ = (byte)((uint)uVar4 >> 8);
            if (local_b8._1_1_ <= local_cc) break;
            if (local_c8 == 0) goto LAB_0159f10b;
            local_c8 = local_c8 - 1;
            local_d0 = local_d0 + ((uint)*local_c0 << ((byte)local_cc & 0x1f));
            local_c0 = local_c0 + 1;
            local_cc = local_cc + 8;
          }
          local_b8._2_2_ = (ushort)((uint)uVar4 >> 0x10);
          if (local_b8._2_2_ < 0x10) {
            local_d0 = local_d0 >> (local_b8._1_1_ & 0x1f);
            local_cc = local_cc - local_b8._1_1_;
            *(ushort *)((longlong)piVar6 + (ulonglong)(uint)piVar6[0x1e] * 2 + 0x84) =
                 local_b8._2_2_;
            piVar6[0x1e] = piVar6[0x1e] + 1;
          }
          else {
            if (local_b8._2_2_ == 0x10) {
              for (; local_cc < local_b8._1_1_ + 2; local_cc = local_cc + 8) {
                if (local_c8 == 0) goto LAB_0159f10b;
                local_c8 = local_c8 - 1;
                local_d0 = local_d0 + ((uint)*local_c0 << ((byte)local_cc & 0x1f));
                local_c0 = local_c0 + 1;
              }
              local_d0 = local_d0 >> (local_b8._1_1_ & 0x1f);
              local_cc = local_cc - local_b8._1_1_;
              if (piVar6[0x1e] == 0) {
                param_1[4] = (longlong)s_invalid_bit_length_repeat_01f68e90;
                *piVar6 = 0x1d;
                break;
              }
              uVar2 = *(undefined2 *)((longlong)piVar6 + (ulonglong)(piVar6[0x1e] - 1) * 2 + 0x84);
              local_c4 = (local_d0 & 3) + 3;
              local_d0 = local_d0 >> 2;
              local_cc = local_cc - 2;
            }
            else if (local_b8._2_2_ == 0x11) {
              for (; local_cc < local_b8._1_1_ + 3; local_cc = local_cc + 8) {
                if (local_c8 == 0) goto LAB_0159f10b;
                local_c8 = local_c8 - 1;
                local_d0 = local_d0 + ((uint)*local_c0 << ((byte)local_cc & 0x1f));
                local_c0 = local_c0 + 1;
              }
              local_d0 = local_d0 >> (local_b8._1_1_ & 0x1f);
              uVar2 = 0;
              local_c4 = (local_d0 & 7) + 3;
              local_d0 = local_d0 >> 3;
              local_cc = (local_cc - local_b8._1_1_) - 3;
            }
            else {
              for (; local_cc < local_b8._1_1_ + 7; local_cc = local_cc + 8) {
                if (local_c8 == 0) goto LAB_0159f10b;
                local_c8 = local_c8 - 1;
                local_d0 = local_d0 + ((uint)*local_c0 << ((byte)local_cc & 0x1f));
                local_c0 = local_c0 + 1;
              }
              local_d0 = local_d0 >> (local_b8._1_1_ & 0x1f);
              uVar2 = 0;
              local_c4 = (local_d0 & 0x7f) + 0xb;
              local_d0 = local_d0 >> 7;
              local_cc = (local_cc - local_b8._1_1_) - 7;
            }
            if ((uint)(piVar6[0x1c] + piVar6[0x1d]) < piVar6[0x1e] + local_c4) {
              param_1[4] = (longlong)s_invalid_bit_length_repeat_01f68eb0;
              *piVar6 = 0x1d;
              break;
            }
            while (local_c4 != 0) {
              *(undefined2 *)((longlong)piVar6 + (ulonglong)(uint)piVar6[0x1e] * 2 + 0x84) = uVar2;
              piVar6[0x1e] = piVar6[0x1e] + 1;
              local_c4 = local_c4 + -1;
            }
          }
        }
        if (*piVar6 != 0x1d) {
          if ((short)piVar6[0xa1] == 0) {
            param_1[4] = (longlong)s_invalid_code____missing_end_of_b_01f68ed0;
            *piVar6 = 0x1d;
          }
          else {
            *(int **)(piVar6 + 0x1f) = piVar6 + 0x151;
            *(undefined8 *)(piVar6 + 0x15) = *(undefined8 *)(piVar6 + 0x1f);
            piVar6[0x19] = 9;
            local_a0 = FUN_015a05e0(1,piVar6 + 0x21,piVar6[0x1c],piVar6 + 0x1f,piVar6 + 0x19,
                                    piVar6 + 0xc1);
            if (local_a0 == 0) {
              *(undefined8 *)(piVar6 + 0x17) = *(undefined8 *)(piVar6 + 0x1f);
              piVar6[0x1a] = 6;
              local_a0 = FUN_015a05e0(2,(longlong)piVar6 + (ulonglong)(uint)piVar6[0x1c] * 2 + 0x84,
                                      piVar6[0x1d],piVar6 + 0x1f,piVar6 + 0x1a,piVar6 + 0xc1);
              if (local_a0 == 0) {
                *piVar6 = 0x13;
                if (param_2 == 6) goto LAB_0159f10b;
switchD_0159c89f_caseD_13:
                *piVar6 = 0x14;
switchD_0159c89f_caseD_14:
                if ((local_c8 < 6) || (local_b0 < 0x102)) {
                  piVar6[0x6f6] = 0;
                  while( true ) {
                    uVar7 = *(uint *)(*(longlong *)(piVar6 + 0x15) +
                                     (ulonglong)(local_d0 & (1 << ((byte)piVar6[0x19] & 0x1f)) - 1U)
                                     * 4);
                    local_b8._1_1_ = (byte)(uVar7 >> 8);
                    if (local_b8._1_1_ <= local_cc) break;
                    if (local_c8 == 0) goto LAB_0159f10b;
                    local_c8 = local_c8 - 1;
                    local_d0 = local_d0 + ((uint)*local_c0 << ((byte)local_cc & 0x1f));
                    local_c0 = local_c0 + 1;
                    local_cc = local_cc + 8;
                  }
                  local_b8._0_1_ = (char)uVar7;
                  if (((char)local_b8 != '\0') && ((uVar7 & 0xf0) == 0)) {
                    for (; uVar5 = *(uint *)(*(longlong *)(piVar6 + 0x15) +
                                            (ulonglong)
                                            ((uVar7 >> 0x10) +
                                            ((local_d0 &
                                             (1 << (local_b8._1_1_ + (char)local_b8 & 0x1f)) - 1U)
                                            >> (local_b8._1_1_ & 0x1f))) * 4),
                        local_cc < (uint)local_b8._1_1_ + (uVar5 >> 8 & 0xff);
                        local_cc = local_cc + 8) {
                      if (local_c8 == 0) goto LAB_0159f10b;
                      local_c8 = local_c8 - 1;
                      local_d0 = local_d0 + ((uint)*local_c0 << ((byte)local_cc & 0x1f));
                      local_c0 = local_c0 + 1;
                    }
                    local_d0 = local_d0 >> (local_b8._1_1_ & 0x1f);
                    local_cc = local_cc - local_b8._1_1_;
                    piVar6[0x6f6] = (uint)local_b8._1_1_ + piVar6[0x6f6];
                    uVar7 = uVar5;
                  }
                  local_b8 = uVar7;
                  local_d0 = local_d0 >> (local_b8._1_1_ & 0x1f);
                  local_cc = local_cc - local_b8._1_1_;
                  piVar6[0x6f6] = (uint)local_b8._1_1_ + piVar6[0x6f6];
                  piVar6[0x12] = local_b8 >> 0x10;
                  if ((char)local_b8 == '\0') {
                    *piVar6 = 0x19;
                  }
                  else if ((local_b8 & 0x20) == 0) {
                    if ((local_b8 & 0x40) != 0) {
                      param_1[4] = (longlong)s_invalid_literal_length_code_01f68f30;
                      *piVar6 = 0x1d;
                      break;
                    }
                    piVar6[0x14] = local_b8 & 0xf;
                    *piVar6 = 0x15;
switchD_0159c89f_caseD_15:
                    if (piVar6[0x14] != 0) {
                      for (; local_cc < (uint)piVar6[0x14]; local_cc = local_cc + 8) {
                        if (local_c8 == 0) goto LAB_0159f10b;
                        local_c8 = local_c8 - 1;
                        local_d0 = local_d0 + ((uint)*local_c0 << ((byte)local_cc & 0x1f));
                        local_c0 = local_c0 + 1;
                      }
                      piVar6[0x12] = (local_d0 & (1 << ((byte)piVar6[0x14] & 0x1f)) - 1U) +
                                     piVar6[0x12];
                      local_d0 = local_d0 >> ((byte)piVar6[0x14] & 0x1f);
                      local_cc = local_cc - piVar6[0x14];
                      piVar6[0x6f6] = piVar6[0x6f6] + piVar6[0x14];
                    }
                    piVar6[0x6f7] = piVar6[0x12];
                    *piVar6 = 0x16;
switchD_0159c89f_caseD_16:
                    while( true ) {
                      uVar7 = *(uint *)(*(longlong *)(piVar6 + 0x17) +
                                       (ulonglong)
                                       (local_d0 & (1 << ((byte)piVar6[0x1a] & 0x1f)) - 1U) * 4);
                      local_b8._1_1_ = (byte)(uVar7 >> 8);
                      if (local_b8._1_1_ <= local_cc) break;
                      if (local_c8 == 0) goto LAB_0159f10b;
                      local_c8 = local_c8 - 1;
                      local_d0 = local_d0 + ((uint)*local_c0 << ((byte)local_cc & 0x1f));
                      local_c0 = local_c0 + 1;
                      local_cc = local_cc + 8;
                    }
                    local_b8._0_1_ = (char)uVar7;
                    if ((uVar7 & 0xf0) == 0) {
                      for (; uVar5 = *(uint *)(*(longlong *)(piVar6 + 0x17) +
                                              (ulonglong)
                                              ((uVar7 >> 0x10) +
                                              ((local_d0 &
                                               (1 << (local_b8._1_1_ + (char)local_b8 & 0x1f)) - 1U)
                                              >> (local_b8._1_1_ & 0x1f))) * 4),
                          local_cc < (uint)local_b8._1_1_ + (uVar5 >> 8 & 0xff);
                          local_cc = local_cc + 8) {
                        if (local_c8 == 0) goto LAB_0159f10b;
                        local_c8 = local_c8 - 1;
                        local_d0 = local_d0 + ((uint)*local_c0 << ((byte)local_cc & 0x1f));
                        local_c0 = local_c0 + 1;
                      }
                      local_d0 = local_d0 >> (local_b8._1_1_ & 0x1f);
                      local_cc = local_cc - local_b8._1_1_;
                      piVar6[0x6f6] = (uint)local_b8._1_1_ + piVar6[0x6f6];
                      uVar7 = uVar5;
                    }
                    local_b8 = uVar7;
                    local_d0 = local_d0 >> (local_b8._1_1_ & 0x1f);
                    local_cc = local_cc - local_b8._1_1_;
                    piVar6[0x6f6] = (uint)local_b8._1_1_ + piVar6[0x6f6];
                    if ((local_b8 & 0x40) == 0) {
                      piVar6[0x13] = local_b8 >> 0x10;
                      piVar6[0x14] = local_b8 & 0xf;
                      *piVar6 = 0x17;
switchD_0159c89f_caseD_17:
                      if (piVar6[0x14] != 0) {
                        for (; local_cc < (uint)piVar6[0x14]; local_cc = local_cc + 8) {
                          if (local_c8 == 0) goto LAB_0159f10b;
                          local_c8 = local_c8 - 1;
                          local_d0 = local_d0 + ((uint)*local_c0 << ((byte)local_cc & 0x1f));
                          local_c0 = local_c0 + 1;
                        }
                        piVar6[0x13] = (local_d0 & (1 << ((byte)piVar6[0x14] & 0x1f)) - 1U) +
                                       piVar6[0x13];
                        local_d0 = local_d0 >> ((byte)piVar6[0x14] & 0x1f);
                        local_cc = local_cc - piVar6[0x14];
                        piVar6[0x6f6] = piVar6[0x6f6] + piVar6[0x14];
                      }
                      *piVar6 = 0x18;
switchD_0159c89f_caseD_18:
                      if (local_b0 == 0) goto LAB_0159f10b;
                      if (local_b4 - local_b0 < (uint)piVar6[0x13]) {
                        local_c4 = piVar6[0x13] - (local_b4 - local_b0);
                        if (((uint)piVar6[0xc] < local_c4) && (piVar6[0x6f5] != 0)) {
                          param_1[4] = (longlong)s_invalid_distance_too_far_back_01f68f68;
                          *piVar6 = 0x1d;
                          break;
                        }
                        if ((uint)piVar6[0xd] < local_c4) {
                          local_c4 = local_c4 - piVar6[0xd];
                          local_78 = (undefined1 *)
                                     ((ulonglong)(piVar6[0xb] - local_c4) +
                                     *(longlong *)(piVar6 + 0xe));
                        }
                        else {
                          local_78 = (undefined1 *)
                                     ((ulonglong)(piVar6[0xd] - local_c4) +
                                     *(longlong *)(piVar6 + 0xe));
                        }
                        if ((uint)piVar6[0x12] < local_c4) {
                          local_c4 = piVar6[0x12];
                        }
                      }
                      else {
                        local_78 = local_98 + -(ulonglong)(uint)piVar6[0x13];
                        local_c4 = piVar6[0x12];
                      }
                      if (local_b0 < local_c4) {
                        local_c4 = local_b0;
                      }
                      local_b0 = local_b0 - local_c4;
                      piVar6[0x12] = piVar6[0x12] - local_c4;
                      do {
                        *local_98 = *local_78;
                        local_98 = local_98 + 1;
                        local_78 = local_78 + 1;
                        local_c4 = local_c4 - 1;
                      } while (local_c4 != 0);
                      if (piVar6[0x12] == 0) {
                        *piVar6 = 0x14;
                      }
                      break;
                    }
                    param_1[4] = (longlong)s_invalid_distance_code_01f68f50;
                    *piVar6 = 0x1d;
                  }
                  else {
                    piVar6[0x6f6] = -1;
                    *piVar6 = 0xb;
                  }
                }
                else {
                  param_1[2] = (longlong)local_98;
                  *(uint *)(param_1 + 3) = local_b0;
                  *param_1 = (longlong)local_c0;
                  *(uint *)(param_1 + 1) = local_c8;
                  piVar6[0x10] = local_d0;
                  piVar6[0x11] = local_cc;
                  FUN_015a0de0(param_1);
                  local_98 = (undefined1 *)param_1[2];
                  local_b0 = *(uint *)(param_1 + 3);
                  local_c0 = (byte *)*param_1;
                  local_c8 = *(uint *)(param_1 + 1);
                  local_d0 = piVar6[0x10];
                  local_cc = piVar6[0x11];
                  if (*piVar6 == 0xb) {
                    piVar6[0x6f6] = -1;
                  }
                }
              }
              else {
                param_1[4] = (longlong)s_invalid_distances_set_01f68f18;
                *piVar6 = 0x1d;
              }
            }
            else {
              param_1[4] = (longlong)s_invalid_literal_lengths_set_01f68ef8;
              *piVar6 = 0x1d;
            }
          }
        }
      }
      else {
        param_1[4] = (longlong)s_invalid_code_lengths_set_01f68e70;
        *piVar6 = 0x1d;
      }
      break;
    case 0x12:
      goto switchD_0159c89f_caseD_12;
    case 0x13:
      goto switchD_0159c89f_caseD_13;
    case 0x14:
      goto switchD_0159c89f_caseD_14;
    case 0x15:
      goto switchD_0159c89f_caseD_15;
    case 0x16:
      goto switchD_0159c89f_caseD_16;
    case 0x17:
      goto switchD_0159c89f_caseD_17;
    case 0x18:
      goto switchD_0159c89f_caseD_18;
    case 0x19:
      if (local_b0 == 0) goto LAB_0159f10b;
      *local_98 = (char)piVar6[0x12];
      local_98 = local_98 + 1;
      local_b0 = local_b0 - 1;
      *piVar6 = 0x14;
      break;
    case 0x1a:
      if (piVar6[2] == 0) {
LAB_0159f009:
        *piVar6 = 0x1b;
        goto switchD_0159c89f_caseD_1b;
      }
      for (; local_cc < 0x20; local_cc = local_cc + 8) {
        if (local_c8 == 0) goto LAB_0159f10b;
        local_c8 = local_c8 - 1;
        local_d0 = local_d0 + ((uint)*local_c0 << ((byte)local_cc & 0x1f));
        local_c0 = local_c0 + 1;
      }
      local_b4 = local_b4 - local_b0;
      *(uint *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + local_b4;
      piVar6[7] = piVar6[7] + local_b4;
      if (local_b4 != 0) {
        if (piVar6[4] == 0) {
          local_84 = FUN_015a5730(piVar6[6],(longlong)local_98 - (ulonglong)local_b4,local_b4);
        }
        else {
          local_84 = FUN_015a60c0(piVar6[6],(longlong)local_98 - (ulonglong)local_b4,local_b4);
        }
        piVar6[6] = local_84;
        *(int *)((longlong)param_1 + 0x4c) = local_84;
      }
      local_b4 = local_b0;
      if (piVar6[4] == 0) {
        local_5c = (local_d0 >> 0x18) + (local_d0 >> 8 & 0xff00) + (local_d0 & 0xff00) * 0x100 +
                   local_d0 * 0x1000000;
      }
      else {
        local_5c = local_d0;
      }
      if (local_5c == piVar6[6]) {
        local_d0 = 0;
        local_cc = 0;
        goto LAB_0159f009;
      }
      param_1[4] = (longlong)s_incorrect_data_check_01f68f88;
      *piVar6 = 0x1d;
      break;
    case 0x1b:
switchD_0159c89f_caseD_1b:
      if ((piVar6[2] != 0) && (piVar6[4] != 0)) {
        for (; local_cc < 0x20; local_cc = local_cc + 8) {
          if (local_c8 == 0) goto LAB_0159f10b;
          local_c8 = local_c8 - 1;
          local_d0 = local_d0 + ((uint)*local_c0 << ((byte)local_cc & 0x1f));
          local_c0 = local_c0 + 1;
        }
        if (local_d0 != piVar6[7]) {
          param_1[4] = (longlong)s_incorrect_length_check_01f68fa0;
          *piVar6 = 0x1d;
          break;
        }
        local_d0 = 0;
        local_cc = 0;
      }
      *piVar6 = 0x1c;
      goto switchD_0159c89f_caseD_1c;
    case 0x1c:
switchD_0159c89f_caseD_1c:
      local_a0 = 1;
LAB_0159f10b:
      param_1[2] = (longlong)local_98;
      *(uint *)(param_1 + 3) = local_b0;
      *param_1 = (longlong)local_c0;
      *(uint *)(param_1 + 1) = local_c8;
      piVar6[0x10] = local_d0;
      piVar6[0x11] = local_cc;
      if (((piVar6[0xb] != 0) ||
          (((local_b4 != *(uint *)(param_1 + 3) && (*piVar6 < 0x1d)) &&
           ((*piVar6 < 0x1a || (param_2 != 4)))))) &&
         (iVar8 = FUN_015a02e0(param_1,param_1[2],local_b4 - (int)param_1[3]), iVar8 != 0)) {
        *piVar6 = 0x1e;
        return -4;
      }
      iVar8 = uVar3 - (int)param_1[1];
      local_b4 = local_b4 - (int)param_1[3];
      *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + iVar8;
      *(uint *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + local_b4;
      piVar6[7] = piVar6[7] + local_b4;
      if ((piVar6[2] != 0) && (local_b4 != 0)) {
        if (piVar6[4] == 0) {
          local_88 = FUN_015a5730(piVar6[6],param_1[2] - (ulonglong)local_b4,local_b4);
        }
        else {
          local_88 = FUN_015a60c0(piVar6[6],param_1[2] - (ulonglong)local_b4,local_b4);
        }
        piVar6[6] = local_88;
        *(int *)((longlong)param_1 + 0x4c) = local_88;
      }
      if (piVar6[1] == 0) {
        local_64 = 0;
      }
      else {
        local_64 = 0x40;
      }
      if (*piVar6 == 0xb) {
        local_7c = 0x80;
      }
      else {
        local_7c = 0;
      }
      if ((*piVar6 == 0x13) || (*piVar6 == 0xe)) {
        local_70 = 0x100;
      }
      else {
        local_70 = 0;
      }
      *(int *)(param_1 + 9) = piVar6[0x11] + local_64 + local_7c + local_70;
      if (((iVar8 != 0) || (local_b4 != 0)) && (param_2 != 4)) {
        return local_a0;
      }
      if (local_a0 != 0) {
        return local_a0;
      }
      return -5;
    case 0x1d:
      local_a0 = -3;
      goto LAB_0159f10b;
    case 0x1e:
      return -4;
    default:
      return -2;
    }
  } while( true );
}

