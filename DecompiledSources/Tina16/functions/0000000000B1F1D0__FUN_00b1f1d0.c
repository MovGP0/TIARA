/* Ghidra address: 00b1f1d0 */
/* Ghidra symbol: FUN_00b1f1d0 */


undefined8 FUN_00b1f1d0(longlong param_1,undefined8 param_2)

{
  wchar_t *pwVar1;
  char cVar2;
  bool bVar3;
  undefined8 local_40;
  wchar_t *local_38;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_30[0] = 0;
  local_38 = (wchar_t *)0x0;
  local_40 = 0;
  local_20[0] = 0;
  if ((ushort)(*(short *)(param_1 + 0x78) - 0x25U) < 2) {
    cVar2 = '\0';
  }
  else {
    cVar2 = PTR_DAT_02004830[9];
  }
  pwVar1 = L"#,##0";
  FUN_00414be0(local_20,L"#,##0");
  if (cVar2 != '\0') {
    FUN_00416020(local_30,local_20[0],&DAT_00b1f398);
    FUN_004168b0(&local_38,local_30[0]);
    FUN_00417320(&local_40,0x30,cVar2);
    FUN_00416ad0(&local_38,local_40);
    pwVar1 = local_38;
    FUN_004168e0(local_20,local_38);
  }
  if ((byte)PTR_DAT_02004830[0x17e] < 0x10) {
    bVar3 = ((int)CONCAT62((int6)((ulonglong)pwVar1 >> 0x10),1) << (PTR_DAT_02004830[0x17e] & 0x1f)
            & 0xc011U) != 0;
  }
  else {
    bVar3 = false;
  }
  if (bVar3) {
    FUN_00416310(param_2,5,&DAT_00b1f3a4,local_20[0],L"_);(",local_20[0],&DAT_00b1f3bc);
  }
  else {
    FUN_00416310(param_2,3,local_20[0],&LAB_00b1f3c4,local_20[0]);
  }
  FUN_00414560(&local_40,2);
  FUN_00414520(local_30);
  FUN_00414520(local_20);
  return param_2;
}

