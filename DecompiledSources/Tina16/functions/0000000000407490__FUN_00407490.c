/* Ghidra address: 00407490 */
/* Ghidra symbol: FUN_00407490 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407490(undefined8 *param_1)

{
  uint *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  
  plVar2 = (longlong *)param_1[1];
  plVar3 = (longlong *)*param_1;
  *plVar2 = (longlong)plVar3;
  plVar3[1] = (longlong)plVar2;
  if (plVar2 == plVar3) {
    uVar5 = (int)plVar2 + 0xfdff93c0;
    uVar6 = uVar5 >> 9;
    bVar4 = (byte)(uVar5 >> 4) & 0x1f;
    puVar1 = &DAT_02006bc0 + uVar6;
    *puVar1 = *puVar1 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
    if (*puVar1 == 0) {
      bVar4 = (byte)uVar6 & 0x1f;
      _DAT_02006bbc = _DAT_02006bbc & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
    }
  }
  return;
}

