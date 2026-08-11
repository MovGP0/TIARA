/* Ghidra address: 005ba9c0 */
/* Ghidra symbol: FUN_005ba9c0 */


undefined8 FUN_005ba9c0(longlong *param_1)

{
  undefined8 uVar1;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_20[0] = 0;
  if (*param_1 == DAT_02011f10) {
    FUN_0041ddd0(local_20,PTR_PTR_02004a68);
    uVar1 = FUN_0044d490(&PTR_FUN_00435700,1,local_20[0]);
    FUN_004134c0(uVar1);
  }
  FUN_005ba1c0(&local_10,-*param_1);
  FUN_00414480(local_20);
  return local_10;
}

