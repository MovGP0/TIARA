/* Ghidra address: 019a1f60 */
/* Ghidra symbol: FUN_019a1f60 */


undefined8 FUN_019a1f60(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  bool bVar2;
  bool bVar3;
  
  bVar2 = (*(byte *)(param_1 + 0x1f) & 4) != 0;
  bVar3 = (*(byte *)(param_2 + 0x1f) & 4) != 0;
  if (bVar2 == bVar3) {
    uVar1 = 0;
  }
  else if (!bVar3 || bVar2) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

