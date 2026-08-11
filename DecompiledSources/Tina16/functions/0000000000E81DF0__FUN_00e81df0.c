/* Ghidra address: 00e81df0 */
/* Ghidra symbol: FUN_00e81df0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_00e81df0(int *param_1,uint param_2,undefined8 *param_3)

{
  longlong lVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  bool bVar7;
  undefined1 auVar8 [16];
  undefined4 local_124;
  longlong local_120;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong lStack_d8;
  
  local_124 = 0;
  *param_3 = 0;
  if ((param_1 == (int *)0x0) || (*param_1 != 0x50435245)) {
    pcVar3 = s_argument_is_not_a_compiled_regul_01edf970;
    goto LAB_00e81e38;
  }
  if ((param_1[3] & 2U) == 0) {
    pcVar3 = s_argument_not_compiled_in_16_bit_m_01edf99e;
    goto LAB_00e81e38;
  }
  if (0xf < param_2) {
    pcVar3 = s_unknown_or_incorrect_option_bit__01edf9c3;
    goto LAB_00e81e38;
  }
  lVar1 = (longlong)param_1 +
          (ulonglong)*(ushort *)(param_1 + 9) * (ulonglong)*(ushort *)((longlong)param_1 + 0x26) * 2
          + (ulonglong)*(ushort *)((longlong)param_1 + 0x22) * 2;
  uVar6 = param_1[2];
  bVar7 = false;
  if ((param_1[3] & 0x110U) == 0 && (uVar6 & 0x10) == 0) {
    local_120 = *(longlong *)(param_1 + 0xc);
    if (local_120 == 0) {
      FUN_00ea0200(param_1,0,0xb,&local_120);
      uVar6 = param_1[2];
    }
    local_e8 = local_120 + 0x100;
    auVar8._8_4_ = (int)local_120;
    auVar8._0_8_ = local_120;
    auVar8._12_4_ = (int)((ulonglong)local_120 >> 0x20);
    local_e0 = local_120 + _DAT_01edf960;
    lStack_d8 = auVar8._8_8_ + lRam0000000001edf968;
    local_108 = (undefined1  [16])0x0;
    local_118 = (undefined1  [16])0x0;
    local_f0 = local_120;
    iVar2 = FUN_00e82000(lVar1,local_118,uVar6 >> 0xb & 1,&local_f0);
    if (iVar2 != 3) {
      bVar7 = iVar2 == 1;
      uVar6 = param_1[2];
      goto LAB_00e81f24;
    }
  }
  else {
LAB_00e81f24:
    iVar2 = FUN_00e82960(param_1,lVar1,lVar1,uVar6,0,&local_124);
    if (iVar2 != -3) {
      if (iVar2 == -2) {
        pcVar3 = s_internal_error__missing_capturin_01edfa10;
      }
      else {
        if ((((param_2 & 8) == 0) && (!bVar7)) && (iVar2 < 1)) {
          return (undefined4 *)0x0;
        }
        puVar4 = (undefined4 *)(*(code *)PTR_FUN_01edf908)(0x6c);
        if (puVar4 != (undefined4 *)0x0) {
          *puVar4 = 1;
          *(undefined4 **)(puVar4 + 2) = puVar4 + 0x10;
          *(undefined8 *)(puVar4 + 0x10) = 0x2c;
          if (bVar7) {
            puVar4[0x11] = 1;
            *(undefined8 *)(puVar4 + 0x16) = local_108._0_8_;
            *(undefined8 *)(puVar4 + 0x18) = local_108._8_8_;
            *(undefined8 *)(puVar4 + 0x12) = local_118._0_8_;
            *(undefined8 *)(puVar4 + 0x14) = local_118._8_8_;
            uVar5 = 3;
          }
          else {
            *(undefined1 (*) [16])(puVar4 + 0x16) = (undefined1  [16])0x0;
            *(undefined1 (*) [16])(puVar4 + 0x12) = (undefined1  [16])0x0;
            uVar5 = 2;
          }
          if (iVar2 < 1) {
            iVar2 = 0;
          }
          else {
            puVar4[0x11] = uVar5;
          }
          puVar4[0x1a] = iVar2;
          return puVar4;
        }
        pcVar3 = s_failed_to_get_memory_01edfa3a;
      }
      goto LAB_00e81e38;
    }
  }
  pcVar3 = s_internal_error__opcode_not_recog_01edf9ea;
LAB_00e81e38:
  *param_3 = pcVar3;
  return (undefined4 *)0x0;
}

