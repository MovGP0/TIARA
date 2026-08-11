/* Ghidra address: 017b8e30 */
/* Ghidra symbol: FUN_017b8e30 */


undefined8 FUN_017b8e30(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_017b8a10(0,&PTR_FUN_017b8668,(short)param_1[7]);
  (**(code **)(*param_1 + 0x48))(param_1,uVar1);
  return uVar1;
}

