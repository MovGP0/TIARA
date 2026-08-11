/* Ghidra address: 00cbf6f0 */
/* Ghidra symbol: FUN_00cbf6f0 */


bool FUN_00cbf6f0(longlong param_1,uint param_2)

{
  uint uVar1;
  bool bVar2;
  
  if (param_1 == 0) {
    bVar2 = true;
  }
  else {
    uVar1 = FUN_00cbfa30();
    bVar2 = uVar1 < param_2;
  }
  return bVar2;
}

