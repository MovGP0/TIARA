/* Ghidra address: 007facc0 */
/* Ghidra symbol: FUN_007facc0 */


void FUN_007facc0(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  
  FUN_00411a80(param_1,param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x498);
  *(undefined8 *)(param_1 + 0x498) = 0;
  FUN_00410f20(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x4b0);
  *(undefined8 *)(param_1 + 0x4b0) = 0;
  FUN_00410f20(uVar1);
  FUN_00652b60(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

