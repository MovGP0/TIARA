/* Ghidra address: 00a5d220 */
/* Ghidra symbol: FUN_00a5d220 */


undefined8 FUN_00a5d220(longlong *param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00a52510(&PTR_FUN_00a4ffc0,1,*(undefined8 *)(param_3 + 0x10),(char)param_1[0x12]);
  FUN_00a529a0(uVar1,param_3);
  (**(code **)(*param_1 + 0x80))(param_1,param_2,uVar1);
  return uVar1;
}

