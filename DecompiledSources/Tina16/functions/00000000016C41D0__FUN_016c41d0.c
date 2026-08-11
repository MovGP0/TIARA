/* Ghidra address: 016c41d0 */
/* Ghidra symbol: FUN_016c41d0 */


void FUN_016c41d0(longlong param_1,byte *param_2)

{
  int iVar1;
  longlong lVar2;
  byte *pbVar3;
  bool bVar4;
  undefined1 local_240 [8];
  undefined8 local_238;
  undefined8 local_230;
  wchar_t *local_228;
  undefined8 local_220;
  undefined1 local_218 [256];
  byte local_118 [256];
  
  local_238 = 0;
  local_230 = 0;
  local_228 = (wchar_t *)0x0;
  local_220 = 0;
  lVar2 = (ulonglong)*param_2 + 1;
  pbVar3 = local_118;
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pbVar3 = *param_2;
    param_2 = param_2 + 1;
    pbVar3 = pbVar3 + 1;
  }
  FUN_004169a0(&local_220,local_118);
  iVar1 = FUN_004170c0(&DAT_016c4368,local_220,1);
  FUN_004151b0(local_218,local_118,1,iVar1 + -1);
  FUN_004169a0(&local_228,local_218);
  if (local_228 == L"NOM.LIB") {
    bVar4 = true;
  }
  else if (local_228 == (wchar_t *)0x0) {
    bVar4 = false;
  }
  else {
    iVar1 = FUN_0043e420(local_228,L"NOM.LIB");
    bVar4 = iVar1 == 0;
  }
  if (bVar4) {
    local_240[0] = 0;
    FUN_016a4160(*(undefined8 *)(param_1 + 0x10),0,local_240);
  }
  else {
    FUN_004169a0(&local_230,local_118);
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0xa48) + 0xb0))
                      (*(longlong **)(param_1 + 0xa48),local_230);
    if (iVar1 < 0) {
      FUN_004169a0(&local_238,local_118);
      (**(code **)(**(longlong **)(param_1 + 0xa48) + 0x78))
                (*(longlong **)(param_1 + 0xa48),local_238);
    }
  }
  FUN_00414560(&local_238,4);
  return;
}

