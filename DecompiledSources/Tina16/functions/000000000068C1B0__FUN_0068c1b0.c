/* Ghidra address: 0068c1b0 */
/* Ghidra symbol: FUN_0068c1b0 */


void FUN_0068c1b0(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  bool bVar2;
  
  bVar1 = *(byte *)(param_1 + 0x4cc);
  if (bVar1 < 8) {
    bVar2 = ((int)CONCAT71((int7)((ulonglong)param_2 >> 8),1) << (bVar1 & 0x1f) & 0x18U) != 0;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    if (bVar1 == 3) {
      FUN_0068be70(param_1,0);
    }
    else if (bVar1 == 4) {
      FUN_0068be70(param_1,1);
    }
  }
  (**(code **)(**(longlong **)(param_1 + 0x4a0) + 0x10))(*(longlong **)(param_1 + 0x4a0),param_2);
  return;
}

