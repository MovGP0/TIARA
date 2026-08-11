/* Ghidra address: 00bb2f80 */
/* Ghidra symbol: FUN_00bb2f80 */


void FUN_00bb2f80(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  
  FUN_00411a80(param_1,param_2);
  FUN_00410f20(*(undefined8 *)(param_1 + 0xb8));
  FUN_0041b800(param_1 + 0x60);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  FUN_00410f20(uVar1);
  FUN_00bae320(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

