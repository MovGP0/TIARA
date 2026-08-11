/* Ghidra address: 01a28310 */
/* Ghidra symbol: FUN_01a28310 */


/* WARNING: Type propagation algorithm not settling */

undefined1 FUN_01a28310(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined auStack_1d8 [32];
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined *local_180;
  undefined8 local_178;
  undefined1 *local_170;
  int local_164;
  longlong local_160;
  int local_154;
  undefined1 local_150 [24];
  undefined1 local_138 [16];
  undefined8 local_128;
  int local_120;
  int local_11c;
  undefined8 local_118;
  undefined8 local_110;
  undefined1 local_108 [48];
  undefined1 local_d8 [40];
  undefined8 local_b0;
  longlong local_a8 [4];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  int local_5c;
  undefined8 local_58;
  undefined1 local_49;
  longlong *local_48;
  longlong local_40 [5];
  
  local_170 = auStack_1d8;
  local_198 = 0;
  uStack_190 = 0;
  uStack_188 = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  uStack_1a8 = 0;
  uStack_1a0 = 0;
  local_180 = (undefined *)0x0;
  local_178 = 0;
  local_58 = 0;
  local_a8[2] = 0;
  local_a8[1] = 0;
  local_a8[0] = 0;
  local_b0 = 0;
  local_110 = 0;
  local_118 = 0;
  local_40[0] = 0;
  local_40[1] = 0;
  local_40[2] = 0;
  local_128 = 0;
  local_40[4] = 0;
  local_40[3] = 0;
  FUN_00417580(local_d8,&DAT_00ea5f80);
  FUN_00417580(local_108,&DAT_00ea5ae8);
  FUN_00417580(local_138,&DAT_00ea5780);
  FUN_00417580(local_150,&DAT_00ea56e0);
  local_48 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  *param_3 = 0;
  (**(code **)(*local_48 + 0xd8))(local_48,param_1);
  local_80 = FUN_00f33100(&LAB_00f256b8,1);
  FUN_00ea7a10(local_d8,L"^(V|I)\\([^\\(\\)]+\\)$",0x80);
  local_5c = 0;
  do {
    iVar2 = (**(code **)(*local_48 + 0x28))(local_48);
    if (iVar2 <= local_5c) {
      local_78 = FUN_00f309b0(&LAB_00f23b78,1);
      FUN_00f30e70(local_78,L"Npanes",local_80);
      uVar3 = FUN_00f309b0(&LAB_00f23b78,1);
      *param_3 = uVar3;
      FUN_00f30e70(*param_3,L"Analysis",local_78);
      FUN_0147d210(param_2,*param_3);
      local_49 = 1;
      FUN_00410f20(local_48);
      FUN_00414480(&local_1b8);
      FUN_00460ba0(&local_1b0);
      FUN_00417740(&local_198,&DAT_00ea56e0);
      FUN_00414560(&local_180,2);
      FUN_00417740(local_150,&DAT_00ea56e0);
      FUN_00417740(local_138,&DAT_00ea5780);
      FUN_00414480(&local_128);
      FUN_00414560(&local_118,2);
      FUN_00417740(local_108,&DAT_00ea5ae8);
      FUN_00417740(local_d8,&DAT_00ea5f80);
      FUN_00414560(&local_b0,4);
      FUN_00414480(&local_58);
      FUN_00414560(local_40 + 3,2);
      return local_49;
    }
    (**(code **)(*local_48 + 0x18))(local_48,&local_178,local_5c);
    FUN_0043ea00(&local_58,local_178);
    iVar2 = FUN_00416db0(local_58,&DAT_01a28dc0);
    if (iVar2 == 0) {
      do {
        local_5c = local_5c + 1;
        iVar2 = (**(code **)(*local_48 + 0x28))(local_48);
        if (iVar2 <= local_5c) break;
        (**(code **)(*local_48 + 0x18))(local_48,&local_110,local_5c);
        cVar1 = FUN_004562e0(&local_110,L"traces:");
      } while (cVar1 == '\0');
      iVar2 = (**(code **)(*local_48 + 0x28))(local_48);
      if (local_5c < iVar2) {
        (**(code **)(*local_48 + 0x18))(local_48,&local_118,local_5c);
        cVar1 = FUN_004562e0(&local_118,L"traces:");
        if (cVar1 != '\0') {
          local_40[0] = 0;
          local_88 = FUN_00f33100(&LAB_00f256b8,1);
          (**(code **)(*local_48 + 0x18))(local_48,&local_180,local_5c);
          FUN_0043ea00(local_40,local_180);
          local_11c = 0;
          do {
            local_40[1] = 0;
            local_40[2] = 0;
            local_11c = FUN_004564d0(local_40,0x7b,local_11c);
            if ((local_11c == -1) ||
               (local_120 = FUN_004564d0(local_40,0x7d,local_11c), local_120 == -1)) {
              FUN_01a28c10(0,local_170);
              FUN_01a28c40(0,local_170);
              break;
            }
            FUN_00414480(local_40 + 4);
            FUN_00416dc0(local_40 + 4,local_40[0],local_11c + 2,(local_120 - local_11c) + -1);
            FUN_00414b50(local_40 + 1,local_40[4]);
            FUN_00414480(local_40 + 4);
            FUN_00456ab0(local_40 + 1,local_40 + 2,&DAT_01a28de0,0);
            local_160 = local_40[2];
            if (local_40[2] != 0) {
              local_160 = *(longlong *)(local_40[2] + -8);
            }
            if (local_160 == 3) {
              FUN_00457870(local_40[2],local_a8 + 2);
              FUN_00457870(local_40[2] + 8,local_a8 + 1);
              FUN_00457870(local_40[2] + 0x10,&local_128);
              FUN_00456a20(&local_128,local_a8,&DAT_01a28df0,0);
              FUN_00ea82d0(local_d8,local_108,local_a8[0]);
              cVar1 = FUN_00ea74f0(local_108);
              if (cVar1 == '\0') {
                FUN_00414b50(&local_b0,L"Undefined");
              }
              else {
                FUN_00ea74a0(local_108,local_138);
                FUN_00468530(&local_1b0,1,1);
                FUN_00ea6fb0(local_138,&local_198,&local_1b0);
                FUN_00417c40(local_150,&local_198,&DAT_00ea56e0);
                FUN_00ea6ce0(local_150,&local_1b8);
                FUN_00414b50(&local_b0,local_1b8);
                local_164 = 0;
                if (local_a8[0] != 0) {
                  local_164 = *(int *)(local_a8[0] + -4);
                }
                FUN_00414480(local_40 + 3);
                FUN_00416dc0(local_40 + 3,local_a8[0],3,local_164 + -3);
                FUN_00414b50(local_a8,local_40[3]);
                FUN_00414480(local_40 + 3);
              }
              local_a8[3] = FUN_00f309b0(&LAB_00f23b78,1);
              uVar3 = FUN_0043fcb0(local_a8[2]);
              uVar3 = FUN_00f2f800(&LAB_00f22f08,1,uVar3);
              FUN_00f30e70(local_a8[3],&PTR_DAT_01a28e20,uVar3);
              uVar3 = FUN_00f2e9d0(&LAB_00f22a90,1,local_b0);
              FUN_00f30e70(local_a8[3],L"type",uVar3);
              uVar3 = FUN_00f2e9d0(&LAB_00f22a90,1,local_a8[0]);
              FUN_00f30e70(local_a8[3],L"name",uVar3);
              FUN_00f335b0(local_88,local_a8[3]);
            }
            local_11c = local_120 + 1;
            FUN_00419430(local_40 + 2,&DAT_004210c0);
            FUN_00414480(local_40 + 1);
            local_154 = 0;
            if (local_40[0] != 0) {
              local_154 = *(int *)(local_40[0] + -4);
            }
          } while (local_11c < local_154);
          local_70 = FUN_00f309b0(&LAB_00f23b78,1);
          FUN_00f30e70(local_70,L"traces",local_88);
          FUN_00f335b0(local_80,local_70);
          FUN_00414480(local_40);
        }
      }
    }
    local_5c = local_5c + 1;
  } while( true );
}

