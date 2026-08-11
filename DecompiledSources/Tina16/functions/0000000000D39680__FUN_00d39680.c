/* Ghidra address: 00d39680 */
/* Ghidra symbol: FUN_00d39680 */


void FUN_00d39680(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  
  FUN_00411a80(param_1,param_2);
  if (*(longlong *)(param_1 + 0x70) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x70) = 0;
    FUN_00410f20(uVar1);
  }
  FUN_00419430(&DAT_0201a180,&DAT_00d39648);
  FUN_00419430(&DAT_0201a180,&DAT_00d39648);
  FUN_00788320(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

