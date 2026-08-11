/* Ghidra address: 00d73140 */
/* Ghidra symbol: FUN_00d73140 */


void FUN_00d73140(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  
  FUN_00411a80(param_1,param_2);
  FUN_00d73240(param_1);
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  *(undefined8 *)(param_1 + 0xd8) = 0;
  FUN_00410f20(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xd0) = 0;
  FUN_00410f20(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 200);
  *(undefined8 *)(param_1 + 200) = 0;
  FUN_00410f20(uVar1);
  FUN_00410f20(*(undefined8 *)(param_1 + 0xa0));
  FUN_00410f20(*(undefined8 *)(param_1 + 0xc0));
  FUN_00410f20(*(undefined8 *)(param_1 + 0xb8));
  FUN_004d23a0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

