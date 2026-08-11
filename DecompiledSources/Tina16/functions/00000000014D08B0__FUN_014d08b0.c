/* Ghidra address: 014d08b0 */
/* Ghidra symbol: FUN_014d08b0 */


byte FUN_014d08b0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  
  bVar2 = 0;
  iVar3 = 1;
  for (uVar4 = (uint)*(byte *)(param_1 + 0x18); uVar4 != 0; uVar4 = uVar4 - 1) {
    bVar1 = FUN_014d07a0(param_2,param_3,
                         *(undefined1 *)
                          (*(longlong *)(param_1 + 0x10) + -1 + (longlong)(iVar3 * 2 + -1)),
                         *(undefined1 *)(*(longlong *)(param_1 + 0x10) + -1 + (longlong)(iVar3 * 2))
                         ,*(undefined8 *)(*(longlong *)(param_1 + 0x20) + -8 + (longlong)iVar3 * 8),
                         *(undefined8 *)(*(longlong *)(param_1 + 0x28) + -8 + (longlong)iVar3 * 8));
    bVar2 = bVar2 | bVar1;
    iVar3 = iVar3 + 1;
  }
  return bVar2;
}

