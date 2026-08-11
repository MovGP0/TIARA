/* Ghidra address: 0053b170 */
/* Ghidra symbol: FUN_0053b170 */


undefined1 FUN_0053b170(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  byte *pbVar5;
  float fVar6;
  undefined8 in_XMM1_Qa;
  undefined4 uVar8;
  double dVar7;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uVar8 = (undefined4)((ulonglong)in_XMM1_Qa >> 0x20);
  local_168 = 0;
  uStack_160 = 0;
  uStack_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  uStack_140 = 0;
  uStack_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  FUN_00417580(param_3,&DAT_00527bf8);
  uVar2 = *param_1;
  plVar3 = (longlong *)FUN_00589390(uVar2);
  lVar4 = FUN_00589390(uVar2);
  if (*(longlong *)(lVar4 + 8) < *plVar3) {
    lVar4 = param_1[2];
    pbVar5 = (byte *)FUN_00589390(param_2);
    bVar1 = *pbVar5;
    if (bVar1 < 3) {
      if (bVar1 == 2) {
        dVar7 = (double)lVar4;
        if (lVar4 < 0) {
          dVar7 = dVar7 + 1.8446744073709552e+19;
        }
        FUN_005606e0(&local_88,dVar7);
        FUN_00417c40(param_3,&local_88,&DAT_00527bf8);
      }
      else if (bVar1 == 0) {
        fVar6 = (float)lVar4;
        if (lVar4 < 0) {
          fVar6 = fVar6 + 1.8446744e+19;
        }
        FUN_00560660(&local_48,CONCAT44(uVar8,fVar6));
        FUN_00417c40(param_3,&local_48,&DAT_00527bf8);
      }
      else if (bVar1 == 1) {
        dVar7 = (double)lVar4;
        if (lVar4 < 0) {
          dVar7 = dVar7 + 1.8446744073709552e+19;
        }
        FUN_005606a0(&local_68,dVar7);
        FUN_00417c40(param_3,&local_68,&DAT_00527bf8);
      }
    }
    else if (bVar1 == 3) {
      FUN_00560760(&local_a8,lVar4);
      FUN_00417c40(param_3,&local_a8,&DAT_00527bf8);
    }
    else if (bVar1 == 4) {
      FUN_00560720(&local_c8,lVar4 * 10000);
      FUN_00417c40(param_3,&local_c8,&DAT_00527bf8);
    }
  }
  else {
    lVar4 = param_1[2];
    pbVar5 = (byte *)FUN_00589390(param_2);
    bVar1 = *pbVar5;
    if (bVar1 < 3) {
      if (bVar1 == 2) {
        FUN_005606e0(&local_128,(double)lVar4);
        FUN_00417c40(param_3,&local_128,&DAT_00527bf8);
      }
      else if (bVar1 == 0) {
        FUN_00560660(&local_e8,CONCAT44(uVar8,(float)lVar4));
        FUN_00417c40(param_3,&local_e8,&DAT_00527bf8);
      }
      else if (bVar1 == 1) {
        FUN_005606a0(&local_108,(double)lVar4);
        FUN_00417c40(param_3,&local_108,&DAT_00527bf8);
      }
    }
    else if (bVar1 == 3) {
      FUN_00560760(&local_148,lVar4);
      FUN_00417c40(param_3,&local_148,&DAT_00527bf8);
    }
    else if (bVar1 == 4) {
      FUN_00560720(&local_168,lVar4 * 10000);
      FUN_00417c40(param_3,&local_168,&DAT_00527bf8);
    }
  }
  FUN_00417840(&local_168,&DAT_00527bf8,10);
  return 1;
}

