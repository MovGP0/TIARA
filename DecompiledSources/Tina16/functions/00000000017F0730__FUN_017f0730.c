/* Ghidra address: 017f0730 */
/* Ghidra symbol: FUN_017f0730 */


void FUN_017f0730(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_00410f20(*(undefined8 *)(param_1 + 0xb18));
  FUN_00410f20(*(undefined8 *)(param_1 + 0xb20));
  FUN_00410f20(*(undefined8 *)(param_1 + 0xb48));
  uVar1 = (**(code **)**(undefined8 **)(param_1 + 0xb38))(*(undefined8 **)(param_1 + 0xb38));
  FUN_004095f0(uVar1);
  FUN_00410f20(*(undefined8 *)PTR_DAT_020025d8);
  *(undefined8 *)PTR_DAT_020025d8 = 0;
  FUN_00410f20(*(undefined8 *)(param_1 + 0xb50));
  DAT_02110128 = 0;
  return;
}

