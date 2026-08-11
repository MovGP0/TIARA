/* Ghidra address: 00c54760 */
/* Ghidra symbol: FUN_00c54760 */


undefined8 FUN_00c54760(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00c54610(0,&PTR_FUN_00c54448,*(undefined4 *)((longlong)param_1 + 0xc),(int)param_1[2])
  ;
  (**(code **)(*param_1 + 0x48))(param_1,uVar1);
  return uVar1;
}

