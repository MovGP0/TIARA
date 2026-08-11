/* Ghidra address: 00589ca0 */
/* Ghidra symbol: FUN_00589ca0 */


ushort * FUN_00589ca0(longlong param_1,undefined8 param_2)

{
  ushort *puVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  bool bVar6;
  ushort *local_a8;
  longlong local_a0;
  byte *local_98;
  byte *local_90;
  longlong local_88;
  ushort *local_80;
  ushort *local_78;
  byte *local_70;
  byte *local_68;
  byte *local_60;
  byte *local_58;
  longlong local_50;
  ushort *local_48;
  ushort *local_40;
  longlong local_38;
  longlong local_30 [2];
  
  local_a0 = 0;
  local_30[0] = 0;
  local_38 = 0;
  if (param_1 == 0) {
    local_a8 = (ushort *)0x0;
  }
  else {
    FUN_00414b50(local_30,param_2);
    FUN_0041d830(&local_a0,param_2);
    uVar3 = 0;
    if (local_a0 != 0) {
      uVar3 = *(uint *)(local_a0 + -4);
    }
    local_60 = (byte *)(param_1 + 1);
    lVar4 = param_1 + 2 + (ulonglong)*local_60;
    local_58 = local_60;
    local_50 = param_1;
    while (lVar4 != 0) {
      local_70 = (byte *)(lVar4 + 0x12);
      puVar1 = (ushort *)(lVar4 + 0x13 + (ulonglong)*local_70);
      local_a8 = puVar1 + 1;
      local_68 = local_70;
      for (uVar5 = (uint)*puVar1; uVar5 != 0; uVar5 = uVar5 - 1) {
        local_78 = local_a8 + 0x15;
        local_40 = local_78;
        if ((byte)*local_78 == uVar3) {
          local_80 = local_a8 + 0x15;
          local_48 = local_80;
          FUN_00587e00(&local_48,&local_38);
          if (local_30[0] == local_38) {
            bVar6 = true;
          }
          else if ((local_30[0] == 0) || (local_38 == 0)) {
            bVar6 = false;
          }
          else {
            iVar2 = FUN_0043e420(local_30[0],local_38);
            bVar6 = iVar2 == 0;
          }
          if (bVar6) goto LAB_00589e91;
        }
        local_a8 = (ushort *)((longlong)local_a8 + (ulonglong)(byte)local_a8[0x15] + 0x2b);
      }
      if (*(longlong **)(lVar4 + 8) == (longlong *)0x0) {
        lVar4 = 0;
      }
      else {
        local_88 = **(longlong **)(lVar4 + 8);
        local_98 = (byte *)(local_88 + 1);
        lVar4 = local_88 + 2 + (ulonglong)*local_98;
        local_90 = local_98;
      }
    }
    local_a8 = (ushort *)0x0;
  }
LAB_00589e91:
  FUN_004144d0(&local_a0);
  FUN_00414560(&local_38,2);
  return local_a8;
}

