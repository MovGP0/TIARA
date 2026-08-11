/* Ghidra address: 00667b30 */
/* Ghidra symbol: FUN_00667b30 */


void FUN_00667b30(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  
  FUN_00411a80(param_1,param_2);
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_00667f40(param_1,0);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  FUN_00410f20(uVar1);
  FUN_004b1010(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

