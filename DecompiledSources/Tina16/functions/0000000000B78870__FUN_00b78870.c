/* Ghidra address: 00b78870 */
/* Ghidra symbol: FUN_00b78870 */


void FUN_00b78870(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  int iVar5;
  
  FUN_0040d200(param_1 + 0x98,0x68,0);
  FUN_00409a70(param_2,param_1 + 0x98,(param_3 & 0xffffffff) / 8);
  iVar5 = 0;
  do {
    uVar1 = *(ushort *)(param_1 + 0x98 + (longlong)iVar5 * 2);
    *(ushort *)(param_1 + 0x98 + (longlong)iVar5 * 2) = uVar1 << 8 | uVar1 >> 8;
    iVar5 = iVar5 + 1;
  } while (iVar5 != 8);
  iVar5 = 1;
  do {
    iVar2 = (iVar5 + -1) * 8;
    iVar3 = iVar5 * 8;
    *(ushort *)(param_1 + 0x98 + (longlong)iVar3 * 2) =
         *(short *)(param_1 + 0x98 + (longlong)(iVar2 + 1) * 2) << 9 |
         *(ushort *)(param_1 + 0x98 + (longlong)(iVar2 + 2) * 2) >> 7;
    *(ushort *)(param_1 + 0x98 + (longlong)(iVar3 + 1) * 2) =
         *(short *)(param_1 + 0x98 + (longlong)(iVar2 + 2) * 2) << 9 |
         *(ushort *)(param_1 + 0x98 + (longlong)(iVar2 + 3) * 2) >> 7;
    *(ushort *)(param_1 + 0x98 + (longlong)(iVar3 + 2) * 2) =
         *(short *)(param_1 + 0x98 + (longlong)(iVar2 + 3) * 2) << 9 |
         *(ushort *)(param_1 + 0x98 + (longlong)(iVar2 + 4) * 2) >> 7;
    *(ushort *)(param_1 + 0x98 + (longlong)(iVar3 + 3) * 2) =
         *(short *)(param_1 + 0x98 + (longlong)(iVar2 + 4) * 2) << 9 |
         *(ushort *)(param_1 + 0x98 + (longlong)(iVar2 + 5) * 2) >> 7;
    *(ushort *)(param_1 + 0x98 + (longlong)(iVar3 + 4) * 2) =
         *(short *)(param_1 + 0x98 + (longlong)(iVar2 + 5) * 2) << 9 |
         *(ushort *)(param_1 + 0x98 + (longlong)(iVar2 + 6) * 2) >> 7;
    *(ushort *)(param_1 + 0x98 + (longlong)(iVar3 + 5) * 2) =
         *(short *)(param_1 + 0x98 + (longlong)(iVar2 + 6) * 2) << 9 |
         *(ushort *)(param_1 + 0x98 + (longlong)(iVar2 + 7) * 2) >> 7;
    *(ushort *)(param_1 + 0x98 + (longlong)(iVar3 + 6) * 2) =
         *(short *)(param_1 + 0x98 + (longlong)(iVar2 + 7) * 2) << 9 |
         *(ushort *)(param_1 + 0x98 + (longlong)iVar2 * 2) >> 7;
    *(ushort *)(param_1 + 0x98 + (longlong)(iVar3 + 7) * 2) =
         *(short *)(param_1 + 0x98 + (longlong)iVar2 * 2) << 9 |
         *(ushort *)(param_1 + 0x98 + (longlong)(iVar2 + 1) * 2) >> 7;
    iVar5 = iVar5 + 1;
  } while (iVar5 != 6);
  *(ushort *)(param_1 + 0xf8) = *(short *)(param_1 + 0xea) << 9 | *(ushort *)(param_1 + 0xec) >> 7;
  *(ushort *)(param_1 + 0xfa) = *(short *)(param_1 + 0xec) << 9 | *(ushort *)(param_1 + 0xee) >> 7;
  *(ushort *)(param_1 + 0xfc) = *(short *)(param_1 + 0xee) << 9 | *(ushort *)(param_1 + 0xf0) >> 7;
  *(ushort *)(param_1 + 0xfe) = *(short *)(param_1 + 0xf0) << 9 | *(ushort *)(param_1 + 0xf2) >> 7;
  uVar4 = FUN_00b787c0(*(undefined2 *)(param_1 + 0x9e));
  *(undefined2 *)(param_1 + 0x166) = uVar4;
  *(short *)(param_1 + 0x164) = -*(short *)(param_1 + 0x9c);
  *(short *)(param_1 + 0x162) = -*(short *)(param_1 + 0x9a);
  uVar4 = FUN_00b787c0(*(undefined2 *)(param_1 + 0x98));
  *(undefined2 *)(param_1 + 0x160) = uVar4;
  iVar5 = 0;
  do {
    iVar2 = iVar5 * 6;
    *(undefined2 *)(param_1 + 0x100 + (longlong)(iVar5 * -6 + 0x2f) * 2) =
         *(undefined2 *)(param_1 + 0x98 + (longlong)(iVar2 + 5) * 2);
    *(undefined2 *)(param_1 + 0x100 + (longlong)(iVar5 * -6 + 0x2e) * 2) =
         *(undefined2 *)(param_1 + 0x98 + (longlong)(iVar2 + 4) * 2);
    uVar4 = FUN_00b787c0(*(undefined2 *)(param_1 + 0x98 + (longlong)(iVar2 + 9) * 2));
    *(undefined2 *)(param_1 + 0x100 + (longlong)(iVar5 * -6 + 0x2d) * 2) = uVar4;
    *(short *)(param_1 + 0x100 + (longlong)(iVar5 * -6 + 0x2c) * 2) =
         -*(short *)(param_1 + 0x98 + (longlong)(iVar2 + 7) * 2);
    *(short *)(param_1 + 0x100 + (longlong)(iVar5 * -6 + 0x2b) * 2) =
         -*(short *)(param_1 + 0x98 + (longlong)(iVar2 + 8) * 2);
    uVar4 = FUN_00b787c0(*(undefined2 *)(param_1 + 0x98 + (longlong)(iVar2 + 6) * 2));
    *(undefined2 *)(param_1 + 0x100 + (longlong)(iVar5 * -6 + 0x2a) * 2) = uVar4;
    iVar5 = iVar5 + 1;
  } while (iVar5 != 7);
  *(undefined2 *)(param_1 + 0x10a) = *(undefined2 *)(param_1 + 0xf6);
  *(undefined2 *)(param_1 + 0x108) = *(undefined2 *)(param_1 + 0xf4);
  uVar4 = FUN_00b787c0(*(undefined2 *)(param_1 + 0xfe));
  *(undefined2 *)(param_1 + 0x106) = uVar4;
  *(short *)(param_1 + 0x104) = -*(short *)(param_1 + 0xfc);
  *(short *)(param_1 + 0x102) = -*(short *)(param_1 + 0xfa);
  uVar4 = FUN_00b787c0(*(undefined2 *)(param_1 + 0xf8));
  *(undefined2 *)(param_1 + 0x100) = uVar4;
  return;
}

