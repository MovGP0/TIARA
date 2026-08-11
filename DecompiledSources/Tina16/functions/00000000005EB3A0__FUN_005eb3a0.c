/* Ghidra address: 005eb3a0 */
/* Ghidra symbol: FUN_005eb3a0 */


undefined8 FUN_005eb3a0(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(param_1 + 0x10);
  if ((uVar1 < 0xffffffff80000000) || (0xffffffff80000006 < uVar1)) {
    FUN_00414480(param_2);
  }
  else {
    FUN_00414ad0(param_2,*(undefined8 *)(uVar1 * 8 + 0x401deac78));
  }
  return param_2;
}

