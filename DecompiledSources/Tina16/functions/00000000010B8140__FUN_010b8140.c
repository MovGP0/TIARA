/* Ghidra address: 010b8140 */
/* Ghidra symbol: FUN_010b8140 */


undefined8 FUN_010b8140(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_010b7590(0,&PTR_FUN_010b6978,*(undefined4 *)((longlong)param_1 + 0xc),(int)param_1[2],
                       param_1 + 5);
  (**(code **)(*param_1 + 0x48))(param_1,uVar1);
  return uVar1;
}

