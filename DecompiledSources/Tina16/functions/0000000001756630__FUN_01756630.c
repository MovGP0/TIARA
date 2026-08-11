/* Ghidra address: 01756630 */
/* Ghidra symbol: FUN_01756630 */


void FUN_01756630(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_00409e80(0xff);
  *(char *)(param_1 + 0x39) = cVar1;
  if (cVar1 != *(char *)(param_1 + 0x38)) {
    FUN_0173d100(param_1,param_2,*PTR_DAT_02002480,*PTR_DAT_02001560);
    FUN_0173d2c0(param_1,param_2);
  }
  return;
}

