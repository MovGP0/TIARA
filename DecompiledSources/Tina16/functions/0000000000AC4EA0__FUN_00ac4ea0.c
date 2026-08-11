/* Ghidra address: 00ac4ea0 */
/* Ghidra symbol: FUN_00ac4ea0 */


undefined4 FUN_00ac4ea0(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  bool bVar2;
  
  if (*(byte *)(param_1 + 0x4c) < 8) {
    bVar2 = ((int)CONCAT71((int7)((ulonglong)param_2 >> 8),1) << (*(byte *)(param_1 + 0x4c) & 0x1f)
            & 0xcU) != 0;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x88);
  }
  return uVar1;
}

