/* Ghidra address: 004bd580 */
/* Ghidra symbol: FUN_004bd580 */


ulonglong FUN_004bd580(longlong param_1)

{
  longlong lVar1;
  ushort *puVar2;
  ushort *puVar3;
  ulonglong uVar4;
  bool bVar5;
  
  uVar4 = 0;
  puVar2 = (ushort *)FUN_00416740(*(undefined8 *)(param_1 + 0x28));
  puVar3 = puVar2;
  while( true ) {
    if (*puVar3 < 0x40) {
      bVar5 = (1L << ((byte)*puVar3 & 0x3f) & 0x400000000001U) != 0;
    }
    else {
      bVar5 = false;
    }
    if (bVar5) break;
    puVar3 = puVar3 + 1;
  }
  if (*puVar3 != 0) {
    lVar1 = (longlong)puVar3 - (longlong)puVar2;
    FUN_00414740(param_1 + 0x20,puVar2,lVar1 / 2 & 0xffffffff);
    FUN_00416e20(param_1 + 0x28,1,lVar1 / 2 + 1U & 0xffffffff);
    uVar4 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar4 & 0xffffffff;
}

