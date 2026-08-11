/* Ghidra address: 01b1e020 */
/* Ghidra symbol: FUN_01b1e020 */


void FUN_01b1e020(short *param_1)

{
  undefined8 uVar1;
  short *local_res8 [4];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_30 = 0;
  local_38 = 0;
  local_28 = 0;
  local_20[0] = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  FUN_0043ea00(local_20,local_res8[0]);
  FUN_00414b50(local_res8,local_20[0]);
  if (local_res8[0] != (short *)0x0) {
    if (*local_res8[0] == 0x24) {
      FUN_00b928f0(&local_28,local_res8[0],0);
      FUN_00414b50(local_res8,local_28);
      uVar1 = FUN_00416740(local_res8[0]);
      thunk_FUN_0419adcc(0,L"open",uVar1,0,0,1);
    }
    else {
      FUN_00416cd0(&local_38,3,*(undefined8 *)PTR_DAT_020049a0,&DAT_01b1e194,L"TCH.CHM");
      FUN_01b1def0(&local_30,local_38);
      (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02004030 + 0xb8) + 0x30))
                (*(longlong **)(*(longlong *)PTR_DAT_02004030 + 0xb8),local_res8[0],local_30);
    }
  }
  FUN_00414560(&local_38,4);
  FUN_00414480(local_res8);
  return;
}

