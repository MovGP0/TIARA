/* Ghidra address: 018078f0 */
/* Ghidra symbol: FUN_018078f0 */


void FUN_018078f0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  (**(code **)(*param_1 + 0x38))(param_1,local_20);
  uVar2 = FUN_00415f70(local_20[0]);
  iVar1 = FUN_00414cc0(local_20[0]);
  FUN_004b89e0(param_2,uVar2,(longlong)(iVar1 * 2));
  FUN_00414520(local_20);
  return;
}

