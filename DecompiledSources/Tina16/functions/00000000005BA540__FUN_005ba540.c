/* Ghidra address: 005ba540 */
/* Ghidra symbol: FUN_005ba540 */


undefined8 FUN_005ba540(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_20[0] = 0;
  if (*param_1 == DAT_02011f10) {
    FUN_0041ddd0(local_20,PTR_PTR_02003cc0);
    uVar2 = FUN_0044d490(&PTR_FUN_00435700,1,local_20[0]);
    FUN_004134c0(uVar2);
  }
  lVar1 = *param_1;
  if (lVar1 < 0) {
    FUN_005ba1c0(&local_10,-lVar1);
  }
  else {
    FUN_005ba1c0(&local_10,lVar1);
  }
  FUN_00414480(local_20);
  return local_10;
}

