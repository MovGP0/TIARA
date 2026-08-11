/* Ghidra address: 0068b5c0 */
/* Ghidra symbol: FUN_0068b5c0 */


void FUN_0068b5c0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  bool bVar2;
  
  if (*(byte *)(param_1 + 0x4cc) < 8) {
    bVar2 = ((int)CONCAT71((int7)((ulonglong)param_2 >> 8),1) << (*(byte *)(param_1 + 0x4cc) & 0x1f)
            & 0x18U) != 0;
  }
  else {
    bVar2 = false;
  }
  if (!bVar2) {
    uVar1 = FUN_0065b870(param_1);
    thunk_FUN_041b2403(uVar1,0x184,0,0);
  }
  return;
}

