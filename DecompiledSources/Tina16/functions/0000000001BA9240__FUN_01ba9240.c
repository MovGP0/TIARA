/* Ghidra address: 01ba9240 */
/* Ghidra symbol: FUN_01ba9240 */


void FUN_01ba9240(undefined8 param_1,uint param_2)

{
  undefined8 uVar1;
  
  FUN_00411a80(param_1,param_2);
  uVar1 = *(undefined8 *)PTR_DAT_02002a68;
  *(undefined8 *)PTR_DAT_02002a68 = 0;
  FUN_00410f20(uVar1);
  FUN_004b1010(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

