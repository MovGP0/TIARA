/* Ghidra address: 013a5290 */
/* Ghidra symbol: FUN_013a5290 */


void FUN_013a5290(undefined8 param_1,int param_2)

{
  longlong lVar1;
  undefined8 local_108;
  undefined8 local_100 [2];
  undefined1 local_ea [202];
  undefined8 local_20 [2];
  
  local_108 = 0;
  local_100[0] = 0;
  local_20[0] = 0;
  FUN_00442620(local_ea,L"WinSupClass");
  lVar1 = thunk_FUN_0413ebab(local_ea,0);
  if ((lVar1 == 0) || (param_2 != 1)) {
    FUN_0043f750(local_100,param_2);
    FUN_00416cd0(local_20,3,L"[SetApplicationSizeType(",local_100[0],&LAB_013a54c0);
    FUN_013a40d0(param_1,local_20);
  }
  else {
    FUN_0043f750(&local_108,1);
    FUN_00416cd0(local_20,3,L"[SetApplicationSizeType(",local_108,&LAB_013a54c0);
    FUN_013a40d0(param_1,local_20);
    thunk_FUN_041775c2(lVar1);
  }
  if ((*(longlong *)PTR_DAT_02002da0 != 0) &&
     ((*(ushort *)(*(longlong *)PTR_DAT_02002da0 + 0x34) & 8) == 0)) {
    if (param_2 == 0) {
      FUN_0080ac80(*(undefined8 *)PTR_DAT_02004030);
      FUN_007fdf50(*(undefined8 *)PTR_DAT_02002da0,1);
    }
    else if (param_2 == 1) {
      FUN_0080abe0(*(undefined8 *)PTR_DAT_02004030);
      FUN_007fdf50(*(undefined8 *)PTR_DAT_02002da0,0);
    }
  }
  FUN_00414560(&local_108,2);
  FUN_00414480(local_20);
  return;
}

