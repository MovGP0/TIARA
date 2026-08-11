/* Ghidra address: 010b5840 */
/* Ghidra symbol: FUN_010b5840 */


undefined8 FUN_010b5840(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_010b5750(0,&PTR_FUN_010b5580,*(undefined4 *)((longlong)param_1 + 0xc),(int)param_1[2],
                       *(undefined1 *)((longlong)param_1 + 0x24),param_1[9]);
  (**(code **)(*param_1 + 0x48))(param_1,uVar1);
  return uVar1;
}

