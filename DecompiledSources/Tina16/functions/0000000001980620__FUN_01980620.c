/* Ghidra address: 01980620 */
/* Ghidra symbol: FUN_01980620 */


void FUN_01980620(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  
  FUN_00411a80(param_1,param_2);
  FUN_019803c0(param_1);
  uVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x10),0);
  FUN_00410f20(uVar1);
  FUN_00452320(param_1 + 0x10);
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

