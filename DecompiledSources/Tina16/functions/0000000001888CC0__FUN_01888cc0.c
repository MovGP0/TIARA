/* Ghidra address: 01888cc0 */
/* Ghidra symbol: FUN_01888cc0 */


void FUN_01888cc0(longlong param_1,byte param_2)

{
  int iVar1;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  FUN_00411a80(param_1,param_2);
  FUN_0043f750(local_20,*(undefined4 *)(param_1 + 0x30));
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0xb0))
                    (*(longlong **)(param_1 + 0x18),local_20[0]);
  if (-1 < iVar1) {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x98))(*(longlong **)(param_1 + 0x18),iVar1);
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x18) = 0;
  FUN_00452320(param_1 + 0x20);
  FUN_00410ef0(param_1,param_2 & 0xfc);
  FUN_00414480(local_20);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

