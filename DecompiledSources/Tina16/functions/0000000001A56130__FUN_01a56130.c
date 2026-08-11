/* Ghidra address: 01a56130 */
/* Ghidra symbol: FUN_01a56130 */


void FUN_01a56130(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  if (*(longlong *)PTR_DAT_020024f0 == 0) {
    uVar1 = FUN_007fc180(&PTR_FUN_019d7198,1,*(undefined8 *)PTR_DAT_02004030);
    *(undefined8 *)PTR_DAT_020024f0 = uVar1;
    FUN_019d7940(*(undefined8 *)PTR_DAT_020024f0,param_2);
    FUN_008059a0(*(undefined8 *)PTR_DAT_020024f0);
  }
  else {
    FUN_019d7940(*(undefined8 *)PTR_DAT_020024f0,param_2);
    FUN_0064e1d0(*(undefined8 *)PTR_DAT_020024f0);
    uVar1 = FUN_0065b870(*(undefined8 *)PTR_DAT_020024f0);
    thunk_FUN_03ab0e43(uVar1,9);
  }
  FUN_00414560(&local_18,2);
  return;
}

