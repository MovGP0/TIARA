/* Ghidra address: 0096ef00 */
/* Ghidra symbol: FUN_0096ef00 */


byte FUN_0096ef00(longlong param_1,undefined8 param_2,char param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined8 *param_6)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  byte local_21;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  *param_4 = 0;
  *param_5 = 0;
  *param_6 = 0;
  cVar1 = FUN_008ff6c0(param_2);
  if (cVar1 == '\0') {
    FUN_00414520(param_4);
    FUN_00414520(param_5);
    FUN_00414520(param_6);
    local_21 = 0x47;
  }
  else {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0xb8))
                      (*(longlong **)(param_1 + 0x10),param_2);
    if (iVar2 < 0) {
      FUN_00414520(param_4);
      FUN_00414520(param_5);
      FUN_00414520(param_6);
      local_21 = 0x2b;
    }
    else {
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x40))
                        (*(longlong **)(param_1 + 0x10),iVar2);
      lVar4 = FUN_004113f0(uVar3,&PTR_FUN_00919bf0);
      if (*(char *)(lVar4 + 0x48) == '\0') {
        if (param_3 == '\0') {
          local_21 = 0x9a;
        }
        else {
          if (*(char *)(lVar4 + 0x49) == '\0') {
            FUN_0096f650(lVar4);
          }
          local_21 = *(byte *)(lVar4 + 0x4a);
        }
      }
      else {
        local_21 = 0;
      }
      if (local_21 < 0xa0) {
        bVar5 = ((byte)(&DAT_01e328f0)[(longlong)(int)(uint)local_21 >> 3] >> (local_21 & 7) & 1) !=
                0;
      }
      else {
        bVar5 = false;
      }
      if (bVar5) {
        FUN_00414b90(param_4,*(undefined8 *)(lVar4 + 0x50));
        FUN_00414b90(param_5,*(undefined8 *)(lVar4 + 0x68));
        FUN_0096f600(lVar4,local_20);
        FUN_00414b90(param_6,local_20[0]);
      }
      else {
        FUN_00414520(param_4);
        FUN_00414520(param_5);
        FUN_00414520(param_6);
      }
    }
  }
  FUN_00414520(local_20);
  return local_21;
}

