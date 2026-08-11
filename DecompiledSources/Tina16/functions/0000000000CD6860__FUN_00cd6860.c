/* Ghidra address: 00cd6860 */
/* Ghidra symbol: FUN_00cd6860 */


undefined8 * FUN_00cd6860(longlong param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined1 *puVar7;
  int local_5c;
  uint local_44;
  undefined8 local_40 [2];
  
  local_40[0] = 0;
  FUN_004144d0(param_2);
  if (param_3 != 0) {
    local_5c = param_4;
    if (param_4 < 0) {
      local_5c = FUN_00414ce0(param_3);
    }
    if (local_5c != 0) {
      FUN_00415d10(param_2,local_5c,0);
      uVar3 = FUN_00415ab0(*param_2);
      FUN_00409a70(param_3,uVar3,(longlong)local_5c);
      lVar4 = (**(code **)(param_1 + 0x28))(param_1);
      for (; local_5c % 4 != 0; local_5c = local_5c + 1) {
        FUN_004153d0(local_40,*(undefined1 *)(lVar4 + 0x40),0);
        FUN_004155b0(param_2,local_40[0]);
      }
      puVar5 = (undefined1 *)FUN_00415ab0(*param_2);
      puVar1 = puVar5 + local_5c;
      puVar7 = puVar5;
      for (local_5c = (local_5c * 3) / 4; 0 < local_5c; local_5c = local_5c + -3) {
        local_44 = 0;
        iVar6 = 4;
        for (; (0 < iVar6 && (puVar5 <= puVar1)); puVar5 = puVar5 + 1) {
          uVar2 = FUN_00cd63a0(*puVar5,lVar4,0x41);
          if (-1 < (int)uVar2) {
            local_44 = local_44 << 6;
            if ((int)uVar2 < 0x40) {
              local_44 = local_44 | uVar2 & 0xff;
            }
            else {
              local_5c = local_5c + -1;
            }
            iVar6 = iVar6 + -1;
          }
        }
        iVar6 = 2;
        do {
          puVar7[iVar6] = (char)local_44;
          local_44 = local_44 >> 8;
          iVar6 = iVar6 + -1;
        } while (-1 < iVar6);
        if (local_5c < 4) {
          puVar7 = puVar7 + local_5c;
        }
        else {
          puVar7 = puVar7 + 3;
        }
      }
      lVar4 = FUN_00415ab0(*param_2);
      FUN_00415d10(param_2,(longlong)puVar7 - lVar4,0);
    }
  }
  FUN_004144d0(local_40);
  return param_2;
}

