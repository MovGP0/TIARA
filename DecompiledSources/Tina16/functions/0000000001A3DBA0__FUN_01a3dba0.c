/* Ghidra address: 01a3dba0 */
/* Ghidra symbol: FUN_01a3dba0 */


void FUN_01a3dba0(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined8 local_res8 [4];
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  bVar3 = DAT_01fc7b70 != 0;
  if (bVar3) {
    FUN_0064e1d0(DAT_01fc7b70);
    uVar2 = FUN_0065b870(DAT_01fc7b70);
    thunk_FUN_03ab0e43(uVar2,9);
  }
  cVar1 = FUN_010d58b0(&local_28);
  if (cVar1 == '\0') {
    FUN_00414b50(local_20,L"Python distribution not found!");
    FUN_0072d440(local_20[0],1,4,0);
    bVar3 = false;
  }
  else if (DAT_01fc7b70 == 0) {
    FUN_010d5940(L"PYTHONHOME",local_28);
    DAT_01fc7b70 = FUN_007fc180(&PTR_FUN_01a39938,1,*(undefined8 *)PTR_DAT_02004030);
    FUN_01a3e860(DAT_01fc7b70,local_28,0);
    FUN_008059a0(DAT_01fc7b70);
    bVar3 = true;
  }
  if (bVar3) {
    thunk_FUN_0419965d(200);
    FUN_01a5a450(DAT_01fc7b70,local_res8[0]);
  }
  FUN_00414560(&local_28,2);
  FUN_00414480(local_res8);
  return;
}

