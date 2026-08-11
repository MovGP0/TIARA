/* Ghidra address: 01822f30 */
/* Ghidra symbol: FUN_01822f30 */


void FUN_01822f30(undefined8 *param_1,longlong *param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  int local_68 [2];
  ulonglong local_60 [4];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  local_130 = 0;
  uStack_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  uStack_108 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  local_60[0] = 0;
  local_60[1] = 0;
  local_60[2] = 0;
  local_40 = *param_1;
  uStack_38 = param_1[1];
  uStack_30 = param_1[2];
  FUN_0046bd60(&local_40);
  iVar1 = FUN_0046c9e0(&local_40,1);
  FUN_00419260(param_2,&DAT_01822708,1,(longlong)(iVar1 + 1));
  uVar5 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *param_3 = uVar5;
  iVar1 = FUN_0046c9e0(&local_40,1);
  iVar2 = 0;
  if (-1 < iVar1) {
    iVar1 = iVar1 + 1;
    do {
      local_68[0] = iVar2;
      FUN_0046cb70(local_60,&local_40,1,local_68);
      uVar6 = local_60[0] & 0xffff;
      if (uVar6 < 0xd) {
        if (uVar6 == 0xc) {
          lVar8 = (longlong)iVar2;
          *(undefined1 *)(*param_2 + 8 + lVar8 * 0x10) = 0xd;
          uVar5 = FUN_00418560(0x18,&DAT_004013d8);
          *(undefined8 *)(*param_2 + lVar8 * 0x10) = uVar5;
          local_68[0] = iVar2;
          FUN_0046cb70(&local_130,&local_40,1,local_68);
          FUN_00461840(*(undefined8 *)(*param_2 + lVar8 * 0x10),&local_130);
        }
        else {
          if (uVar6 - 2 < 2) goto LAB_01823102;
          if (uVar6 - 4 < 4) {
            lVar8 = (longlong)iVar2;
            *(undefined1 *)(*param_2 + 8 + lVar8 * 0x10) = 3;
            uVar5 = FUN_004095c0(8);
            *(undefined8 *)(*param_2 + lVar8 * 0x10) = uVar5;
            local_68[0] = iVar2;
            FUN_0046cb70(&local_b0,&local_40,1,local_68);
            uVar5 = FUN_00464c60(&local_b0);
            **(undefined8 **)(*param_2 + lVar8 * 0x10) = uVar5;
          }
          else if (uVar6 == 8) {
            *(undefined1 *)(*param_2 + 8 + (longlong)iVar2 * 0x10) = 0xf;
            puVar7 = (undefined8 *)FUN_00418560(8,&DAT_004013a8);
            FUN_004ae7e0(*param_3,puVar7);
            local_68[0] = iVar2;
            FUN_0046cb70(&local_100,&local_40,1,local_68);
            FUN_00467310(puVar7,&local_100);
            *(undefined8 *)(*param_2 + (longlong)iVar2 * 0x10) = *puVar7;
          }
          else if (uVar6 == 0xb) {
            *(undefined1 *)(*param_2 + 8 + (longlong)iVar2 * 0x10) = 1;
            local_68[0] = iVar2;
            FUN_0046cb70(&local_c8,&local_40,1,local_68);
            iVar4 = FUN_004644a0(&local_c8);
            *(bool *)(*param_2 + (longlong)iVar2 * 0x10) = iVar4 != 0;
          }
        }
      }
      else if (uVar6 - 0x10 < 4) {
LAB_01823102:
        *(undefined1 *)(*param_2 + 8 + (longlong)iVar2 * 0x10) = 0;
        local_68[0] = iVar2;
        FUN_0046cb70(&local_80,&local_40,1,local_68);
        uVar3 = FUN_00462650(&local_80);
        *(undefined4 *)(*param_2 + (longlong)iVar2 * 0x10) = uVar3;
      }
      else if (uVar6 == 0x14) {
        lVar8 = (longlong)iVar2;
        *(undefined1 *)(*param_2 + 8 + lVar8 * 0x10) = 0x10;
        uVar5 = FUN_004095c0(8);
        *(undefined8 *)(*param_2 + lVar8 * 0x10) = uVar5;
        local_68[0] = iVar2;
        FUN_0046cb70(&local_98,&local_40,1,local_68);
        uVar5 = FUN_004634b0(&local_98);
        **(undefined8 **)(*param_2 + lVar8 * 0x10) = uVar5;
      }
      else if (uVar6 == 0x100) {
        lVar8 = (longlong)iVar2;
        *(undefined1 *)(*param_2 + 8 + lVar8 * 0x10) = 4;
        uVar5 = FUN_004095c0(0x100);
        *(undefined8 *)(*param_2 + lVar8 * 0x10) = uVar5;
        local_68[0] = iVar2;
        FUN_0046cb70(&local_e0,&local_40,1,local_68);
        FUN_00466730(&local_e8,&local_e0,0);
        FUN_00415560(*(undefined8 *)(*param_2 + lVar8 * 0x10),local_e8,0xff);
      }
      else if (uVar6 == 0x102) {
        lVar8 = (longlong)iVar2;
        *(undefined1 *)(*param_2 + 8 + lVar8 * 0x10) = 0x11;
        uVar5 = FUN_004095c0(0);
        *(undefined8 *)(*param_2 + lVar8 * 0x10) = uVar5;
        local_68[0] = iVar2;
        FUN_0046cb70(&local_118,&local_40,1,local_68);
        FUN_00467e90(*(undefined8 *)(*param_2 + lVar8 * 0x10),&local_118);
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00417840(&local_130,&DAT_004013d8,3);
  FUN_004144d0(&local_e8);
  FUN_00417840(&local_e0,&DAT_004013d8,5);
  FUN_00460ba0(local_60);
  FUN_00460ba0(&local_40);
  return;
}

