/* Ghidra address: 010bab80 */
/* Ghidra symbol: FUN_010bab80 */


undefined8 FUN_010bab80(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_010bb2c0(0,&PTR_FUN_010ba368,*(undefined4 *)((longlong)param_1 + 0xc),(int)param_1[2],
                       param_1[6]);
  (**(code **)(*param_1 + 0x48))(param_1,uVar1);
  return uVar1;
}

