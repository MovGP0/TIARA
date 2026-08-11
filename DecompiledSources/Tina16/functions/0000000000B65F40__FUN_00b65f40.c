/* Ghidra address: 00b65f40 */
/* Ghidra symbol: FUN_00b65f40 */


void FUN_00b65f40(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  undefined1 local_39 [9];
  
  lVar7 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x18) + 8),
                       *(undefined4 *)(param_1 + 0x48));
  uVar3 = *(undefined8 *)(lVar7 + 0x18);
  iVar4 = FUN_00b4e330();
  iVar8 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar7 = FUN_00b52d40(uVar3,iVar8);
      iVar1 = *(int *)(lVar7 + 0x20);
      iVar2 = *(int *)(*(longlong *)(param_1 + 0x40) + 0xa0);
      FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),0x7d);
      FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),0xb);
      FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),*(undefined2 *)(lVar7 + 0x3e));
      FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),*(undefined2 *)(lVar7 + 0x3e));
      uVar5 = FUN_00b1bc50(*(undefined8 *)(lVar7 + 0x30));
      FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),uVar5);
      FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),iVar1 + iVar2);
      uVar6 = (uint)(*(byte *)(lVar7 + 0x28) & 7) << 8;
      if (*(char *)(lVar7 + 0x3c) != '\0') {
        uVar6 = uVar6 | 1;
      }
      FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),uVar6);
      local_39[0] = 0;
      FUN_00b62d20(*(undefined8 *)(param_1 + 0x40),local_39,1);
      iVar8 = iVar8 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

