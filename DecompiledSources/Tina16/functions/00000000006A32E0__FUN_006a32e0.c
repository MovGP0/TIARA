/* Ghidra address: 006a32e0 */
/* Ghidra symbol: FUN_006a32e0 */


undefined8 FUN_006a32e0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x20) + -4);
  }
  if (iVar1 < 1) {
    FUN_004b18b0(param_1,param_2);
  }
  else {
    FUN_00414ad0(param_2,*(undefined8 *)(param_1 + 0x20));
  }
  return param_2;
}

