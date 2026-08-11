/* Ghidra address: 00875380 */
/* Ghidra symbol: FUN_00875380 */


int FUN_00875380(undefined8 param_1,undefined1 *param_2)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  undefined1 *local_b0;
  uint local_a4;
  undefined8 local_a0;
  uint local_94;
  undefined8 local_90;
  char local_87;
  ushort local_86;
  int local_80;
  int local_7c;
  char local_75;
  uint local_74;
  undefined8 local_70;
  ushort local_62;
  int local_5c;
  int local_58;
  char local_51;
  longlong local_50;
  undefined4 local_48;
  int local_44;
  int local_40;
  int local_3c;
  longlong local_38;
  longlong local_30;
  int local_24;
  undefined8 local_20 [2];
  
  local_b0 = auStack_d8;
  local_b8 = 0;
  local_30 = 0;
  local_38 = 0;
  local_20[0] = 0;
  *param_2 = 1;
  local_24 = 0;
  local_3c = 4;
  FUN_00414b50(&local_38,param_1);
  while( true ) {
    FUN_00414480(local_20);
    local_44 = (*(code *)PTR_FUN_01e1df90)(&DAT_008758b8,local_38);
    if (local_44 == 0) {
      FUN_00414b50(local_20,local_38);
      FUN_00414480(&local_38);
    }
    else {
      FUN_00416dc0(local_20,local_38,1,local_44 + -1);
      local_48 = 1;
      FUN_00416dc0(&local_38,local_38,local_44 + 1,0x7fffffff);
    }
    FUN_00414b50(&local_30,local_20[0]);
    FUN_00414480(local_20);
    if (local_30 == 0) break;
    if ((local_38 == 0) && (1 < local_3c)) {
      local_40 = local_3c;
      local_24 = local_24 << ((char)local_3c * '\b' & 0x1fU);
    }
    else {
      local_40 = 1;
      local_24 = local_24 << 8;
    }
    cVar1 = FUN_00879090(local_30,&PTR_DAT_008758c8);
    if (cVar1 == '\0') {
      cVar1 = FUN_008752c0(local_30);
      if (cVar1 == '\0') goto LAB_00875814;
      cVar1 = FUN_00879090(local_30,&DAT_008758dc);
      if (cVar1 == '\0') {
        local_87 = '\0';
      }
      else {
        local_75 = '\0';
        local_80 = FUN_00876ad0(local_30,0xffffffff,1);
        if (0 < local_80) {
          local_7c = 0;
          iVar2 = local_80;
          if (-1 < local_80 + -1) {
            do {
              local_86 = *(ushort *)(local_30 + -2 + (longlong)(local_7c + 1) * 2);
              if ((local_86 < 0x30) || (0x37 < local_86)) goto code_r0x0087571c;
              local_7c = local_7c + 1;
              iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
          }
          local_75 = '\x01';
        }
code_r0x0087571c:
        local_87 = local_75;
      }
      if (local_87 == '\0') {
        local_a0 = FUN_0043fd00(local_30,0);
        if (local_40 == 2) {
          local_a4 = (uint)local_a0 & 0xffff;
        }
        else if (local_40 == 3) {
          local_a4 = (uint)local_a0 & 0xffffff;
        }
        else if (local_40 == 4) {
          local_a4 = (uint)local_a0;
        }
        else {
          local_a4 = (uint)local_a0 & 0xff;
        }
        local_24 = local_24 + local_a4;
      }
      else {
        local_90 = FUN_00874da0(local_30);
        if (local_40 == 2) {
          local_94 = (uint)local_90 & 0xffff;
        }
        else if (local_40 == 3) {
          local_94 = (uint)local_90 & 0xffffff;
        }
        else if (local_40 == 4) {
          local_94 = (uint)local_90;
        }
        else {
          local_94 = (uint)local_90 & 0xff;
        }
        local_24 = local_24 + local_94;
      }
    }
    else {
      FUN_00416dc0(&local_b8,local_30,3,0x7fffffff);
      local_50 = local_b8;
      local_51 = '\0';
      iVar2 = FUN_00876ad0(local_b8,0xffffffff,1);
      local_5c = iVar2;
      if (0 < iVar2) {
        local_58 = 0;
        if (-1 < iVar2 + -1) {
          do {
            local_62 = *(ushort *)(local_50 + -2 + (longlong)(local_58 + 1) * 2);
            cVar1 = FUN_00875360(local_62);
            if (((cVar1 == '\0') && ((local_62 < 0x41 || (0x46 < local_62)))) &&
               ((local_62 < 0x61 || (0x66 < local_62)))) goto code_r0x00875609;
            local_58 = local_58 + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
        local_51 = '\x01';
      }
code_r0x00875609:
      if (local_51 == '\0') goto LAB_00875814;
      local_70 = FUN_0043fd00(local_30,0);
      if (local_40 == 2) {
        local_74 = (uint)local_70 & 0xffff;
      }
      else if (local_40 == 3) {
        local_74 = (uint)local_70 & 0xffffff;
      }
      else if (local_40 == 4) {
        local_74 = (uint)local_70;
      }
      else {
        local_74 = (uint)local_70 & 0xff;
      }
      local_24 = local_24 + local_74;
    }
    local_3c = local_3c + -1;
  }
  *param_2 = 0;
LAB_00875814:
  FUN_00414480(&local_b8);
  FUN_00414560(&local_38,2);
  FUN_00414480(local_20);
  return local_24;
}

