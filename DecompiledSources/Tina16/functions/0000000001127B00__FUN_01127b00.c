/* Ghidra address: 01127b00 */
/* Ghidra symbol: FUN_01127b00 */


void FUN_01127b00(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  bool bVar5;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40;
  wchar_t *local_38;
  longlong local_30 [2];
  undefined8 local_20 [2];
  
  local_60 = 0;
  local_68 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_40 = 0;
  local_38 = (wchar_t *)0x0;
  local_30[0] = 0;
  local_20[0] = 0;
  if (((*(byte *)(param_1 + 0x6a8) & 4) == 0) &&
     (FUN_0064dd90(*(undefined8 *)(param_1 + 0x838),local_30), local_30[0] != 0)) {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x838),&local_38);
    if (local_38 == L"<embedded>") {
      bVar5 = true;
    }
    else if (local_38 == (wchar_t *)0x0) {
      bVar5 = false;
    }
    else {
      iVar3 = FUN_0043e420(local_38,L"<embedded>");
      bVar5 = iVar3 == 0;
    }
    if (!bVar5) {
      puVar4 = (undefined8 *)FUN_01c8a3c0(*(undefined8 *)PTR_DAT_02004e40,0);
      FUN_00414b50(local_20,*puVar4);
      FUN_00441820(&local_40,local_20[0]);
      if (local_40 != 0) {
        cVar2 = (**(code **)(**(longlong **)(param_1 + 0x888) + 0x260))
                          (*(longlong **)(param_1 + 0x888));
        if (cVar2 == '\0') {
          uVar1 = *(undefined8 *)(param_1 + 0x838);
          FUN_0064dd90(uVar1,&local_68);
          FUN_00441d00(&local_60,local_20[0],local_68);
          FUN_0064de00(uVar1,local_60);
        }
        else {
          FUN_00441640(&local_50,local_20[0]);
          FUN_0064dd90(*(undefined8 *)(param_1 + 0x838),&local_58);
          FUN_00416ad0(&local_50,local_58);
          FUN_00441b80(&local_48,local_50);
          FUN_0064de00(*(undefined8 *)(param_1 + 0x838),local_48);
        }
      }
    }
  }
  FUN_00414480(&local_68);
  FUN_00414480(&local_60);
  FUN_00414480(&local_58);
  FUN_00414560(&local_50,3);
  FUN_00414560(&local_38,2);
  FUN_00414480(local_20);
  return;
}

