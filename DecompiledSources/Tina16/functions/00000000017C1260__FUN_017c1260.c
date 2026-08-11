/* Ghidra address: 017c1260 */
/* Ghidra symbol: FUN_017c1260 */


undefined8 FUN_017c1260(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_017c0440(0,&PTR_FUN_017c0190,0,0,0,0,*(undefined1 *)((longlong)param_1 + 0x3d9));
  (**(code **)(*param_1 + 0x48))(param_1,uVar1);
  return uVar1;
}

