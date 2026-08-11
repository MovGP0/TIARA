/* Ghidra address: 00b7ff00 */
/* Ghidra symbol: FUN_00b7ff00 */


void FUN_00b7ff00(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined4 local_58;
  uint local_54 [2];
  byte local_4c [8];
  uint auStack_44 [5];
  
  uVar2 = (param_3 & 0xffffffff) / 8;
  FUN_0040d200(&local_58,0x20,0);
  uVar5 = (uint)uVar2;
  FUN_00409a70(param_2,&local_58,uVar2);
  if (uVar5 < 0x11) {
    uVar5 = 4;
    iVar8 = 10;
  }
  else if (uVar5 < 0x19) {
    uVar5 = 6;
    iVar8 = 0xc;
  }
  else {
    uVar5 = 8;
    iVar8 = 0xe;
  }
  *(int *)(param_1 + 0xa8) = iVar8;
  uVar6 = 0;
  uVar10 = 0;
  uVar2 = 0;
  while (((uint)uVar2 < uVar5 && ((uint)uVar6 < iVar8 + 1U))) {
    while( true ) {
      uVar11 = (uint)uVar10;
      if ((uVar5 <= (uint)uVar2) || (3 < uVar11)) break;
      *(uint *)(param_1 + 0xac + uVar6 * 0x20 + uVar10 * 4) = local_54[uVar2 - 1];
      uVar2 = (ulonglong)((uint)uVar2 + 1);
      uVar10 = (ulonglong)(uVar11 + 1);
    }
    if (uVar11 == 4) {
      uVar10 = 0;
      uVar6 = (ulonglong)((uint)uVar6 + 1);
    }
  }
  uVar11 = 0;
  while ((uint)uVar6 < iVar8 + 1U) {
    uVar3 = uVar5 - 1;
    uVar2 = (ulonglong)uVar3;
    local_58._0_1_ =
         (byte)local_58 ^ (&DAT_01e904b0)[*(byte *)((longlong)local_54 + uVar2 * 4 + -3)];
    local_58._1_1_ =
         local_58._1_1_ ^ (&DAT_01e904b0)[*(byte *)((longlong)local_54 + uVar2 * 4 + -2)];
    local_58._2_1_ =
         local_58._2_1_ ^ (&DAT_01e904b0)[*(byte *)((longlong)local_54 + uVar2 * 4 + -1)];
    local_58._3_1_ = local_58._3_1_ ^ (&DAT_01e904b0)[(byte)local_54[uVar2 - 1]];
    local_58._0_1_ = (byte)local_58 ^ (&DAT_01e936b0)[(ulonglong)uVar11 * 4];
    uVar11 = uVar11 + 1;
    if (uVar5 == 8) {
      iVar7 = 3;
      iVar1 = 1;
      puVar4 = local_54;
      do {
        *puVar4 = *puVar4 ^ local_54[(ulonglong)(iVar1 - 1) - 1];
        iVar1 = iVar1 + 1;
        puVar4 = puVar4 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      local_4c[4] = local_4c[4] ^ (&DAT_01e904b0)[local_4c[0]];
      local_4c[5] = local_4c[5] ^ (&DAT_01e904b0)[local_4c[1]];
      local_4c[6] = local_4c[6] ^ (&DAT_01e904b0)[local_4c[2]];
      local_4c[7] = local_4c[7] ^ (&DAT_01e904b0)[local_4c[3]];
      iVar1 = 5;
      iVar7 = 3;
      puVar4 = (uint *)(local_4c + 8);
      do {
        *puVar4 = *puVar4 ^ local_54[(ulonglong)(iVar1 - 1) - 1];
        iVar1 = iVar1 + 1;
        puVar4 = puVar4 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    else {
      iVar1 = 1;
      if (uVar3 != 0) {
        puVar4 = local_54;
        do {
          *puVar4 = *puVar4 ^ local_54[(ulonglong)(iVar1 - 1) - 1];
          iVar1 = iVar1 + 1;
          puVar4 = puVar4 + 1;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
    }
    uVar3 = 0;
    while ((uVar3 < uVar5 && ((uint)uVar6 < iVar8 + 1U))) {
      while ((uVar9 = (uint)uVar10, uVar3 < uVar5 && (uVar9 < 4))) {
        *(uint *)(param_1 + 0xac + uVar6 * 0x20 + uVar10 * 4) = local_54[(ulonglong)uVar3 - 1];
        uVar3 = uVar3 + 1;
        uVar10 = (ulonglong)(uVar9 + 1);
      }
      if (uVar9 == 4) {
        uVar6 = (ulonglong)((uint)uVar6 + 1);
        uVar10 = 0;
      }
    }
  }
  FUN_00409a70(param_1 + 0xac,param_1 + 0x28c,0x1e0);
  iVar8 = *(int *)(param_1 + 0xa8);
  uVar5 = 1;
  while (iVar8 = iVar8 + -1, iVar8 != 0) {
    FUN_00b7fe70(param_1 + 0x28c + (ulonglong)uVar5 * 0x20,4);
    uVar5 = uVar5 + 1;
  }
  return;
}

