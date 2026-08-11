/* Ghidra address: 019c33c0 */
/* Ghidra symbol: FUN_019c33c0 */


undefined1 FUN_019c33c0(longlong param_1,undefined4 param_2,undefined4 param_3,longlong param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  longlong in_stack_00000048;
  longlong in_stack_00000050;
  byte in_stack_00000058;
  int local_188;
  undefined1 local_17d;
  undefined8 local_178;
  undefined1 local_170;
  undefined4 local_168;
  undefined1 local_160;
  undefined4 local_158;
  undefined1 local_150;
  undefined4 local_148;
  undefined1 local_140;
  undefined4 local_138;
  undefined1 local_130;
  undefined4 local_128;
  undefined1 local_120;
  undefined4 local_118;
  undefined1 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined1 local_f8;
  undefined4 local_f0;
  undefined1 local_e8;
  undefined4 local_e0;
  undefined1 local_d8;
  undefined4 local_d0;
  undefined1 local_c8;
  undefined4 local_c0;
  undefined1 local_b8;
  undefined4 local_b0;
  undefined1 local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined4 local_80;
  undefined1 local_78;
  undefined8 local_70 [2];
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  
  local_108 = 0;
  local_70[0] = 0;
  local_60 = 0;
  iVar7 = 0;
  if (param_4 != 0) {
    iVar7 = (int)*(undefined8 *)(param_4 + -8);
  }
  local_188 = 0;
  if (iVar7 - 1U < 0x80000000) {
    do {
      lVar8 = (longlong)local_188;
      puVar1 = (undefined8 *)(param_4 + lVar8 * 0x10);
      local_48 = *puVar1;
      uStack_40 = puVar1[1];
      FUN_019c3360(&local_58,param_4 + lVar8 * 0x10);
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x50) + lVar8 * 8);
      (**(code **)(*plVar2 + 0x288))(plVar2,&local_60);
      uVar6 = FUN_00498310(param_2,param_3);
      iVar5 = thunk_FUN_03f16006(&local_58,uVar6);
      if (iVar5 != 0) {
        if ((*(longlong *)(*(longlong *)(param_1 + 0x50) + (longlong)local_188 * 8) == 0) ||
           ((lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x50) + (longlong)local_188 * 8),
            lVar8 != in_stack_00000048 && (lVar8 != in_stack_00000050)))) {
          if ((in_stack_00000058 & *(byte *)(param_1 + 0x30)) != 0) {
            local_178 = local_60;
            local_170 = 0x11;
            local_160 = 0;
            local_150 = 0;
            local_148 = local_58;
            local_140 = 0;
            local_138 = local_54;
            local_130 = 0;
            local_128 = local_50;
            local_120 = 0;
            local_118 = local_4c;
            local_110 = 0;
            local_168 = param_2;
            local_158 = param_3;
            FUN_00442f70(&local_108,&DAT_019c3888,&local_178,6);
            (**(code **)(**(longlong **)(param_1 + 0x70) + 0x78))
                      (*(longlong **)(param_1 + 0x70),local_108);
          }
          local_17d = 1;
          goto LAB_019c370e;
        }
        cVar3 = FUN_019c16b0(*(undefined8 *)
                              (*(longlong *)(param_1 + 0x50) + (longlong)local_188 * 8),param_2,
                             param_3);
        cVar4 = FUN_019c01a0(*(undefined8 *)
                              (*(longlong *)(param_1 + 0x50) + (longlong)local_188 * 8),param_2,
                             param_3,1);
        if ((cVar3 == '\0') && (cVar4 == '\0')) {
          if ((in_stack_00000058 & *(byte *)(param_1 + 0x30)) != 0) {
            local_100 = local_60;
            local_f8 = 0x11;
            local_e8 = 0;
            local_d8 = 0;
            local_d0 = 0;
            local_c8 = 0;
            local_c0 = 0;
            local_b8 = 0;
            local_b0 = local_58;
            local_a8 = 0;
            local_a0 = local_54;
            local_98 = 0;
            local_90 = local_50;
            local_88 = 0;
            local_80 = local_4c;
            local_78 = 0;
            local_f0 = param_2;
            local_e0 = param_3;
            FUN_00442f70(local_70,&DAT_019c3794,&local_100,8);
            (**(code **)(**(longlong **)(param_1 + 0x70) + 0x78))
                      (*(longlong **)(param_1 + 0x70),local_70[0]);
          }
          local_17d = 1;
          goto LAB_019c370e;
        }
      }
      local_188 = local_188 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  local_17d = 0;
LAB_019c370e:
  FUN_00414480(&local_108);
  FUN_00414480(local_70);
  FUN_00414480(&local_60);
  return local_17d;
}

