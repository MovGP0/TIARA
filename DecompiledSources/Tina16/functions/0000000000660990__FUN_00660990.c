/* Ghidra address: 00660990 */
/* Ghidra symbol: FUN_00660990 */


undefined8 FUN_00660990(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_00414480(param_2);
  if (*(longlong *)(param_1 + 8) != 0) {
    if (*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) == 0) {
      uVar1 = FUN_0044d710(&PTR_FUN_004334c0,1,PTR_PTR_020033e8);
      FUN_004134c0(uVar1);
    }
    FUN_00414ad0(param_2,*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x10));
  }
  return param_2;
}

