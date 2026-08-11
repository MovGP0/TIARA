/* Ghidra address: 014d4dc0 */
/* Ghidra symbol: FUN_014d4dc0 */


void FUN_014d4dc0(longlong param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 0x18);
  FUN_004095f0(*(undefined8 *)(param_1 + 0x10),bVar1);
  iVar2 = ((uint)bVar1 + (uint)bVar1) * 4;
  FUN_004095f0(*(undefined8 *)(param_1 + 0x20),iVar2);
  FUN_004095f0(*(undefined8 *)(param_1 + 0x28),iVar2);
  FUN_004095f0(*(undefined8 *)(param_1 + 0x68),iVar2);
  FUN_004095f0(*(undefined8 *)(param_1 + 0x70),iVar2);
  return;
}

