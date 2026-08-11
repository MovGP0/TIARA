/* Ghidra address: 00bbb620 */
/* Ghidra symbol: FUN_00bbb620 */


void FUN_00bbb620(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  
  FUN_00411a80(param_1,param_2);
  if (*(longlong *)(param_1 + 0x10) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    FUN_00410f20(uVar1);
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0x18));
  FUN_004b1010(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

