/* Ghidra address: 01959f60 */
/* Ghidra symbol: FUN_01959f60 */


void FUN_01959f60(longlong param_1,longlong param_2)

{
  byte bVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  bool bVar4;
  
  uVar3 = (ulonglong)*(uint *)(param_2 + 0x10);
  FUN_005fd4e0(*(undefined8 *)(*(longlong *)(param_1 + 0x88) + 0x78),uVar3);
  bVar1 = *(byte *)(param_2 + 0x14);
  if (bVar1 < 8) {
    bVar4 = ((int)CONCAT71((int7)(uVar3 >> 8),1) << (bVar1 & 0x1f) & 0x21U) != 0;
  }
  else {
    bVar4 = false;
  }
  if (bVar4) {
    FUN_005fd670(*(undefined8 *)(*(longlong *)(param_1 + 0x88) + 0x78),0);
    uVar2 = FUN_0040c770(*(double *)(param_2 + 0x18) * *(double *)(param_1 + 0xb0));
    FUN_005fd6d0(*(undefined8 *)(*(longlong *)(param_1 + 0x88) + 0x78),uVar2);
  }
  else {
    FUN_005fd670(*(undefined8 *)(*(longlong *)(param_1 + 0x88) + 0x78),bVar1);
    FUN_005fd6d0(*(undefined8 *)(*(longlong *)(param_1 + 0x88) + 0x78),1);
  }
  return;
}

