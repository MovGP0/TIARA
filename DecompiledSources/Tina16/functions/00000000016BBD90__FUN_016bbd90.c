/* Ghidra address: 016bbd90 */
/* Ghidra symbol: FUN_016bbd90 */


int FUN_016bbd90(longlong param_1,byte *param_2,longlong param_3,undefined8 *param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  byte *pbVar5;
  bool bVar6;
  int local_194;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  longlong local_168;
  wchar_t *local_160;
  undefined8 local_158;
  longlong local_150;
  wchar_t *local_148;
  undefined1 *local_140 [2];
  undefined4 local_12c;
  byte local_128 [264];
  
  local_190 = 0;
  local_188 = 0;
  local_180 = 0;
  local_178 = 0;
  local_170 = 0;
  local_168 = 0;
  local_160 = (wchar_t *)0x0;
  local_158 = 0;
  local_150 = 0;
  local_148 = (wchar_t *)0x0;
  local_140[0] = (undefined1 *)0x0;
  lVar4 = (ulonglong)*param_2 + 1;
  pbVar5 = local_128;
  for (; lVar4 != 0; lVar4 = lVar4 + -1) {
    *pbVar5 = *param_2;
    param_2 = param_2 + 1;
    pbVar5 = pbVar5 + 1;
  }
  cVar1 = FUN_01d350f0(*(undefined8 *)(param_1 + 0xa28),local_128,&local_12c);
  if (cVar1 == '\0') {
    iVar2 = FUN_00414f50(local_128,&DAT_016bc11c,(ulonglong)local_128[0] + 1);
    if (iVar2 == 0) {
      local_194 = 0;
    }
    else {
      FUN_004169a0(local_140,local_128);
      iVar2 = FUN_004170c0(&DAT_016bc12c,local_140[0],1);
      if (iVar2 == 1) {
        local_194 = -1;
        FUN_004169a0(&local_148,local_128);
        if (local_148 == L"$G_DPWR") {
          bVar6 = true;
        }
        else {
          FUN_004169a0(&local_150,local_128);
          if (local_150 == 0) {
            bVar6 = false;
          }
          else {
            FUN_004169a0(&local_158,local_128);
            iVar2 = FUN_0043e420(local_158,L"$G_DPWR");
            bVar6 = iVar2 == 0;
          }
        }
        if (bVar6) {
          *(byte *)(param_1 + 0x42) = *(byte *)(param_1 + 0x42) | 1;
        }
        FUN_004169a0(&local_160,local_128);
        if (local_160 == L"$G_DGND") {
          bVar6 = true;
        }
        else {
          FUN_004169a0(&local_168,local_128);
          if (local_168 == 0) {
            bVar6 = false;
          }
          else {
            FUN_004169a0(&local_170,local_128);
            iVar2 = FUN_0043e420(local_170,L"$G_DGND");
            bVar6 = iVar2 == 0;
          }
        }
        if (bVar6) {
          *(byte *)(param_1 + 0x42) = *(byte *)(param_1 + 0x42) | 2;
        }
      }
      else {
        local_194 = *(int *)(param_1 + 0x998);
        *(int *)(param_1 + 0x998) = *(int *)(param_1 + 0x998) + 1;
      }
    }
    uVar3 = FUN_016a4560(&DAT_0169ffe0,1,local_128,local_194);
    *param_4 = uVar3;
    (**(code **)(**(longlong **)(param_1 + 0xa28) + 0x50))(*(longlong **)(param_1 + 0xa28),*param_4)
    ;
    FUN_004169a0(&local_178,local_128);
    (**(code **)(**(longlong **)(param_1 + 0xa50) + 0x80))
              (*(longlong **)(param_1 + 0xa50),local_178,(longlong)local_194);
    FUN_004169a0(&local_180,local_128);
    iVar2 = FUN_004170c0(&DAT_016bc12c,local_180,1);
    if ((iVar2 == 1) && (param_3 != 0)) {
      FUN_004169a0(&local_188,local_128);
      FUN_019aeca0(param_3,local_188);
    }
    if ((*(char *)(param_1 + 0x9a5) != '\0') && (param_3 != 0)) {
      FUN_004169a0(&local_190,local_128);
      FUN_019ae8a0(param_3,local_190,local_194);
    }
  }
  else {
    lVar4 = FUN_01d347d0(*(undefined8 *)(param_1 + 0xa28),local_12c);
    local_194 = *(int *)(lVar4 + 0x18);
  }
  FUN_00414560(&local_190,0xb);
  return local_194;
}

