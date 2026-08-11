/* Ghidra address: 01bff810 */
/* Ghidra symbol: FUN_01bff810 */


void FUN_01bff810(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  
  FUN_00411a80(param_1,param_2);
  FUN_01c02120(param_1,0);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x4b0));
  uVar1 = *(undefined8 *)(param_1 + 0x528);
  *(undefined8 *)(param_1 + 0x528) = 0;
  FUN_00410f20(uVar1);
  FUN_00652b60(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

