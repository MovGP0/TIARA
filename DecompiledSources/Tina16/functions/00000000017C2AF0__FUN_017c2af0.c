/* Ghidra address: 017c2af0 */
/* Ghidra symbol: FUN_017c2af0 */


undefined4 FUN_017c2af0(longlong param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_017c3740(param_1);
  if (cVar1 == '\0') {
    uVar2 = 0xffffffff;
    if ((param_2 < 2) && (uVar2 = 0xffffffff, -1 < param_2)) {
      uVar2 = *(undefined4 *)(param_1 + 0x9c + (longlong)param_2 * 0x10c);
    }
  }
  else {
    uVar2 = 99999;
  }
  return uVar2;
}

