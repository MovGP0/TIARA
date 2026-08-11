/* Ghidra address: 01bcba40 */
/* Ghidra symbol: FUN_01bcba40 */


void FUN_01bcba40(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  longlong *local_1a0;
  longlong *local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  longlong *local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  longlong *local_30;
  longlong local_28;
  longlong local_20 [2];
  
  local_1b8 = 0;
  uStack_1b0 = 0;
  uStack_1a8 = 0;
  local_1d0 = 0;
  uStack_1c8 = 0;
  uStack_1c0 = 0;
  local_1d8 = 0;
  local_1f0 = 0;
  uStack_1e8 = 0;
  uStack_1e0 = 0;
  local_190 = 0;
  uStack_188 = 0;
  uStack_180 = 0;
  local_198 = (longlong *)0x0;
  local_1a0 = (longlong *)0x0;
  local_128 = 0;
  uStack_120 = 0;
  uStack_118 = 0;
  local_178 = 0;
  uStack_170 = 0;
  uStack_168 = 0;
  local_140 = 0;
  uStack_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  local_160 = 0;
  uStack_158 = 0;
  uStack_150 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  local_110 = 0;
  uStack_108 = 0;
  uStack_100 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  local_b8 = (longlong *)0x0;
  local_c0 = (longlong *)0x0;
  local_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  local_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  local_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_30 = (longlong *)0x0;
  cVar1 = FUN_00781870();
  if (cVar1 != '\0') {
    cVar1 = FUN_01bcaba0(param_1);
    if ((cVar1 != '\0') && ((*(byte *)(param_1 + 0x2c8) & 4) != 0)) {
      FUN_00ddede0(param_1,local_20,0xcb);
      if (local_20[0] != 0) {
        FUN_00ddede0(param_1,&local_30,0xcb);
        uVar3 = FUN_0041b800(&local_28);
        uVar2 = (**(code **)(*local_30 + 0x48))(local_30,uVar3);
        FUN_0041d630(uVar2);
        if (local_28 != 0) {
          FUN_00ddede0(param_1,&local_68,0xcb);
          FUN_00468a90(&local_80,local_68);
          FUN_00460d30(&local_60,&local_80,&DAT_01bcc210);
          FUN_00460d30(&local_48,&local_60,&DAT_01bcc223);
          FUN_00468530(&local_98,0,1);
          cVar1 = FUN_0046f320(&local_48,&local_98);
          if (cVar1 == '\0') {
            FUN_00ddede0(param_1,&local_f8,0xcb);
            FUN_00468a90(&local_110,local_f8);
            FUN_00460d30(&local_f0,&local_110,&DAT_01bcc210);
            FUN_00460d30(&local_d8,&local_f0,&DAT_01bcc223);
            uVar2 = FUN_00462650(&local_d8);
            FUN_0068e980(*(undefined8 *)(param_1 + 0x580),uVar2);
          }
          else {
            FUN_00ddede0(param_1,&local_c0,0xcb);
            uVar3 = FUN_0041b800(&local_b8);
            uVar2 = (**(code **)(*local_c0 + 0x48))(local_c0,uVar3);
            FUN_0041d630(uVar2);
            uVar3 = FUN_00460ba0(&local_b0);
            uVar2 = (**(code **)(*local_b8 + 0x40))(local_b8,L"ScrollTop",0,uVar3);
            FUN_0041d630(uVar2);
            uVar2 = FUN_00462650(&local_b0);
            FUN_0068e980(*(undefined8 *)(param_1 + 0x580),uVar2);
          }
          FUN_00ddede0(param_1,&local_148,0xcb);
          FUN_00468a90(&local_160,local_148);
          FUN_00460d30(&local_140,&local_160,&DAT_01bcc210);
          FUN_00460d30(&local_128,&local_140,&DAT_01bcc248);
          FUN_00468530(&local_178,0,1);
          cVar1 = FUN_0046f320(&local_128,&local_178);
          if (cVar1 == '\0') {
            FUN_00ddede0(param_1,&local_1d8,0xcb);
            FUN_00468a90(&local_1f0,local_1d8);
            FUN_00460d30(&local_1d0,&local_1f0,&DAT_01bcc210);
            FUN_00460d30(&local_1b8,&local_1d0,&DAT_01bcc248);
            uVar2 = FUN_00462650(&local_1b8);
            FUN_0068e980(*(undefined8 *)(param_1 + 0x588),uVar2);
          }
          else {
            FUN_00ddede0(param_1,&local_1a0,0xcb);
            uVar3 = FUN_0041b800(&local_198);
            uVar2 = (**(code **)(*local_1a0 + 0x48))(local_1a0,uVar3);
            FUN_0041d630(uVar2);
            uVar3 = FUN_00460ba0(&local_190);
            uVar2 = (**(code **)(*local_198 + 0x40))(local_198,L"ScrollLeft",0,uVar3);
            FUN_0041d630(uVar2);
            uVar2 = FUN_00462650(&local_190);
            FUN_0068e980(*(undefined8 *)(param_1 + 0x588),uVar2);
          }
        }
      }
      FUN_01bcb060(param_1);
    }
  }
  FUN_00460ba0(&local_1f0);
  FUN_0041b800(&local_1d8);
  FUN_00417840(&local_1d0,&DAT_004013d8,2);
  FUN_0041b800(&local_1a0);
  FUN_0041b800(&local_198);
  FUN_00460ba0(&local_190);
  FUN_00460ba0(&local_178);
  FUN_00460ba0(&local_160);
  FUN_0041b800(&local_148);
  FUN_00417840(&local_140,&DAT_004013d8,2);
  FUN_00460ba0(&local_110);
  FUN_0041b800(&local_f8);
  FUN_00417840(&local_f0,&DAT_004013d8,2);
  FUN_0041b800(&local_c0);
  FUN_0041b800(&local_b8);
  FUN_00460ba0(&local_b0);
  FUN_00460ba0(&local_98);
  FUN_00460ba0(&local_80);
  FUN_0041b800(&local_68);
  FUN_00417840(&local_60,&DAT_004013d8,2);
  FUN_0041b800(&local_30);
  FUN_0041b800(&local_28);
  FUN_0041b800(local_20);
  return;
}

