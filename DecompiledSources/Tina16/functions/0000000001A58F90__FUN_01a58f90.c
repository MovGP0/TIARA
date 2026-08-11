/* Ghidra address: 01a58f90 */
/* Ghidra symbol: FUN_01a58f90 */


void FUN_01a58f90(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_108 [32];
  wchar_t *local_e8;
  undefined1 *local_d0;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18 [2];
  
  local_d0 = auStack_108;
  local_18[0] = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  FUN_01a43000(param_1,param_2);
  local_e8 = L"log_short.json";
  FUN_00416cd0(local_18,3,*(undefined8 *)(param_1 + 0x2ba0),&DAT_01a591fc);
  cVar1 = FUN_00440a20(local_18[0],1);
  if (cVar1 != '\0') {
    FUN_004412f0(local_18[0]);
  }
  local_e8 = L"log.json";
  FUN_00416cd0(local_18,3,*(undefined8 *)(param_1 + 0x2ba0),&DAT_01a591fc);
  cVar1 = FUN_00440a20(local_18[0],1);
  if (cVar1 != '\0') {
    FUN_004412f0(local_18[0]);
  }
  uVar2 = FUN_007fc180(&PTR_FUN_019cd060,1,0);
  *(undefined8 *)PTR_DAT_02001920 = uVar2;
  FUN_008059a0(*(undefined8 *)PTR_DAT_02001920);
  FUN_00414560(&local_60,10);
  return;
}

