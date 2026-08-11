/* Ghidra address: 00c69e40 */
/* Ghidra symbol: FUN_00c69e40 */


void FUN_00c69e40(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined1 auStack_258 [40];
  undefined8 local_230;
  undefined8 local_228;
  undefined1 *local_220;
  undefined1 local_210 [512];
  undefined8 local_10;
  
  local_220 = auStack_258;
  local_230 = 0;
  local_228 = 0;
  local_10 = thunk_FUN_04163be6(L"SHELL32.DLL");
  iVar2 = thunk_FUN_039b3fd2(local_10,0x8311,local_210,0xfe);
  if (0 < iVar2) {
    FUN_004167d0(&local_228,local_210);
    FUN_00416ad0(&local_228,&LAB_00c69fe0);
    FUN_007e2c60(*(undefined8 *)(param_1 + 0x6b8),local_228);
  }
  iVar2 = thunk_FUN_039b3fd2(local_10,0x8313,local_210,0xfe);
  if (0 < iVar2) {
    FUN_004167d0(&local_230,local_210);
    FUN_00416ad0(&local_230,&LAB_00c69fe0);
    FUN_007e2c60(*(undefined8 *)(param_1 + 0x6c0),local_230);
  }
  thunk_FUN_041c8c2f(local_10);
  lVar1 = *(longlong *)(param_1 + 0x6d8);
  *(longlong *)(lVar1 + 0x578) = param_1;
  *(code **)(lVar1 + 0x570) = FUN_00c69ff0;
  FUN_00414560(&local_230,2);
  return;
}

