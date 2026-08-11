/* Ghidra address: 00788320 */
/* Ghidra symbol: FUN_00788320 */


void FUN_00788320(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  
  FUN_00411a80(param_1,param_2);
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_004d62f0(*(longlong *)(param_1 + 0x10));
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_00788060(*(longlong *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
    FUN_00410f20(uVar1);
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = 0;
    FUN_00410f20(uVar1);
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = 0;
    FUN_00410f20(uVar1);
  }
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

