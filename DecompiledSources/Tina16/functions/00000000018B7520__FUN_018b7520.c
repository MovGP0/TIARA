/* Ghidra address: 018b7520 */
/* Ghidra symbol: FUN_018b7520 */


undefined8 FUN_018b7520(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x18))(param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = (**(code **)(*param_1 + 0x18))(param_1);
    uVar2 = FUN_018039f0(param_1[1],iVar1 + -1);
  }
  return uVar2;
}

