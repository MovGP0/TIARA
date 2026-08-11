/* Ghidra address: 007031f0 */
/* Ghidra symbol: FUN_007031f0 */


void FUN_007031f0(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_00655080(param_1);
  FUN_0064fca0(param_1,0xb00d,0,0);
  if (*(longlong *)(param_1 + 0x498) != 0) {
    uVar1 = FUN_0065b870(*(longlong *)(param_1 + 0x498));
    FUN_0064fca0(param_1,0x1401,0,uVar1);
  }
  FUN_0064fca0(param_1,0x140a,0,(longlong)*(int *)(param_1 + 0x494));
  FUN_0064fca0(param_1,0x1406,0,(longlong)*(int *)(param_1 + 0x4a4));
  FUN_0064fca0(param_1,0x1408,0,(longlong)*(int *)(param_1 + 0x4ac));
  FUN_0064fca0(param_1,0x1402,0,0);
  return;
}

