/* Ghidra address: 01768e50 */
/* Ghidra symbol: FUN_01768e50 */


longlong FUN_01768e50(longlong param_1,undefined8 param_2)

{
  short sVar1;
  undefined8 local_res10 [3];
  longlong local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_18 = *(longlong *)(param_1 + 0x68);
  if (local_18 == 0) {
    FUN_00416ba0(&local_10,local_res10[0],*(undefined8 *)(param_1 + 0x40));
    sVar1 = FUN_00c40790(*(undefined8 *)PTR_DAT_02004440,local_10);
    if (sVar1 != -1) {
      local_18 = FUN_004aeac0(*(undefined8 *)PTR_DAT_02004440,(int)sVar1);
    }
  }
  FUN_00414480(&local_10);
  FUN_00414480(local_res10);
  return local_18;
}

