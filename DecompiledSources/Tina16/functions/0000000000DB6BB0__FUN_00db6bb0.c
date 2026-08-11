/* Ghidra address: 00db6bb0 */
/* Ghidra symbol: FUN_00db6bb0 */


void FUN_00db6bb0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 *param_5,undefined8 *param_6,undefined8 param_7)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 local_188 [4];
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8 [4];
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
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  local_50 = *param_5;
  uStack_48 = param_5[1];
  uStack_40 = param_5[2];
  uStack_38 = param_5[3];
  uStack_30 = param_5[4];
  puVar4 = local_e8;
  for (lVar3 = 0x13; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = *param_6;
    param_6 = param_6 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar4 = &DAT_01ed42c8;
  puVar5 = local_188;
  for (lVar3 = 0x14; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  local_188[0] = local_e8[0];
  local_188[1] = local_e8[1];
  local_188[2] = local_e8[2];
  local_188[3] = local_e8[3];
  local_168 = local_c8;
  local_160 = local_c0;
  local_158 = local_b8;
  local_150 = local_b0;
  local_148 = local_a8;
  local_140 = local_a0;
  local_138 = local_98;
  local_130 = local_90;
  local_128 = local_88;
  local_120 = local_80;
  local_118 = local_78;
  local_108 = local_70;
  local_100 = local_68;
  local_f8 = local_60;
  local_f0 = local_58;
  uVar2 = FUN_00db2390(param_2);
  cVar1 = FUN_01d44bc0(uVar2);
  if (cVar1 == '\0') {
    FUN_00db5c60(param_1,param_2,param_3,param_4,&local_50,local_188,param_7);
  }
  else {
    FUN_00db4b80(param_1,param_2,param_3,param_4,&local_50,local_188,param_7);
  }
  return;
}

