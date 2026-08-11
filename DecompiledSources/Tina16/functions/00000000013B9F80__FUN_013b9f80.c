/* Ghidra address: 013b9f80 */
/* Ghidra symbol: FUN_013b9f80 */


void FUN_013b9f80(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  cVar1 = FUN_01b251d0(L"Main",L"PyTest");
  if (cVar1 == '\0') {
    FUN_00416ba0(param_1 + 0xe0,*(undefined8 *)(param_1 + 0xd8),L"\\PCbuild\\amd64\\");
  }
  else {
    FUN_00416ba0(param_1 + 0xe0,*(undefined8 *)(param_1 + 0xd8),&DAT_013ba14c);
  }
  FUN_00416ba0(param_1 + 0xf8,*(undefined8 *)(param_1 + 0xe0),L"python.exe");
  FUN_015fca00(&local_18,0,0);
  FUN_00440c30(local_18);
  FUN_013b9f10(param_1,local_18);
  FUN_00414ad0(param_1 + 0xe8,*(undefined8 *)(param_1 + 0x108));
  FUN_00416cd0(param_1 + 0xf0,3,*(undefined8 *)(param_1 + 0x108),&DAT_013ba14c,L"__pycache__");
  FUN_00440c30(*(undefined8 *)(param_1 + 0xf0));
  if (*(longlong *)(param_1 + 8) == 0) {
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  else {
    uVar2 = FUN_013baff0(param_1,*(longlong *)(param_1 + 8));
    *(undefined8 *)(param_1 + 0x30) = uVar2;
  }
  FUN_00414560(&local_18,2);
  return;
}

