/* Ghidra address: 01884a40 */
/* Ghidra symbol: FUN_01884a40 */


void FUN_01884a40(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x78);
  *(undefined8 *)(lVar1 + 8) = 0;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  FUN_005fcd80(lVar1,L"Courier New");
  FUN_005fce30(*(undefined8 *)(param_1 + 0x78),0xc);
  FUN_005fce70(*(undefined8 *)(param_1 + 0x78),0);
  if ((*(ushort *)(param_1 + 0x250) & 1) != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x78);
    uVar3 = FUN_005fce60(uVar2);
    FUN_005fce70(uVar2,uVar3 | 1);
  }
  if ((*(ushort *)(param_1 + 0x250) & 2) != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x78);
    uVar3 = FUN_005fce60(uVar2);
    FUN_005fce70(uVar2,uVar3 | 2);
  }
  if ((*(ushort *)(param_1 + 0x250) & 4) != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x78);
    uVar3 = FUN_005fce60(uVar2);
    FUN_005fce70(uVar2,uVar3 | 4);
  }
  return;
}

