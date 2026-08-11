/* Ghidra address: 01404eb0 */
/* Ghidra symbol: FUN_01404eb0 */


void FUN_01404eb0(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  
  FUN_00411a80(param_1,param_2);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x7b8));
  uVar1 = (**(code **)**(undefined8 **)(param_1 + 0x7a8))(*(undefined8 **)(param_1 + 0x7a8));
  FUN_004095f0(uVar1);
  FUN_007fc890(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

