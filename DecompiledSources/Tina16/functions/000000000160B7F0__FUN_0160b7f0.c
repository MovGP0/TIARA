/* Ghidra address: 0160b7f0 */
/* Ghidra symbol: FUN_0160b7f0 */


void FUN_0160b7f0(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined8 local_res8 [4];
  undefined8 local_30 [2];
  longlong local_20 [2];
  
  local_30[0] = 0;
  local_20[0] = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  FUN_00414480(local_20);
  iVar1 = FUN_004170c0(L"ADS1259",local_res8[0],1);
  if (iVar1 == 1) {
    FUN_00414b50(local_20,L"v_sd1");
  }
  else {
    iVar1 = FUN_00416db0(local_res8[0],L"ADS1255");
    if (iVar1 != 0) {
      iVar1 = FUN_00416db0(local_res8[0],L"ADS1256");
      if (iVar1 != 0) {
        iVar1 = FUN_00416db0(local_res8[0],L"ADS1257");
        if (iVar1 != 0) goto LAB_0160b89d;
      }
    }
    FUN_00414b50(local_20,L"v_sd2");
  }
LAB_0160b89d:
  if (local_20[0] != 0) {
    plVar2 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    FUN_01b21120(*param_2,plVar2,0x3b);
    iVar1 = (**(code **)(*plVar2 + 0xb0))(plVar2,local_20[0]);
    if (iVar1 == -1) {
      (**(code **)(*plVar2 + 0x78))(plVar2,local_20[0]);
    }
    FUN_01b21460(local_30,plVar2);
    FUN_00414ad0(param_2,local_30[0]);
    FUN_00410f20(plVar2);
  }
  FUN_00414480(local_30);
  FUN_00414480(local_20);
  FUN_00414480(local_res8);
  return;
}

