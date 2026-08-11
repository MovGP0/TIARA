/* Ghidra address: 015a5730 */
/* Ghidra symbol: FUN_015a5730 */


uint FUN_015a5730(uint param_1,byte *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint local_res8;
  byte *local_res10;
  uint local_res18;
  uint local_18;
  int local_14;
  
  local_18 = param_1 >> 0x10;
  local_res8 = param_1 & 0xffff;
  if (param_3 == 1) {
    local_res8 = local_res8 + *param_2;
    if (0xfff0 < local_res8) {
      local_res8 = local_res8 - 0xfff1;
    }
    local_18 = local_18 + local_res8;
    if (0xfff0 < local_18) {
      local_18 = local_18 - 0xfff1;
    }
    local_res8 = local_res8 | local_18 << 0x10;
  }
  else if (param_2 == (byte *)0x0) {
    local_res8 = 1;
  }
  else {
    local_res10 = param_2;
    local_res18 = param_3;
    if (param_3 < 0x10) {
      while( true ) {
        if (local_res18 == 0) break;
        local_res8 = local_res8 + *local_res10;
        local_res10 = local_res10 + 1;
        local_18 = local_18 + local_res8;
        local_res18 = local_res18 - 1;
      }
      if (0xfff0 < local_res8) {
        local_res8 = local_res8 - 0xfff1;
      }
      local_res8 = local_res8 | local_18 % 0xfff1 << 0x10;
    }
    else {
      while (0x15af < local_res18) {
        local_res18 = local_res18 - 0x15b0;
        local_14 = 0x15b;
        do {
          iVar1 = local_res8 + *local_res10;
          iVar2 = iVar1 + (uint)local_res10[1];
          iVar3 = iVar2 + (uint)local_res10[2];
          iVar4 = iVar3 + (uint)local_res10[3];
          iVar5 = iVar4 + (uint)local_res10[4];
          iVar6 = iVar5 + (uint)local_res10[5];
          iVar7 = iVar6 + (uint)local_res10[6];
          iVar8 = iVar7 + (uint)local_res10[7];
          iVar9 = iVar8 + (uint)local_res10[8];
          iVar10 = iVar9 + (uint)local_res10[9];
          iVar11 = iVar10 + (uint)local_res10[10];
          iVar12 = iVar11 + (uint)local_res10[0xb];
          iVar13 = iVar12 + (uint)local_res10[0xc];
          iVar14 = iVar13 + (uint)local_res10[0xd];
          iVar15 = iVar14 + (uint)local_res10[0xe];
          local_res8 = iVar15 + (uint)local_res10[0xf];
          local_18 = local_18 + iVar1 + iVar2 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 +
                     iVar9 + iVar10 + iVar11 + iVar12 + iVar13 + iVar14 + iVar15 + local_res8;
          local_res10 = local_res10 + 0x10;
          local_14 = local_14 + -1;
        } while (local_14 != 0);
        local_res8 = local_res8 % 0xfff1;
        local_18 = local_18 % 0xfff1;
      }
      if (local_res18 != 0) {
        for (; 0xf < local_res18; local_res18 = local_res18 - 0x10) {
          iVar1 = local_res8 + *local_res10;
          iVar2 = iVar1 + (uint)local_res10[1];
          iVar3 = iVar2 + (uint)local_res10[2];
          iVar4 = iVar3 + (uint)local_res10[3];
          iVar5 = iVar4 + (uint)local_res10[4];
          iVar6 = iVar5 + (uint)local_res10[5];
          iVar7 = iVar6 + (uint)local_res10[6];
          iVar8 = iVar7 + (uint)local_res10[7];
          iVar9 = iVar8 + (uint)local_res10[8];
          iVar10 = iVar9 + (uint)local_res10[9];
          iVar11 = iVar10 + (uint)local_res10[10];
          iVar12 = iVar11 + (uint)local_res10[0xb];
          iVar13 = iVar12 + (uint)local_res10[0xc];
          iVar14 = iVar13 + (uint)local_res10[0xd];
          iVar15 = iVar14 + (uint)local_res10[0xe];
          local_res8 = iVar15 + (uint)local_res10[0xf];
          local_18 = local_18 + iVar1 + iVar2 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 +
                     iVar9 + iVar10 + iVar11 + iVar12 + iVar13 + iVar14 + iVar15 + local_res8;
          local_res10 = local_res10 + 0x10;
        }
        while( true ) {
          if (local_res18 == 0) break;
          local_res8 = local_res8 + *local_res10;
          local_res10 = local_res10 + 1;
          local_18 = local_18 + local_res8;
          local_res18 = local_res18 - 1;
        }
        local_res8 = local_res8 % 0xfff1;
        local_18 = local_18 % 0xfff1;
      }
      local_res8 = local_res8 | local_18 << 0x10;
    }
  }
  return local_res8;
}

