/* Ghidra address: 01bf8720 */
/* Ghidra symbol: FUN_01bf8720 */


bool FUN_01bf8720(longlong param_1)

{
  int iVar1;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  (**(code **)(**(longlong **)(param_1 + 0x158) + 0x38))(*(longlong **)(param_1 + 0x158),local_20);
  iVar1 = FUN_0043e6d0(PTR_u_0_3_1_3_2_6_3_9_4_12_5_12_6_17_7_01fe2170,local_20[0]);
  FUN_00414480(local_20);
  return iVar1 != 0;
}

