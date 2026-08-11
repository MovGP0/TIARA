/* Ghidra address: 0112f390 */
/* Ghidra symbol: FUN_0112f390 */


undefined1 FUN_0112f390(undefined8 param_1,byte *param_2,longlong param_3)

{
  ushort uVar1;
  char cVar2;
  ushort *puVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  ulonglong uVar9;
  undefined1 auStack_78 [32];
  byte *local_58;
  undefined8 local_50;
  undefined1 local_41;
  undefined8 local_40 [2];
  uint local_2c;
  uint uVar8;
  
  local_40[0] = 0;
  local_58 = param_2;
  local_50 = param_1;
  FUN_0040d200(param_2,0x22,0);
  puVar3 = (ushort *)FUN_00416740(local_50);
  while( true ) {
    cVar2 = FUN_0112f360(auStack_78,*puVar3);
    if (cVar2 == '\0') break;
    puVar3 = puVar3 + 1;
  }
  uVar1 = *puVar3;
  if ((*puVar3 == 0x2d) || (*puVar3 == 0x2b)) {
    puVar3 = puVar3 + 1;
  }
  for (; *puVar3 == 0x30; puVar3 = puVar3 + 1) {
  }
  uVar9 = 0;
  uVar4 = 0xffffffff;
  while( true ) {
    uVar8 = (uint)uVar9;
    if (*puVar3 == 0) break;
    if (*puVar3 == *(ushort *)(param_3 + 0x17a)) {
      if (uVar4 != 0xffffffff) {
        local_41 = 0;
        goto LAB_0112f683;
      }
      if ((char)uVar9 == '\0') {
        uVar9 = 1;
      }
      uVar8 = (uint)uVar9;
      uVar4 = (uint)(byte)uVar9;
      puVar3 = puVar3 + 1;
      if (*puVar3 == 0) break;
    }
    uVar8 = (uint)uVar9;
    cVar2 = FUN_0112f360(auStack_78);
    if (((cVar2 != '\0') || (*puVar3 == 0x45)) || (*puVar3 == 0x65)) break;
    if ((*puVar3 < 0x30) || (0x39 < *puVar3)) {
      local_41 = 0;
      goto LAB_0112f683;
    }
    bVar6 = (byte)uVar9;
    if ((bVar6 == 0x40) && (uVar4 == 0xffffffff)) {
      local_41 = 0;
      goto LAB_0112f683;
    }
    if (bVar6 < 0x40) {
      if ((uVar9 & 1) == 0) {
        local_58[uVar9 / 2 + 2] = (char)*puVar3 * '\x10';
      }
      else {
        local_58[uVar9 / 2 + 2] = ((local_58[uVar9 / 2 + 2] & 0xf0) + (char)*puVar3) - 0x30;
      }
      uVar9 = (ulonglong)(byte)(bVar6 + 1);
    }
    puVar3 = puVar3 + 1;
  }
  if ((*puVar3 == 0x45) || (*puVar3 == 0x65)) {
    FUN_004167d0(local_40,puVar3 + 1);
    cVar2 = FUN_0043fc80(local_40[0],&local_2c);
    if (cVar2 == '\0') {
      local_41 = 0;
      goto LAB_0112f683;
    }
    uVar7 = uVar8;
    if ((int)uVar4 < 0) {
      uVar7 = (uint)(byte)((char)uVar8 + 1);
      uVar4 = uVar8;
    }
    bVar6 = (byte)uVar7;
    uVar8 = uVar7;
    if ((int)local_2c < 0) {
      if ((int)uVar4 < (int)-local_2c) {
        *local_58 = bVar6;
        local_58[1] = bVar6 - 1;
        local_2c = uVar7 - local_2c;
        cVar2 = bVar6 - (char)uVar4;
        if (0x40 < (int)local_2c) {
          cVar2 = (cVar2 - (char)local_2c) + '@';
          uVar4 = local_2c - 0x40;
          local_2c = 0x40;
        }
        cVar2 = FUN_0112ebb0(local_58,local_58,local_2c,cVar2);
        if (cVar2 == '\0') {
          local_41 = 0;
          goto LAB_0112f683;
        }
        uVar8 = local_2c & 0xff;
      }
      else {
        uVar4 = uVar4 + local_2c;
      }
    }
    else {
      uVar5 = uVar4 + local_2c;
      uVar4 = uVar5;
      if ((int)uVar7 < (int)uVar5) {
        uVar4 = 0xffffffff;
        uVar8 = uVar5;
      }
    }
  }
  else {
    while( true ) {
      cVar2 = FUN_0112f360(auStack_78,*puVar3);
      if (cVar2 == '\0') break;
      puVar3 = puVar3 + 1;
    }
    if (*puVar3 != 0) {
      local_41 = 0;
      goto LAB_0112f683;
    }
  }
  bVar6 = (byte)uVar8;
  if (bVar6 == 0) {
    *local_58 = 10;
    local_58[1] = 2;
  }
  else {
    if (0x40 < bVar6) {
      local_41 = 0;
      goto LAB_0112f683;
    }
    *local_58 = bVar6;
    if (uVar4 == 0xffffffff) {
      local_58[1] = 0;
    }
    else {
      local_58[1] = bVar6 - (char)uVar4;
    }
    if ((bVar6 & 1) == 1) {
      *local_58 = *local_58 + 1;
      local_58[1] = local_58[1] + 1;
    }
    if (uVar1 == 0x2d) {
      local_58[1] = local_58[1] | 0x80;
    }
  }
  local_41 = 1;
LAB_0112f683:
  FUN_00414480(local_40);
  return local_41;
}

