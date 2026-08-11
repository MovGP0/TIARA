/* Ghidra address: 01cc3db0 */
/* Ghidra symbol: FUN_01cc3db0 */


void FUN_01cc3db0(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  
  FUN_00411a80(param_1,param_2);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  FUN_00410f20(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  FUN_00410f20(uVar1);
  if (param_1 == DAT_03566820) {
    DAT_03566820 = 0;
  }
  if (param_1 == DAT_03566828) {
    DAT_03566828 = 0;
  }
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

