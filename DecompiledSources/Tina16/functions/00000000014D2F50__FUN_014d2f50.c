/* Ghidra address: 014d2f50 */
/* Ghidra symbol: FUN_014d2f50 */


void FUN_014d2f50(longlong param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 0x18);
  FUN_004095f0(*(undefined8 *)(param_1 + 0x10),bVar1);
  iVar2 = ((uint)bVar1 + (uint)bVar1) * 4;
  FUN_004095f0(*(undefined8 *)(param_1 + 0x20),iVar2);
  FUN_004095f0(*(undefined8 *)(param_1 + 0x28),iVar2);
  FUN_004095f0(*(undefined8 *)(param_1 + 0xb0),iVar2);
  FUN_004095f0(*(undefined8 *)(param_1 + 0xb8),iVar2);
  return;
}

