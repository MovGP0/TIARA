/* Ghidra address: 008324f0 */
/* Ghidra symbol: FUN_008324f0 */


bool FUN_008324f0(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  
  bVar3 = false;
  iVar1 = FUN_00832450(param_1);
  if (-1 < iVar1) {
    uVar2 = FUN_008317e0(param_1,iVar1);
    if ((byte)uVar2 < 8) {
      bVar3 = ((int)CONCAT71((int7)((ulonglong)uVar2 >> 8),1) << ((byte)uVar2 & 0x1f) & 6U) != 0;
    }
    else {
      bVar3 = false;
    }
  }
  return bVar3;
}

