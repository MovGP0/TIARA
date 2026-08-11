/* Ghidra address: 01d2af10 */
/* Ghidra symbol: FUN_01d2af10 */


undefined8 FUN_01d2af10(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_20;
  undefined1 local_18 [16];
  
  local_20 = 0;
  if (*(longlong *)(param_1 + 8) == 0) {
    iVar1 = FUN_0043dc90(local_18);
    if (iVar1 == 0) {
      FUN_0043dec0(&local_20,local_18);
      FUN_00414ad0(param_1 + 8,local_20);
    }
  }
  FUN_00414ad0(param_2,*(undefined8 *)(param_1 + 8));
  FUN_00414480(&local_20);
  return param_2;
}

