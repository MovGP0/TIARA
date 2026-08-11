/* Ghidra address: 018af600 */
/* Ghidra symbol: FUN_018af600 */


void FUN_018af600(undefined8 param_1,undefined8 param_2,short *param_3)

{
  undefined8 uVar1;
  
  if (*param_3 == 0x1b) {
    FUN_018afcb0(param_1,param_1);
  }
  if (*param_3 == 0x7a) {
    FUN_018aff80(param_1);
  }
  if (*param_3 == 0x70) {
    uVar1 = FUN_0180bfb0();
    FUN_0180bbc0(uVar1,param_1);
  }
  return;
}

