/* Ghidra address: 00d1c5c0 */
/* Ghidra symbol: FUN_00d1c5c0 */


void FUN_00d1c5c0(longlong param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int local_d4;
  uint *local_d0;
  uint local_c8 [4];
  uint local_b8 [34];
  
  FUN_00409a70(param_1 + 0x3c,local_c8,0x10);
  local_d4 = 1;
  local_d0 = local_c8;
  do {
    local_d0 = local_d0 + 4;
    lVar4 = (longlong)(local_d4 + -1);
    uVar1 = FUN_00cd7280(local_c8[lVar4 * 4 + 3],8);
    uVar1 = local_c8[lVar4 * 4] ^ uVar1 ^ 1 << ((byte)(local_d4 + -1) & 0x1f);
    *local_d0 = uVar1;
    uVar1 = local_c8[lVar4 * 4 + 1] ^ uVar1;
    local_d0[1] = uVar1;
    uVar1 = local_c8[lVar4 * 4 + 2] ^ uVar1;
    local_d0[2] = uVar1;
    local_d0[3] = local_c8[lVar4 * 4 + 3] ^ uVar1;
    iVar7 = 4;
    puVar5 = local_c8;
    do {
      lVar4 = (longlong)(local_d4 + -1);
      uVar1 = FUN_00cd7270(*(undefined4 *)
                            (&DAT_01eba3c0 + (ulonglong)(puVar5[lVar4 * 4] >> 8 & 0xff) * 4),8);
      uVar2 = FUN_00cd7270(*(undefined4 *)
                            (&DAT_01eba3c0 + (ulonglong)(puVar5[lVar4 * 4] >> 0x10 & 0xff) * 4),0x10
                          );
      uVar3 = FUN_00cd7270(*(undefined4 *)
                            (&DAT_01eba3c0 + (ulonglong)(puVar5[lVar4 * 4] >> 0x18) * 4),0x18);
      puVar5[lVar4 * 4] =
           *(uint *)(&DAT_01eba3c0 + (ulonglong)(puVar5[lVar4 * 4] & 0xff) * 4) ^ uVar1 ^ uVar2 ^
           uVar3;
      puVar5 = puVar5 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    local_d4 = local_d4 + 1;
  } while (local_d4 != 9);
  local_c8[3] = param_2[3] ^ local_c8[3];
  iVar7 = 7;
  puVar5 = local_c8 + 4;
  uVar1 = *param_2 ^ local_c8[0];
  uVar2 = param_2[1] ^ local_c8[1];
  uVar3 = param_2[2] ^ local_c8[2];
  do {
    puVar6 = puVar5;
    uVar8 = *(uint *)(&DAT_01eba7c0 + (ulonglong)(uVar1 & 0xff) * 4) ^
            *(uint *)(&DAT_01ebabc0 + (ulonglong)(uVar2 & 0xff) * 4) ^
            *(uint *)(&DAT_01ebafc0 + (ulonglong)(uVar3 & 0xff) * 4) ^
            *(uint *)(&DAT_01ebb3c0 + (ulonglong)(local_c8[3] & 0xff) * 4) ^ *puVar6;
    uVar9 = *(uint *)(&DAT_01eba7c0 + (ulonglong)(uVar1 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_01ebabc0 + (ulonglong)(uVar2 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_01ebafc0 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_01ebb3c0 + (ulonglong)(local_c8[3] >> 8 & 0xff) * 4) ^ puVar6[1];
    uVar10 = *(uint *)(&DAT_01eba7c0 + (ulonglong)(uVar1 >> 0x10 & 0xff) * 4) ^
             *(uint *)(&DAT_01ebabc0 + (ulonglong)(uVar2 >> 0x10 & 0xff) * 4) ^
             *(uint *)(&DAT_01ebafc0 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) ^
             *(uint *)(&DAT_01ebb3c0 + (ulonglong)(local_c8[3] >> 0x10 & 0xff) * 4) ^ puVar6[2];
    local_c8[3] = *(uint *)(&DAT_01eba7c0 + (ulonglong)(uVar1 >> 0x18) * 4) ^
                  *(uint *)(&DAT_01ebabc0 + (ulonglong)(uVar2 >> 0x18) * 4) ^
                  *(uint *)(&DAT_01ebafc0 + (ulonglong)(uVar3 >> 0x18) * 4) ^
                  *(uint *)(&DAT_01ebb3c0 + (ulonglong)(local_c8[3] >> 0x18) * 4) ^ puVar6[3];
    iVar7 = iVar7 + -1;
    puVar5 = puVar6 + 4;
    uVar1 = uVar8;
    uVar2 = uVar9;
    uVar3 = uVar10;
  } while (iVar7 != 0);
  *(uint *)(param_1 + 0x3c) =
       CONCAT13((&DAT_01eba2c0)[local_c8[3] & 0xff],
                CONCAT12((&DAT_01eba2c0)[uVar10 & 0xff],
                         CONCAT11((&DAT_01eba2c0)[uVar9 & 0xff],
                                  *(byte *)(param_1 + 0x2c) ^ (&DAT_01eba2c0)[uVar8 & 0xff]))) ^
       puVar6[4];
  *(uint *)(param_1 + 0x40) =
       CONCAT13((&DAT_01eba2c0)[local_c8[3] >> 8 & 0xff],
                CONCAT12((&DAT_01eba2c0)[uVar10 >> 8 & 0xff],
                         CONCAT11((&DAT_01eba2c0)[uVar9 >> 8 & 0xff],
                                  *(byte *)(param_1 + 0x2d) ^ (&DAT_01eba2c0)[uVar8 >> 8 & 0xff])))
       ^ puVar6[5];
  *(uint *)(param_1 + 0x44) =
       CONCAT13((&DAT_01eba2c0)[local_c8[3] >> 0x10 & 0xff],
                CONCAT12((&DAT_01eba2c0)[uVar10 >> 0x10 & 0xff],
                         CONCAT11((&DAT_01eba2c0)[uVar9 >> 0x10 & 0xff],
                                  *(byte *)(param_1 + 0x2e) ^ (&DAT_01eba2c0)[uVar8 >> 0x10 & 0xff])
                        )) ^ puVar6[6];
  *(uint *)(param_1 + 0x48) =
       CONCAT13((&DAT_01eba2c0)[local_c8[3] >> 0x18],
                CONCAT12((&DAT_01eba2c0)[uVar10 >> 0x18],
                         CONCAT11((&DAT_01eba2c0)[uVar9 >> 0x18],
                                  *(byte *)(param_1 + 0x2f) ^ (&DAT_01eba2c0)[uVar8 >> 0x18]))) ^
       puVar6[7];
  return;
}

