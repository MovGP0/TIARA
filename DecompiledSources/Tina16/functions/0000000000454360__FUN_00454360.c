/* Ghidra address: 00454360 */
/* Ghidra symbol: FUN_00454360 */


undefined2 FUN_00454360(longlong param_1,int param_2)

{
  undefined8 uVar1;
  wchar_t *local_28;
  undefined1 local_20;
  
  if (param_2 < 0) {
    local_28 = L"Index";
    local_20 = 0x11;
    uVar1 = FUN_0044d8d0(&PTR_FUN_004355d0,1,PTR_PTR_02005608,&local_28,0);
    FUN_004134c0(uVar1);
  }
  FUN_00453ab0(param_1,param_2);
  return *(undefined2 *)(*(longlong *)(param_1 + 8) + (longlong)param_2 * 2);
}

