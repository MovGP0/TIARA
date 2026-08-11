/* Ghidra address: 0080f350 */
/* Ghidra symbol: FUN_0080f350 */


undefined8 FUN_0080f350(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(DAT_02012670 + 0xd0);
  if ((lVar1 == 0) || (*(longlong *)(lVar1 + 0x4e8) == 0)) {
    FUN_00414ad0(param_2,*(undefined8 *)(param_1 + 0xc0));
  }
  else {
    FUN_00414ad0(param_2,*(undefined8 *)(lVar1 + 0x4e8));
  }
  return param_2;
}

