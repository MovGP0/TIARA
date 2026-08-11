/* Ghidra address: 00af6190 */
/* Ghidra symbol: FUN_00af6190 */


undefined8 FUN_00af6190(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)PTR_DAT_020036e8 == 0) {
    uVar1 = FUN_0064c060(param_1);
  }
  else {
    uVar1 = *(undefined8 *)PTR_DAT_020036e8;
  }
  (**(code **)(*param_1 + 0x180))(param_1);
  return uVar1;
}

