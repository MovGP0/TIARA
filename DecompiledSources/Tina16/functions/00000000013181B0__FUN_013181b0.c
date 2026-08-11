/* Ghidra address: 013181b0 */
/* Ghidra symbol: FUN_013181b0 */


void FUN_013181b0(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_308 [32];
  wchar_t *local_2e8;
  wchar_t *local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined1 *local_2c0;
  int local_2b0;
  undefined4 local_2ac;
  longlong local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined1 local_290 [24];
  undefined8 local_278;
  undefined8 local_10;
  
  local_2c0 = auStack_308;
  local_2d8 = 0;
  local_2d0 = 0;
  local_2c8 = 0;
  local_298 = 0;
  local_2a0 = 0;
  local_2a8 = 0;
  local_10 = 0;
  FUN_00417580(local_290,&DAT_00432b90);
  FUN_00414480(&local_2a0);
  local_2e8 = L"*.xml";
  FUN_00416cd0(&local_298,3,*(undefined8 *)(param_1 + 0x58),&DAT_01318498);
  FUN_00416ba0(&local_2a0,*(undefined8 *)(param_1 + 0x58),&DAT_01318498);
  FUN_0064dd90(*(undefined8 *)PTR_DAT_02002f98,&local_2a8);
  local_2b0 = FUN_004170c0(&DAT_013184c0,local_2a8,1);
  local_2b0 = local_2b0 + 1;
  local_2ac = 0;
  if (local_2a8 != 0) {
    local_2ac = *(undefined4 *)(local_2a8 + -4);
  }
  FUN_00414480(&local_10);
  FUN_00416dc0(&local_10,local_2a8,local_2b0 + 1,local_2ac);
  FUN_00414b50(&local_2a8,local_10);
  FUN_00414480(&local_10);
  local_2e8 = (wchar_t *)local_2a8;
  local_2e0 = L".xml";
  FUN_00416cd0(&local_2a8,4,*(undefined8 *)(param_1 + 0x58),&DAT_01318498);
  cVar1 = FUN_00440b00(*(undefined8 *)(param_1 + 0x58),1);
  if (cVar1 != '\0') {
    iVar2 = FUN_00441230(local_298,0x1ff,local_290);
    if (iVar2 == 0) {
      do {
        FUN_00416ba0(&local_2c8,local_2a0,local_278);
        iVar2 = FUN_00416db0(local_2c8,local_2a8);
        if (iVar2 != 0) {
          FUN_00416ba0(&local_2d0,local_2a0,local_278);
          iVar2 = FUN_004170c0(L"report_",local_2d0,1);
          if (0 < iVar2) {
            FUN_00416ba0(&local_2d8,local_2a0,local_278);
            FUN_004412f0(local_2d8);
          }
        }
        iVar2 = FUN_00441290(local_290);
      } while (iVar2 == 0);
      FUN_004412c0(local_290);
    }
  }
  FUN_00414560(&local_2d8,3);
  FUN_00414560(&local_2a8,3);
  FUN_00417740(local_290,&DAT_00432b90);
  FUN_00414480(&local_10);
  return;
}

