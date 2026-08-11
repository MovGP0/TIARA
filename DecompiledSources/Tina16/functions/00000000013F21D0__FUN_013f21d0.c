/* Ghidra address: 013f21d0 */
/* Ghidra symbol: FUN_013f21d0 */


void FUN_013f21d0(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  
  FUN_00411a80(param_1,param_2);
  uVar1 = (**(code **)**(undefined8 **)(param_1 + 0x758))(*(undefined8 **)(param_1 + 0x758));
  FUN_00418590(uVar1,&DAT_01cf1390);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x7c8));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x798));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x7a0));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x7a8));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x7b0));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x7b8));
  FUN_007fc890(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

