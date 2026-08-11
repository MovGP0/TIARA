/* Ghidra address: 006f6890 */
/* Ghidra symbol: FUN_006f6890 */


undefined8 FUN_006f6890(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  bool bVar2;
  
  if (*(byte *)(param_1 + 0x4a1) < 8) {
    bVar2 = ((int)CONCAT71((int7)((ulonglong)param_2 >> 8),1) << (*(byte *)(param_1 + 0x4a1) & 0x1f)
            & 0xcU) != 0;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    uVar1 = FUN_0065b870(param_1);
    uVar1 = thunk_FUN_041b2403(uVar1,0x1028,0,0);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

