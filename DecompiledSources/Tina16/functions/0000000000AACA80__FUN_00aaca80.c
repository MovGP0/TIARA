/* Ghidra address: 00aaca80 */
/* Ghidra symbol: FUN_00aaca80 */


void FUN_00aaca80(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  
  FUN_00411a80(param_1,param_2);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x168));
  FUN_00410f20(*(undefined8 *)(param_1 + 0xb0));
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  *(undefined8 *)(param_1 + 0xd8) = 0;
  FUN_00410f20(uVar1);
  FUN_00a93170(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

