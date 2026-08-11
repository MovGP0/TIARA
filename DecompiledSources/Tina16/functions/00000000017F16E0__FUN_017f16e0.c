/* Ghidra address: 017f16e0 */
/* Ghidra symbol: FUN_017f16e0 */


void FUN_017f16e0(undefined8 param_1,undefined8 param_2,short *param_3,ushort param_4)

{
  char cVar1;
  
  if ((*param_3 == 0xd) && ((param_4 & 1) == 0)) {
    cVar1 = FUN_017f2bd0(param_1);
    if (cVar1 == '\0') {
      FUN_017f17c0(param_1,*PTR_DAT_020045a8);
    }
  }
  FUN_017f0950(param_1);
  return;
}

