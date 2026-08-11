/* Ghidra address: 0114ee40 */
/* Ghidra symbol: FUN_0114ee40 */


bool FUN_0114ee40(undefined8 param_1,int *param_2)

{
  uint uVar1;
  int *piVar2;
  bool bVar3;
  
  piVar2 = param_2;
  uVar1 = FUN_0114edd0();
  if (uVar1 < 0x10) {
    bVar3 = ((int)CONCAT62((int6)((ulonglong)piVar2 >> 0x10),1) << ((byte)uVar1 & 0x1f) & 0xfffU) !=
            0;
  }
  else {
    bVar3 = false;
  }
  if (bVar3) {
    *param_2 = 1 << ((byte)uVar1 & 0x1f);
  }
  return bVar3;
}

