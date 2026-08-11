/* Ghidra address: 01bf9430 */
/* Ghidra symbol: FUN_01bf9430 */


longlong * FUN_01bf9430(longlong param_1,longlong *param_2)

{
  int iVar1;
  
  FUN_00414ad0(param_2,*(undefined8 *)(param_1 + 0x20));
  iVar1 = 0;
  if (*param_2 != 0) {
    iVar1 = *(int *)(*param_2 + -4);
  }
  if (iVar1 == 0) {
    if (*(longlong *)(param_1 + 0x18) == 0) {
      FUN_0041ddd0(param_2,PTR_PTR_02003b98);
    }
    else {
      FUN_00414ad0(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10));
    }
  }
  return param_2;
}

