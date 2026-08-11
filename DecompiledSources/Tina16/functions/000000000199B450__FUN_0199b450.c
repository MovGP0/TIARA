/* Ghidra address: 0199b450 */
/* Ghidra symbol: FUN_0199b450 */


int FUN_0199b450(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_019954d0(param_1);
  uVar2 = FUN_00409570((longlong)((iVar1 + 1) * 8));
  *(undefined8 *)(param_1 + 0x3c8) = uVar2;
  uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(param_1 + 0x3b8) = uVar2;
  uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(param_1 + 0x3c0) = uVar2;
  return iVar1;
}

