/* Ghidra address: 013f99a0 */
/* Ghidra symbol: FUN_013f99a0 */


void FUN_013f99a0(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  
  FUN_00411a80(param_1,param_2);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x720));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x718));
  uVar1 = (**(code **)**(undefined8 **)(param_1 + 0x708))(*(undefined8 **)(param_1 + 0x708));
  FUN_004095f0(uVar1);
  uVar1 = (**(code **)**(undefined8 **)(param_1 + 0x710))(*(undefined8 **)(param_1 + 0x710));
  FUN_004095f0(uVar1);
  FUN_007fc890(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

