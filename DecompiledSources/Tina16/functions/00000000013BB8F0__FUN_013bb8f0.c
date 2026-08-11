/* Ghidra address: 013bb8f0 */
/* Ghidra symbol: FUN_013bb8f0 */


void FUN_013bb8f0(longlong param_1)

{
  char cVar1;
  undefined8 local_28;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_28 = 0;
  local_20[0] = 0;
  local_10 = 0;
  FUN_00416cd0(&local_10,3,*(undefined8 *)(param_1 + 0xe8),&DAT_013bbaf8,L"symbols_out.dat");
  cVar1 = FUN_00440a20(local_10,1);
  if (cVar1 != '\0') {
    FUN_004412f0(local_10);
  }
  FUN_00416cd0(&local_10,3,*(undefined8 *)(param_1 + 0xe8),&DAT_013bbaf8,L"curves_out.dat");
  cVar1 = FUN_00440a20(local_10,1);
  if (cVar1 != '\0') {
    FUN_004412f0(local_10);
  }
  FUN_004414c0(local_20,L"symbols_out.dat",L".json");
  FUN_00416cd0(&local_10,3,*(undefined8 *)(param_1 + 0xe8),&DAT_013bbaf8,local_20[0]);
  cVar1 = FUN_00440a20(local_10,1);
  if (cVar1 != '\0') {
    FUN_004412f0(local_10);
  }
  FUN_004414c0(&local_28,L"curves_out.dat",L".json");
  FUN_00416cd0(&local_10,3,*(undefined8 *)(param_1 + 0xe8),&DAT_013bbaf8,local_28);
  cVar1 = FUN_00440a20(local_10,1);
  if (cVar1 != '\0') {
    FUN_004412f0(local_10);
  }
  FUN_00416cd0(&local_10,3,*(undefined8 *)(param_1 + 0xe8),&DAT_013bbaf8,L"curves_prefs.json");
  cVar1 = FUN_00440a20(local_10,1);
  if (cVar1 != '\0') {
    FUN_004412f0(local_10);
  }
  *(undefined1 *)(param_1 + 0x124) = 0;
  FUN_00414560(&local_28,2);
  FUN_00414480(&local_10);
  return;
}

