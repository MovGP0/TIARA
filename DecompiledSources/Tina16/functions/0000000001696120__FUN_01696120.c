/* Ghidra address: 01696120 */
/* Ghidra symbol: FUN_01696120 */


void FUN_01696120(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  
  FUN_00411a80(param_1,param_2);
  uVar1 = (**(code **)**(undefined8 **)(param_1 + 0x38))(*(undefined8 **)(param_1 + 0x38));
  FUN_004095f0(uVar1);
  FUN_01695a40(param_1);
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

