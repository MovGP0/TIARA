/* Ghidra address: 01979f50 */
/* Ghidra symbol: FUN_01979f50 */


void FUN_01979f50(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  
  FUN_00411a80(param_1,param_2);
  if (*(char *)(param_1 + 0xd0) == '\0') {
    uVar1 = FUN_0189d480();
    FUN_0189d730(uVar1,param_1);
  }
  FUN_01979a90(param_1);
  FUN_00452320(param_1 + 0xe0);
  FUN_004d23a0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

