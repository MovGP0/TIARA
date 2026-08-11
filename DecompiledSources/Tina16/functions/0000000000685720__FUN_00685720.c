/* Ghidra address: 00685720 */
/* Ghidra symbol: FUN_00685720 */


ulonglong FUN_00685720(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  bool bVar2;
  
  if (*(byte *)(param_1 + 0x54a) < 8) {
    bVar2 = ((int)CONCAT71((int7)((ulonglong)param_2 >> 8),1) << (*(byte *)(param_1 + 0x54a) & 0x1f)
            & 0x18U) != 0;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    uVar1 = (ulonglong)*(uint *)(param_1 + 0x4e8);
  }
  else {
    uVar1 = FUN_0064fca0(param_1,0x154,0,0);
  }
  return uVar1;
}

