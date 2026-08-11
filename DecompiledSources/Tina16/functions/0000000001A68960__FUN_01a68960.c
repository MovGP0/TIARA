/* Ghidra address: 01a68960 */
/* Ghidra symbol: FUN_01a68960 */


void FUN_01a68960(longlong param_1)

{
  char cVar1;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_00416cd0(&local_10,3,*(undefined8 *)(param_1 + 0x750),&DAT_01a68b04,L"curve_prop.json");
  cVar1 = FUN_00440a20(local_10,1);
  if (cVar1 != '\0') {
    FUN_004412f0(local_10);
  }
  FUN_00416cd0(&local_10,3,*(undefined8 *)(param_1 + 0x750),&DAT_01a68b04,L"curve_desc.txt");
  cVar1 = FUN_00440a20(local_10,1);
  if (cVar1 != '\0') {
    FUN_004412f0(local_10);
  }
  FUN_00416cd0(&local_10,3,*(undefined8 *)(param_1 + 0x750),&DAT_01a68b04,L"curve_x.txt");
  cVar1 = FUN_00440a20(local_10,1);
  if (cVar1 != '\0') {
    FUN_004412f0(local_10);
  }
  FUN_00416cd0(&local_10,3,*(undefined8 *)(param_1 + 0x750),&DAT_01a68b04,L"curve_y.txt");
  cVar1 = FUN_00440a20(local_10,1);
  if (cVar1 != '\0') {
    FUN_004412f0(local_10);
  }
  FUN_00416cd0(&local_10,3,*(undefined8 *)(param_1 + 0x750),&DAT_01a68b04,L"errors.txt");
  cVar1 = FUN_00440a20(local_10,1);
  if (cVar1 != '\0') {
    FUN_004412f0(local_10);
  }
  FUN_00414480(&local_10);
  return;
}

