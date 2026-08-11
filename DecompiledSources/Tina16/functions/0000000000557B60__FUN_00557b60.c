/* Ghidra address: 00557b60 */
/* Ghidra symbol: FUN_00557b60 */


undefined8 FUN_00557b60(longlong *param_1)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  bool bVar5;
  
  cVar1 = (**(code **)(*param_1 + 0x40))(param_1);
  if (cVar1 != '\0') {
    uVar3 = (**(code **)(*param_1 + 0x20))(param_1);
    if ((byte)uVar3 < 8) {
      uVar2 = (int)CONCAT71((int7)((ulonglong)uVar3 >> 8),1) << ((byte)uVar3 & 0x1f);
      bVar5 = (uVar2 & 0xf0) != 0;
      uVar4 = (ulonglong)CONCAT31((int3)(uVar2 >> 8),bVar5);
    }
    else {
      uVar4 = 0;
      bVar5 = false;
    }
    if (bVar5) {
      return CONCAT71((int7)(uVar4 >> 8),1);
    }
  }
  return 0;
}

