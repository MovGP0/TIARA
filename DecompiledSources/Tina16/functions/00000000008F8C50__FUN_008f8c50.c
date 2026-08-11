/* Ghidra address: 008f8c50 */
/* Ghidra symbol: FUN_008f8c50 */


undefined8 FUN_008f8c50(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  int local_20 [2];
  undefined1 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  if ((param_3 < 0) || (*(int *)(param_1 + 0xc) <= param_3)) {
    FUN_0041ddd0(&local_10,PTR_PTR_02005320);
    local_18 = 0;
    local_20[0] = param_3;
    uVar1 = FUN_0044d530(&PTR_FUN_00472398,1,local_10,local_20,0);
    FUN_004134c0(uVar1);
  }
  FUN_00414b90(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x18) + (longlong)param_3 * 0x10));
  FUN_00414480(&local_10);
  return param_2;
}

