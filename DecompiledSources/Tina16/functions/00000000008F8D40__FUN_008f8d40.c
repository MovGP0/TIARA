/* Ghidra address: 008f8d40 */
/* Ghidra symbol: FUN_008f8d40 */


undefined8 FUN_008f8d40(longlong param_1,int param_2)

{
  undefined8 uVar1;
  int local_20 [2];
  undefined1 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  if ((param_2 < 0) || (*(int *)(param_1 + 0xc) <= param_2)) {
    FUN_0041ddd0(&local_10,PTR_PTR_02005320);
    local_18 = 0;
    local_20[0] = param_2;
    uVar1 = FUN_0044d530(&PTR_FUN_00472398,1,local_10,local_20,0);
    FUN_004134c0(uVar1);
  }
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8 + (longlong)param_2 * 0x10);
  FUN_00414480(&local_10);
  return uVar1;
}

