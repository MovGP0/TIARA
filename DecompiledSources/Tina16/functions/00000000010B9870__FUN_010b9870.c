/* Ghidra address: 010b9870 */
/* Ghidra symbol: FUN_010b9870 */


void FUN_010b9870(longlong *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  short *local_10;
  
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20[0] = 0;
  local_10 = (short *)0x0;
  cVar1 = (**(code **)(*param_1 + 0x188))(param_1);
  if (cVar1 == '\0') goto LAB_010b9a17;
  FUN_004169a0(local_20,(longlong)param_1 + 0x82);
  FUN_0043ea00(&local_10,local_20[0]);
  if (*local_10 == 0x24) {
    FUN_00b928f0(&local_28,local_10,0);
    FUN_00414b50(&local_10,local_28);
  }
  iVar2 = FUN_004170c0(&DAT_010b9a78,local_10,1);
  if (iVar2 == 2) {
LAB_010b9943:
    FUN_00416ba0(&local_10,L"file://",local_10);
  }
  else {
    iVar2 = FUN_004170c0(&DAT_010b9a8c,local_10,1);
    if (iVar2 == 1) goto LAB_010b9943;
    FUN_0043e130(&local_30,local_10);
    iVar2 = FUN_004170c0(L"HTTP://",local_30,1);
    if (iVar2 != 1) {
      FUN_0043e130(&local_38,local_10);
      iVar2 = FUN_004170c0(L"FILE://",local_38,1);
      if (iVar2 != 1) {
        FUN_0043e130(&local_40,local_10);
        iVar2 = FUN_004170c0(L"FTP://",local_40,1);
        if (iVar2 != 1) {
          FUN_00416ba0(&local_10,L"http://",local_10);
        }
      }
    }
  }
  uVar3 = FUN_00416740(local_10);
  thunk_FUN_0419adcc(0,L"open",uVar3,0,0,1);
LAB_010b9a17:
  FUN_00414560(&local_40,5);
  FUN_00414480(&local_10);
  return;
}

