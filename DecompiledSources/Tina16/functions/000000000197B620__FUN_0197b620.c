/* Ghidra address: 0197b620 */
/* Ghidra symbol: FUN_0197b620 */


void FUN_0197b620(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  
  FUN_00411a80(param_1,param_2);
  if (*(char *)(param_1 + 0x88) == '\0') {
    uVar1 = FUN_01881a60();
    FUN_018819b0(uVar1,param_1);
  }
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FUN_00410f20(*(longlong *)(param_1 + 0xf0));
  }
  if (*(longlong *)(param_1 + 0x138) != 0) {
    FUN_00452320(param_1 + 0x138);
  }
  FUN_004d23a0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

