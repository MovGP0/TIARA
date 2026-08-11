/* Ghidra address: 00a13900 */
/* Ghidra symbol: FUN_00a13900 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a13900(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  
  lVar4 = *(longlong *)(param_1 + 0x270);
  lVar2 = (*(code *)**(undefined8 **)(param_1 + 8))(param_1,1,0x7fc);
  *(longlong *)(lVar4 + 0x50) = lVar2 + 0x3fc;
  uVar1 = uRam0000000001e6f538;
  *(undefined8 *)(lVar2 + 0x3f0) = _DAT_01e6f530;
  *(undefined8 *)(lVar2 + 0x3f8) = uVar1;
  uVar1 = uRam0000000001e6f548;
  *(undefined8 *)(lVar2 + 0x400) = _DAT_01e6f540;
  *(undefined8 *)(lVar2 + 0x408) = uVar1;
  uVar1 = uRam0000000001e6f558;
  *(undefined8 *)(lVar2 + 0x3e0) = _DAT_01e6f550;
  *(undefined8 *)(lVar2 + 1000) = uVar1;
  uVar1 = uRam0000000001e6f568;
  *(undefined8 *)(lVar2 + 0x410) = _DAT_01e6f560;
  *(undefined8 *)(lVar2 + 0x418) = uVar1;
  uVar1 = uRam0000000001e6f578;
  *(undefined8 *)(lVar2 + 0x3d0) = _DAT_01e6f570;
  *(undefined8 *)(lVar2 + 0x3d8) = uVar1;
  uVar1 = uRam0000000001e6f588;
  *(undefined8 *)(lVar2 + 0x420) = _DAT_01e6f580;
  *(undefined8 *)(lVar2 + 0x428) = uVar1;
  *(undefined8 *)(lVar2 + 0x430) = 0xe0000000d;
  *(undefined4 *)(lVar2 + 0x438) = 0xf;
  uVar1 = uRam0000000001e6f598;
  *(undefined8 *)(lVar2 + 0x3c0) = _DAT_01e6f590;
  *(undefined8 *)(lVar2 + 0x3c8) = uVar1;
  iVar6 = 0x10;
  iVar7 = -0x10;
  lVar3 = 0;
  lVar4 = 0;
  do {
    lVar5 = lVar4;
    *(int *)(lVar2 + 0x43c + lVar5 * 4) = iVar6;
    *(int *)(lVar2 + 0x3bc + lVar3 * 2) = iVar7;
    *(int *)(lVar2 + 0x440 + lVar5 * 4) = iVar6;
    *(int *)(lVar2 + 0x3b8 + lVar3 * 2) = iVar7;
    iVar6 = iVar6 + 1;
    lVar4 = lVar5 + 2;
    lVar3 = lVar3 + -4;
    iVar7 = iVar7 + -1;
  } while (lVar5 + 0x11U < 0x2f);
  if ((int)lVar4 + 0x10 < 0x100) {
    lVar4 = 0xef - lVar4;
    lVar3 = lVar5 + 0x111;
    do {
      *(int *)(lVar2 + lVar3 * 4) = iVar6;
      *(int *)(lVar2 + lVar4 * 4) = iVar7;
      lVar5 = lVar3 + -0xff;
      lVar4 = lVar4 + -1;
      lVar3 = lVar3 + 1;
    } while (lVar5 < 0xff);
  }
  return;
}

