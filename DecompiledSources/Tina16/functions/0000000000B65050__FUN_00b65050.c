/* Ghidra address: 00b65050 */
/* Ghidra symbol: FUN_00b65050 */


void FUN_00b65050(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ushort uVar7;
  ushort uVar8;
  
  lVar2 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x18) + 8),
                       *(undefined4 *)(param_1 + 0x48));
  if (*(short *)(lVar2 + 0x85) == 0) {
    lVar2 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x18) + 8),
                         *(undefined4 *)(param_1 + 0x48));
    if (*(char *)(lVar2 + 0x87) == '\0') {
      bVar1 = false;
      goto LAB_00b650b2;
    }
  }
  bVar1 = true;
LAB_00b650b2:
  FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),0x23e);
  FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),0x12);
  uVar7 = 0;
  if (bVar1) {
    uVar7 = 0x108;
  }
  lVar2 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x18) + 8),
                       *(undefined4 *)(param_1 + 0x48));
  lVar3 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x18) + 8),
                       *(undefined4 *)(param_1 + 0x48));
  lVar4 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x18) + 8),
                       *(undefined4 *)(param_1 + 0x48));
  lVar5 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x18) + 8),
                       *(undefined4 *)(param_1 + 0x48));
  lVar6 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x18) + 8),
                       *(undefined4 *)(param_1 + 0x48));
  uVar7 = uVar7 | (ushort)*(byte *)(lVar2 + 0x81) * 2 | (ushort)*(byte *)(lVar3 + 0x83) * 4 |
          (ushort)*(byte *)(lVar4 + 0x84) << 4 | (ushort)*(byte *)(lVar5 + 0x82) << 6 | 0x420 |
          (ushort)*(byte *)(lVar6 + 0x8a) << 0xb;
  uVar8 = uVar7 | 0x80;
  if (*(int *)(param_1 + 0x48) == 0) {
    uVar8 = uVar7 | 0x280;
  }
  FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),uVar8);
  FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),0);
  FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),0);
  FUN_00b62d00(*(undefined8 *)(param_1 + 0x40),0);
  FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),0);
  FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),0);
  FUN_00b62d00(*(undefined8 *)(param_1 + 0x40),0);
  lVar2 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x18) + 8),
                       *(undefined4 *)(param_1 + 0x48));
  if (*(char *)(lVar2 + 0x89) != 'd') {
    FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),0xa0);
    FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),4);
    lVar2 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x18) + 8),
                         *(undefined4 *)(param_1 + 0x48));
    FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),*(undefined1 *)(lVar2 + 0x89));
    FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),100);
  }
  return;
}

