/* Ghidra address: 00b72880 */
/* Ghidra symbol: FUN_00b72880 */


void FUN_00b72880(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  uint *puVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  
  uVar2 = (param_3 & 0xffffffff) / 8;
  if ((uint)uVar2 < 0xb) {
    *(undefined4 *)(param_1 + 0x118) = 0xc;
  }
  else {
    *(undefined4 *)(param_1 + 0x118) = 0x10;
  }
  FUN_0040d200(&local_38,0x10,0);
  FUN_00409a70(param_2,&local_38,uVar2);
  local_38 = local_38 >> 0x18 | local_38 >> 8 & 0xff00 | (local_38 & 0xff00) << 8 | local_38 << 0x18
  ;
  local_34 = local_34 >> 0x18 | local_34 >> 8 & 0xff00 | (local_34 & 0xff00) << 8 | local_34 << 0x18
  ;
  local_30 = local_30 >> 0x18 | local_30 >> 8 & 0xff00 | (local_30 & 0xff00) << 8 | local_30 << 0x18
  ;
  local_2c = local_2c >> 0x18 | local_2c >> 8 & 0xff00 | (local_2c & 0xff00) << 8 | local_2c << 0x18
  ;
  uVar3 = 0;
  do {
    if ((uVar3 & 4) == 0) {
      local_58 = local_38 ^ *(uint *)(&DAT_01e8b8dc + (ulonglong)(local_2c >> 0x10 & 0xff) * 4) ^
                 *(uint *)(&DAT_01e8bcdc + (ulonglong)(local_2c & 0xff) * 4) ^
                 *(uint *)(&DAT_01e8c0dc + (ulonglong)(local_2c >> 0x18) * 4) ^
                 *(uint *)(&DAT_01e8c4dc + (ulonglong)(local_2c >> 8 & 0xff) * 4) ^
                 *(uint *)(&DAT_01e8c0dc + (ulonglong)(local_30 >> 0x18) * 4);
      local_54 = local_30 ^ *(uint *)(&DAT_01e8b8dc + (ulonglong)(local_58 >> 0x18) * 4) ^
                 *(uint *)(&DAT_01e8bcdc + (ulonglong)(local_58 >> 8 & 0xff) * 4) ^
                 *(uint *)(&DAT_01e8c0dc + (ulonglong)(local_58 >> 0x10 & 0xff) * 4) ^
                 *(uint *)(&DAT_01e8c4dc + (ulonglong)(local_58 & 0xff) * 4) ^
                 *(uint *)(&DAT_01e8c4dc + (ulonglong)(local_30 >> 8 & 0xff) * 4);
      local_50 = local_2c ^ *(uint *)(&DAT_01e8b8dc + (ulonglong)(local_54 & 0xff) * 4) ^
                 *(uint *)(&DAT_01e8bcdc + (ulonglong)(local_54 >> 8 & 0xff) * 4) ^
                 *(uint *)(&DAT_01e8c0dc + (ulonglong)(local_54 >> 0x10 & 0xff) * 4) ^
                 *(uint *)(&DAT_01e8c4dc + (ulonglong)(local_54 >> 0x18) * 4) ^
                 *(uint *)(&DAT_01e8b8dc + (ulonglong)(local_30 >> 0x10 & 0xff) * 4);
      local_4c = local_34 ^ *(uint *)(&DAT_01e8b8dc + (ulonglong)(local_50 >> 8 & 0xff) * 4) ^
                 *(uint *)(&DAT_01e8bcdc + (ulonglong)(local_50 >> 0x10 & 0xff) * 4) ^
                 *(uint *)(&DAT_01e8c0dc + (ulonglong)(local_50 & 0xff) * 4) ^
                 *(uint *)(&DAT_01e8c4dc + (ulonglong)(local_50 >> 0x18) * 4) ^
                 *(uint *)(&DAT_01e8bcdc + (ulonglong)(local_30 & 0xff) * 4);
      local_48 = local_58;
      local_44 = local_54;
      local_40 = local_50;
      local_3c = local_4c;
    }
    else if ((uVar3 & 4) == 4) {
      local_48 = local_50 ^ *(uint *)(&DAT_01e8b8dc + (ulonglong)(local_54 >> 0x10 & 0xff) * 4) ^
                 *(uint *)(&DAT_01e8bcdc + (ulonglong)(local_54 & 0xff) * 4) ^
                 *(uint *)(&DAT_01e8c0dc + (ulonglong)(local_54 >> 0x18) * 4) ^
                 *(uint *)(&DAT_01e8c4dc + (ulonglong)(local_54 >> 8 & 0xff) * 4) ^
                 *(uint *)(&DAT_01e8c0dc + (ulonglong)(local_58 >> 0x18) * 4);
      local_44 = local_58 ^ *(uint *)(&DAT_01e8b8dc + (ulonglong)(local_48 >> 0x18) * 4) ^
                 *(uint *)(&DAT_01e8bcdc + (ulonglong)(local_48 >> 8 & 0xff) * 4) ^
                 *(uint *)(&DAT_01e8c0dc + (ulonglong)(local_48 >> 0x10 & 0xff) * 4) ^
                 *(uint *)(&DAT_01e8c4dc + (ulonglong)(local_48 & 0xff) * 4) ^
                 *(uint *)(&DAT_01e8c4dc + (ulonglong)(local_58 >> 8 & 0xff) * 4);
      local_40 = local_54 ^ *(uint *)(&DAT_01e8b8dc + (ulonglong)(local_44 & 0xff) * 4) ^
                 *(uint *)(&DAT_01e8bcdc + (ulonglong)(local_44 >> 8 & 0xff) * 4) ^
                 *(uint *)(&DAT_01e8c0dc + (ulonglong)(local_44 >> 0x10 & 0xff) * 4) ^
                 *(uint *)(&DAT_01e8c4dc + (ulonglong)(local_44 >> 0x18) * 4) ^
                 *(uint *)(&DAT_01e8b8dc + (ulonglong)(local_58 >> 0x10 & 0xff) * 4);
      local_3c = local_4c ^ *(uint *)(&DAT_01e8b8dc + (ulonglong)(local_40 >> 8 & 0xff) * 4) ^
                 *(uint *)(&DAT_01e8bcdc + (ulonglong)(local_40 >> 0x10 & 0xff) * 4) ^
                 *(uint *)(&DAT_01e8c0dc + (ulonglong)(local_40 & 0xff) * 4) ^
                 *(uint *)(&DAT_01e8c4dc + (ulonglong)(local_40 >> 0x18) * 4) ^
                 *(uint *)(&DAT_01e8bcdc + (ulonglong)(local_58 & 0xff) * 4);
      local_38 = local_48;
      local_34 = local_44;
      local_30 = local_40;
      local_2c = local_3c;
    }
    uVar4 = uVar3 & 0xc;
    if (uVar4 == 0) {
LAB_00b72de8:
      *(uint *)(param_1 + 0x98 + (ulonglong)uVar3 * 4) =
           *(uint *)(&DAT_01e8b8dc + (ulonglong)(local_40 >> 0x18) * 4) ^
           *(uint *)(&DAT_01e8bcdc + (ulonglong)(local_40 >> 0x10 & 0xff) * 4) ^
           *(uint *)(&DAT_01e8c0dc + (ulonglong)(local_44 & 0xff) * 4) ^
           *(uint *)(&DAT_01e8c4dc + (ulonglong)(local_44 >> 8 & 0xff) * 4);
      *(uint *)(param_1 + 0x98 + (ulonglong)(uVar3 + 1) * 4) =
           *(uint *)(&DAT_01e8b8dc + (ulonglong)(local_40 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_01e8bcdc + (ulonglong)(local_40 & 0xff) * 4) ^
           *(uint *)(&DAT_01e8c0dc + (ulonglong)(local_44 >> 0x10 & 0xff) * 4) ^
           *(uint *)(&DAT_01e8c4dc + (ulonglong)(local_44 >> 0x18) * 4);
      *(uint *)(param_1 + 0x98 + (ulonglong)(uVar3 + 2) * 4) =
           *(uint *)(&DAT_01e8b8dc + (ulonglong)(local_3c >> 0x18) * 4) ^
           *(uint *)(&DAT_01e8bcdc + (ulonglong)(local_3c >> 0x10 & 0xff) * 4) ^
           *(uint *)(&DAT_01e8c0dc + (ulonglong)(local_48 & 0xff) * 4) ^
           *(uint *)(&DAT_01e8c4dc + (ulonglong)(local_48 >> 8 & 0xff) * 4);
      *(uint *)(param_1 + 0x98 + (ulonglong)(uVar3 + 3) * 4) =
           *(uint *)(&DAT_01e8b8dc + (ulonglong)(local_3c >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_01e8bcdc + (ulonglong)(local_3c & 0xff) * 4) ^
           *(uint *)(&DAT_01e8c0dc + (ulonglong)(local_48 >> 0x10 & 0xff) * 4) ^
           *(uint *)(&DAT_01e8c4dc + (ulonglong)(local_48 >> 0x18) * 4);
    }
    else if ((uVar4 == 4) || (uVar4 == 8)) {
      *(uint *)(param_1 + 0x98 + (ulonglong)uVar3 * 4) =
           *(uint *)(&DAT_01e8b8dc + (ulonglong)(local_48 & 0xff) * 4) ^
           *(uint *)(&DAT_01e8bcdc + (ulonglong)(local_48 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_01e8c0dc + (ulonglong)(local_3c >> 0x18) * 4) ^
           *(uint *)(&DAT_01e8c4dc + (ulonglong)(local_3c >> 0x10 & 0xff) * 4);
      *(uint *)(param_1 + 0x98 + (ulonglong)(uVar3 + 1) * 4) =
           *(uint *)(&DAT_01e8b8dc + (ulonglong)(local_48 >> 0x10 & 0xff) * 4) ^
           *(uint *)(&DAT_01e8bcdc + (ulonglong)(local_48 >> 0x18) * 4) ^
           *(uint *)(&DAT_01e8c0dc + (ulonglong)(local_3c >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_01e8c4dc + (ulonglong)(local_3c & 0xff) * 4);
      *(uint *)(param_1 + 0x98 + (ulonglong)(uVar3 + 2) * 4) =
           *(uint *)(&DAT_01e8b8dc + (ulonglong)(local_44 & 0xff) * 4) ^
           *(uint *)(&DAT_01e8bcdc + (ulonglong)(local_44 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_01e8c0dc + (ulonglong)(local_40 >> 0x18) * 4) ^
           *(uint *)(&DAT_01e8c4dc + (ulonglong)(local_40 >> 0x10 & 0xff) * 4);
      *(uint *)(param_1 + 0x98 + (ulonglong)(uVar3 + 3) * 4) =
           *(uint *)(&DAT_01e8b8dc + (ulonglong)(local_44 >> 0x10 & 0xff) * 4) ^
           *(uint *)(&DAT_01e8bcdc + (ulonglong)(local_44 >> 0x18) * 4) ^
           *(uint *)(&DAT_01e8c0dc + (ulonglong)(local_40 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_01e8c4dc + (ulonglong)(local_40 & 0xff) * 4);
    }
    else if (uVar4 == 0xc) goto LAB_00b72de8;
    if (uVar4 == 0) {
      puVar1 = (uint *)(param_1 + 0x98 + (ulonglong)uVar3 * 4);
      *puVar1 = *puVar1 ^ *(uint *)(&DAT_01e8b8dc + (ulonglong)(local_58 >> 8 & 0xff) * 4);
      puVar1 = (uint *)(param_1 + 0x98 + (ulonglong)(uVar3 + 1) * 4);
      *puVar1 = *puVar1 ^ *(uint *)(&DAT_01e8bcdc + (ulonglong)(local_54 >> 8 & 0xff) * 4);
      puVar1 = (uint *)(param_1 + 0x98 + (ulonglong)(uVar3 + 2) * 4);
      *puVar1 = *puVar1 ^ *(uint *)(&DAT_01e8c0dc + (ulonglong)(local_50 >> 0x10 & 0xff) * 4);
      puVar1 = (uint *)(param_1 + 0x98 + (ulonglong)(uVar3 + 3) * 4);
      *puVar1 = *puVar1 ^ *(uint *)(&DAT_01e8c4dc + (ulonglong)(local_4c >> 0x18) * 4);
    }
    else if (uVar4 == 4) {
      puVar1 = (uint *)(param_1 + 0x98 + (ulonglong)uVar3 * 4);
      *puVar1 = *puVar1 ^ *(uint *)(&DAT_01e8b8dc + (ulonglong)(local_30 >> 0x18) * 4);
      puVar1 = (uint *)(param_1 + 0x98 + (ulonglong)(uVar3 + 1) * 4);
      *puVar1 = *puVar1 ^ *(uint *)(&DAT_01e8bcdc + (ulonglong)(local_2c >> 0x10 & 0xff) * 4);
      puVar1 = (uint *)(param_1 + 0x98 + (ulonglong)(uVar3 + 2) * 4);
      *puVar1 = *puVar1 ^ *(uint *)(&DAT_01e8c0dc + (ulonglong)(local_38 & 0xff) * 4);
      puVar1 = (uint *)(param_1 + 0x98 + (ulonglong)(uVar3 + 3) * 4);
      *puVar1 = *puVar1 ^ *(uint *)(&DAT_01e8c4dc + (ulonglong)(local_34 & 0xff) * 4);
    }
    else if (uVar4 == 8) {
      puVar1 = (uint *)(param_1 + 0x98 + (ulonglong)uVar3 * 4);
      *puVar1 = *puVar1 ^ *(uint *)(&DAT_01e8b8dc + (ulonglong)(local_50 >> 0x10 & 0xff) * 4);
      puVar1 = (uint *)(param_1 + 0x98 + (ulonglong)(uVar3 + 1) * 4);
      *puVar1 = *puVar1 ^ *(uint *)(&DAT_01e8bcdc + (ulonglong)(local_4c >> 0x18) * 4);
      puVar1 = (uint *)(param_1 + 0x98 + (ulonglong)(uVar3 + 2) * 4);
      *puVar1 = *puVar1 ^ *(uint *)(&DAT_01e8c0dc + (ulonglong)(local_58 >> 8 & 0xff) * 4);
      puVar1 = (uint *)(param_1 + 0x98 + (ulonglong)(uVar3 + 3) * 4);
      *puVar1 = *puVar1 ^ *(uint *)(&DAT_01e8c4dc + (ulonglong)(local_54 >> 8 & 0xff) * 4);
    }
    else if (uVar4 == 0xc) {
      puVar1 = (uint *)(param_1 + 0x98 + (ulonglong)uVar3 * 4);
      *puVar1 = *puVar1 ^ *(uint *)(&DAT_01e8b8dc + (ulonglong)(local_38 & 0xff) * 4);
      puVar1 = (uint *)(param_1 + 0x98 + (ulonglong)(uVar3 + 1) * 4);
      *puVar1 = *puVar1 ^ *(uint *)(&DAT_01e8bcdc + (ulonglong)(local_34 & 0xff) * 4);
      puVar1 = (uint *)(param_1 + 0x98 + (ulonglong)(uVar3 + 2) * 4);
      *puVar1 = *puVar1 ^ *(uint *)(&DAT_01e8c0dc + (ulonglong)(local_30 >> 0x18) * 4);
      puVar1 = (uint *)(param_1 + 0x98 + (ulonglong)(uVar3 + 3) * 4);
      *puVar1 = *puVar1 ^ *(uint *)(&DAT_01e8c4dc + (ulonglong)(local_2c >> 0x10 & 0xff) * 4);
    }
    if (0xf < uVar3) {
      puVar1 = (uint *)(param_1 + 0x98 + (ulonglong)uVar3 * 4);
      *puVar1 = *puVar1 & 0x1f;
      puVar1 = (uint *)(param_1 + 0x98 + (ulonglong)(uVar3 + 1) * 4);
      *puVar1 = *puVar1 & 0x1f;
      puVar1 = (uint *)(param_1 + 0x98 + (ulonglong)(uVar3 + 2) * 4);
      *puVar1 = *puVar1 & 0x1f;
      puVar1 = (uint *)(param_1 + 0x98 + (ulonglong)(uVar3 + 3) * 4);
      *puVar1 = *puVar1 & 0x1f;
    }
    uVar3 = uVar3 + 4;
    if (0x1f < uVar3) {
      return;
    }
  } while( true );
}

