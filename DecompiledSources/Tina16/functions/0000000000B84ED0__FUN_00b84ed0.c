/* Ghidra address: 00b84ed0 */
/* Ghidra symbol: FUN_00b84ed0 */


void FUN_00b84ed0(longlong param_1,undefined8 param_2,uint param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint local_28c;
  byte local_288 [512];
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  undefined4 local_78 [4];
  undefined4 local_68 [4];
  undefined4 local_58 [10];
  
  FUN_0040d200(local_58,0x20,0);
  FUN_00409a70(param_2,local_58,(ulonglong)param_3 / 8);
  if (param_3 < 0x81) {
    local_28c = 0x80;
  }
  else if (param_3 < 0xc1) {
    local_28c = 0xc0;
  }
  else {
    local_28c = 0x100;
  }
  uVar2 = local_28c / 0x40;
  iVar3 = 0;
  puVar8 = local_68;
  puVar9 = local_78;
  uVar6 = uVar2;
  do {
    uVar6 = uVar6 - 1;
    *puVar8 = local_58[(uint)(iVar3 * 2)];
    uVar1 = local_58[iVar3 * 2 + 1];
    *puVar9 = uVar1;
    uVar4 = FUN_00b84b00(*puVar8,uVar1);
    (&local_88)[uVar6] = uVar4;
    iVar3 = iVar3 + 1;
    puVar9 = puVar9 + 1;
    puVar8 = puVar8 + 1;
    uVar2 = uVar2 - 1;
  } while (uVar2 != 0);
  iVar7 = 0;
  iVar3 = 0;
  do {
    iVar5 = FUN_00b84c30(iVar7,local_68,local_28c);
    uVar6 = FUN_00b84c30(iVar7 + 0x1010101,local_78,local_28c);
    uVar6 = uVar6 << 8 | uVar6 >> 0x18;
    *(uint *)(param_1 + 0xa8 + (ulonglong)(uint)(iVar3 * 2) * 4) = iVar5 + uVar6;
    uVar6 = iVar5 + uVar6 * 2;
    *(uint *)(param_1 + 0xa8 + (ulonglong)(iVar3 * 2 + 1) * 4) = uVar6 * 0x200 | uVar6 >> 0x17;
    iVar7 = iVar7 + 0x2020202;
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0x14);
  if (local_28c == 0x80) {
    FUN_00b84e60(local_288 + 0x100,&DAT_01e939c0,(undefined1)local_84);
    uVar6 = 0;
    do {
      *(undefined4 *)(param_1 + 0x148 + (ulonglong)(uVar6 * 2) * 4) =
           (&DAT_020188ec)
           [(uint)(byte)(&DAT_01e939c0)[local_288[(ulonglong)uVar6 + 0x100]] ^ local_88 & 0xff];
      *(undefined4 *)(param_1 + 0x148 + (ulonglong)(uVar6 * 2 + 2) * 4) =
           (&DAT_020188ec)
           [(uint)(byte)(&DAT_01e939c0)[local_288[(ulonglong)(uVar6 + 1) + 0x100]] ^ local_88 & 0xff
           ];
      uVar6 = uVar6 + 2;
    } while (uVar6 < 0x100);
    FUN_00b84e60(local_288 + 0x100,&DAT_01e93ac0,local_84 >> 8);
    uVar2 = local_88 >> 8 & 0xff;
    uVar6 = 0;
    do {
      *(undefined4 *)(param_1 + 0x148 + (ulonglong)(uVar6 * 2 + 1) * 4) =
           (&DAT_02018cec)[(byte)(&DAT_01e939c0)[local_288[(ulonglong)uVar6 + 0x100]] ^ uVar2];
      *(undefined4 *)(param_1 + 0x148 + (ulonglong)(uVar6 * 2 + 3) * 4) =
           (&DAT_02018cec)[(byte)(&DAT_01e939c0)[local_288[(ulonglong)(uVar6 + 1) + 0x100]] ^ uVar2]
      ;
      uVar6 = uVar6 + 2;
    } while (uVar6 < 0x100);
    FUN_00b84e60(local_288 + 0x100,&DAT_01e939c0,local_84 >> 0x10);
    uVar2 = local_88 >> 0x10 & 0xff;
    uVar6 = 0;
    do {
      *(undefined4 *)(param_1 + 0x948 + (ulonglong)(uVar6 * 2) * 4) =
           (&DAT_020190ec)[(byte)(&DAT_01e93ac0)[local_288[(ulonglong)uVar6 + 0x100]] ^ uVar2];
      *(undefined4 *)(param_1 + 0x948 + (ulonglong)(uVar6 * 2 + 2) * 4) =
           (&DAT_020190ec)[(byte)(&DAT_01e93ac0)[local_288[(ulonglong)(uVar6 + 1) + 0x100]] ^ uVar2]
      ;
      uVar6 = uVar6 + 2;
    } while (uVar6 < 0x100);
    FUN_00b84e60(local_288 + 0x100,&DAT_01e93ac0,local_84 >> 0x18);
    uVar6 = 0;
    do {
      *(undefined4 *)(param_1 + 0x948 + (ulonglong)(uVar6 * 2 + 1) * 4) =
           (&DAT_020194ec)
           [(uint)(byte)(&DAT_01e93ac0)[local_288[(ulonglong)uVar6 + 0x100]] ^ local_88 >> 0x18];
      *(undefined4 *)(param_1 + 0x948 + (ulonglong)(uVar6 * 2 + 3) * 4) =
           (&DAT_020194ec)
           [(uint)(byte)(&DAT_01e93ac0)[local_288[(ulonglong)(uVar6 + 1) + 0x100]] ^
            local_88 >> 0x18];
      uVar6 = uVar6 + 2;
    } while (uVar6 < 0x100);
  }
  else if (local_28c == 0xc0) {
    FUN_00b84e60(local_288 + 0x100,&DAT_01e93ac0,(undefined1)local_80);
    uVar6 = 0;
    do {
      *(undefined4 *)(param_1 + 0x148 + (ulonglong)(uVar6 * 2) * 4) =
           (&DAT_020188ec)
           [(uint)(byte)(&DAT_01e939c0)
                        [(uint)(byte)(&DAT_01e939c0)[local_288[(ulonglong)uVar6 + 0x100]] ^
                         local_84 & 0xff] ^ local_88 & 0xff];
      *(undefined4 *)(param_1 + 0x148 + (ulonglong)(uVar6 * 2 + 2) * 4) =
           (&DAT_020188ec)
           [(uint)(byte)(&DAT_01e939c0)
                        [(uint)(byte)(&DAT_01e939c0)[local_288[(ulonglong)(uVar6 + 1) + 0x100]] ^
                         local_84 & 0xff] ^ local_88 & 0xff];
      uVar6 = uVar6 + 2;
    } while (uVar6 < 0x100);
    FUN_00b84e60(local_288 + 0x100,&DAT_01e93ac0,local_80 >> 8);
    uVar4 = local_88 >> 8 & 0xff;
    uVar6 = local_84 >> 8 & 0xff;
    uVar2 = 0;
    do {
      *(undefined4 *)(param_1 + 0x148 + (ulonglong)(uVar2 * 2 + 1) * 4) =
           (&DAT_02018cec)
           [(byte)(&DAT_01e939c0)
                  [(byte)(&DAT_01e93ac0)[local_288[(ulonglong)uVar2 + 0x100]] ^ uVar6] ^ uVar4];
      *(undefined4 *)(param_1 + 0x148 + (ulonglong)(uVar2 * 2 + 3) * 4) =
           (&DAT_02018cec)
           [(byte)(&DAT_01e939c0)
                  [(byte)(&DAT_01e93ac0)[local_288[(ulonglong)(uVar2 + 1) + 0x100]] ^ uVar6] ^ uVar4
           ];
      uVar2 = uVar2 + 2;
    } while (uVar2 < 0x100);
    FUN_00b84e60(local_288 + 0x100,&DAT_01e939c0,local_80 >> 0x10);
    uVar4 = local_88 >> 0x10 & 0xff;
    uVar6 = local_84 >> 0x10 & 0xff;
    uVar2 = 0;
    do {
      *(undefined4 *)(param_1 + 0x948 + (ulonglong)(uVar2 * 2) * 4) =
           (&DAT_020190ec)
           [(byte)(&DAT_01e93ac0)
                  [(byte)(&DAT_01e939c0)[local_288[(ulonglong)uVar2 + 0x100]] ^ uVar6] ^ uVar4];
      *(undefined4 *)(param_1 + 0x948 + (ulonglong)(uVar2 * 2 + 2) * 4) =
           (&DAT_020190ec)
           [(byte)(&DAT_01e93ac0)
                  [(byte)(&DAT_01e939c0)[local_288[(ulonglong)(uVar2 + 1) + 0x100]] ^ uVar6] ^ uVar4
           ];
      uVar2 = uVar2 + 2;
    } while (uVar2 < 0x100);
    FUN_00b84e60(local_288 + 0x100,&DAT_01e939c0,local_80 >> 0x18);
    uVar6 = 0;
    do {
      *(undefined4 *)(param_1 + 0x948 + (ulonglong)(uVar6 * 2 + 1) * 4) =
           (&DAT_020194ec)
           [(uint)(byte)(&DAT_01e93ac0)
                        [(uint)(byte)(&DAT_01e93ac0)[local_288[(ulonglong)uVar6 + 0x100]] ^
                         local_84 >> 0x18] ^ local_88 >> 0x18];
      *(undefined4 *)(param_1 + 0x948 + (ulonglong)(uVar6 * 2 + 3) * 4) =
           (&DAT_020194ec)
           [(uint)(byte)(&DAT_01e93ac0)
                        [(uint)(byte)(&DAT_01e93ac0)[local_288[(ulonglong)(uVar6 + 1) + 0x100]] ^
                         local_84 >> 0x18] ^ local_88 >> 0x18];
      uVar6 = uVar6 + 2;
    } while (uVar6 < 0x100);
  }
  else if (local_28c == 0x100) {
    FUN_00b84e60(local_288,&DAT_01e93ac0,(undefined1)local_7c);
    uVar6 = 0;
    do {
      local_288[(ulonglong)uVar6 + 0x100] = (&DAT_01e93ac0)[local_288[uVar6]];
      local_288[(ulonglong)(uVar6 + 1) + 0x100] = (&DAT_01e93ac0)[local_288[uVar6 + 1]];
      uVar6 = uVar6 + 2;
    } while (uVar6 < 0x100);
    FUN_00b84e60(local_288 + 0x100,local_288 + 0x100,(undefined1)local_80);
    uVar6 = 0;
    do {
      *(undefined4 *)(param_1 + 0x148 + (ulonglong)(uVar6 * 2) * 4) =
           (&DAT_020188ec)
           [(uint)(byte)(&DAT_01e939c0)
                        [(uint)(byte)(&DAT_01e939c0)[local_288[(ulonglong)uVar6 + 0x100]] ^
                         local_84 & 0xff] ^ local_88 & 0xff];
      *(undefined4 *)(param_1 + 0x148 + (ulonglong)(uVar6 * 2 + 2) * 4) =
           (&DAT_020188ec)
           [(uint)(byte)(&DAT_01e939c0)
                        [(uint)(byte)(&DAT_01e939c0)[local_288[(ulonglong)(uVar6 + 1) + 0x100]] ^
                         local_84 & 0xff] ^ local_88 & 0xff];
      uVar6 = uVar6 + 2;
    } while (uVar6 < 0x100);
    FUN_00b84e60(local_288,&DAT_01e939c0,local_7c >> 8);
    uVar6 = 0;
    do {
      local_288[(ulonglong)uVar6 + 0x100] = (&DAT_01e93ac0)[local_288[uVar6]];
      local_288[(ulonglong)(uVar6 + 1) + 0x100] = (&DAT_01e93ac0)[local_288[uVar6 + 1]];
      uVar6 = uVar6 + 2;
    } while (uVar6 < 0x100);
    FUN_00b84e60(local_288 + 0x100,local_288 + 0x100,local_80 >> 8);
    uVar4 = local_88 >> 8 & 0xff;
    uVar6 = local_84 >> 8 & 0xff;
    uVar2 = 0;
    do {
      *(undefined4 *)(param_1 + 0x148 + (ulonglong)(uVar2 * 2 + 1) * 4) =
           (&DAT_02018cec)
           [(byte)(&DAT_01e939c0)
                  [(byte)(&DAT_01e93ac0)[local_288[(ulonglong)uVar2 + 0x100]] ^ uVar6] ^ uVar4];
      *(undefined4 *)(param_1 + 0x148 + (ulonglong)(uVar2 * 2 + 3) * 4) =
           (&DAT_02018cec)
           [(byte)(&DAT_01e939c0)
                  [(byte)(&DAT_01e93ac0)[local_288[(ulonglong)(uVar2 + 1) + 0x100]] ^ uVar6] ^ uVar4
           ];
      uVar2 = uVar2 + 2;
    } while (uVar2 < 0x100);
    FUN_00b84e60(local_288,&DAT_01e939c0,local_7c >> 0x10);
    uVar6 = 0;
    do {
      local_288[(ulonglong)uVar6 + 0x100] = (&DAT_01e939c0)[local_288[uVar6]];
      local_288[(ulonglong)(uVar6 + 1) + 0x100] = (&DAT_01e939c0)[local_288[uVar6 + 1]];
      uVar6 = uVar6 + 2;
    } while (uVar6 < 0x100);
    FUN_00b84e60(local_288 + 0x100,local_288 + 0x100,local_80 >> 0x10);
    uVar4 = local_88 >> 0x10 & 0xff;
    uVar6 = local_84 >> 0x10 & 0xff;
    uVar2 = 0;
    do {
      *(undefined4 *)(param_1 + 0x948 + (ulonglong)(uVar2 * 2) * 4) =
           (&DAT_020190ec)
           [(byte)(&DAT_01e93ac0)
                  [(byte)(&DAT_01e939c0)[local_288[(ulonglong)uVar2 + 0x100]] ^ uVar6] ^ uVar4];
      *(undefined4 *)(param_1 + 0x948 + (ulonglong)(uVar2 * 2 + 2) * 4) =
           (&DAT_020190ec)
           [(byte)(&DAT_01e93ac0)
                  [(byte)(&DAT_01e939c0)[local_288[(ulonglong)(uVar2 + 1) + 0x100]] ^ uVar6] ^ uVar4
           ];
      uVar2 = uVar2 + 2;
    } while (uVar2 < 0x100);
    FUN_00b84e60(local_288,&DAT_01e93ac0,local_7c >> 0x18);
    uVar6 = 0;
    do {
      local_288[(ulonglong)uVar6 + 0x100] = (&DAT_01e939c0)[local_288[uVar6]];
      local_288[(ulonglong)(uVar6 + 1) + 0x100] = (&DAT_01e939c0)[local_288[uVar6 + 1]];
      uVar6 = uVar6 + 2;
    } while (uVar6 < 0x100);
    FUN_00b84e60(local_288 + 0x100,local_288 + 0x100,local_80 >> 0x18);
    uVar6 = 0;
    do {
      *(undefined4 *)(param_1 + 0x948 + (ulonglong)(uVar6 * 2 + 1) * 4) =
           (&DAT_020194ec)
           [(uint)(byte)(&DAT_01e93ac0)
                        [(uint)(byte)(&DAT_01e93ac0)[local_288[(ulonglong)uVar6 + 0x100]] ^
                         local_84 >> 0x18] ^ local_88 >> 0x18];
      *(undefined4 *)(param_1 + 0x948 + (ulonglong)(uVar6 * 2 + 3) * 4) =
           (&DAT_020194ec)
           [(uint)(byte)(&DAT_01e93ac0)
                        [(uint)(byte)(&DAT_01e93ac0)[local_288[(ulonglong)(uVar6 + 1) + 0x100]] ^
                         local_84 >> 0x18] ^ local_88 >> 0x18];
      uVar6 = uVar6 + 2;
    } while (uVar6 < 0x100);
  }
  return;
}

