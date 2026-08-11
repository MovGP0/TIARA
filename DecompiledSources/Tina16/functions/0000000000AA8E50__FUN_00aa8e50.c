/* Ghidra address: 00aa8e50 */
/* Ghidra symbol: FUN_00aa8e50 */


undefined8 FUN_00aa8e50(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00aa8e90(&PTR_FUN_00a8c220,1,*(undefined4 *)((longlong)param_1 + 0xc));
  (**(code **)(*param_1 + 0x20))(param_1,uVar1);
  return uVar1;
}

