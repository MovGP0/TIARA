/* Ghidra address: 00a53050 */
/* Ghidra symbol: FUN_00a53050 */


undefined1 FUN_00a53050(longlong param_1,longlong *param_2)

{
  short sVar1;
  char cVar2;
  ulonglong uVar3;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  int local_64;
  int local_60;
  int local_5c;
  short local_56;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  bool local_41;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  longlong local_20 [2];
  
  local_70 = auStack_a8;
  local_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  local_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  local_40 = 0;
  local_20[0] = 0;
  cVar2 = FUN_0046c390(param_1 + 0x150);
  if (cVar2 == '\0') {
    local_41 = false;
  }
  else {
    FUN_00468a10(&local_88,L"none");
    cVar2 = FUN_0046f320(param_1 + 0x150,&local_88);
    if (cVar2 == '\0') {
      FUN_00414480(&local_40);
      local_38 = 0;
      uStack_30 = 0;
      uStack_28 = 0;
      local_20[0] = 0;
      FUN_00461840(&local_38,param_1 + 0x150);
      FUN_00414480(&local_40);
      cVar2 = FUN_0046c390(&local_38);
      if (cVar2 != '\0') {
        FUN_00467e90(local_20,&local_38);
        local_48 = FUN_004170c0(L"url(",local_20[0],1);
        if (0 < local_48) {
          local_5c = 0;
          if (local_20[0] != 0) {
            local_5c = *(int *)(local_20[0] + -4);
          }
          local_50 = local_5c;
          local_60 = local_48 + 4;
          while ((local_60 <= local_5c &&
                 (((sVar1 = *(short *)(local_20[0] + -2 + (longlong)local_60 * 2), sVar1 == 10 ||
                   ((ushort)(sVar1 - 0xcU) < 2)) || (sVar1 == 0x20))))) {
            local_60 = local_60 + 1;
          }
          local_56 = 0;
          local_48 = local_60;
          if ((local_60 < local_5c) &&
             ((sVar1 = *(short *)(local_20[0] + -2 + (longlong)local_60 * 2), sVar1 == 0x22 ||
              (sVar1 == 0x27)))) {
            local_48 = local_60 + 1;
            local_56 = sVar1;
          }
          if (local_56 == 0) {
            local_54 = 0;
            for (local_4c = local_48; local_4c <= local_5c; local_4c = local_4c + 1) {
              uVar3 = (ulonglong)*(ushort *)(local_20[0] + -2 + (longlong)local_4c * 2);
              if (uVar3 < 0x21) {
                if ((((uVar3 == 0x20) || (uVar3 == 10)) || (uVar3 - 0xc < 2)) && (local_54 == 0))
                break;
              }
              else if (uVar3 == 0x28) {
                local_54 = local_54 + 1;
              }
              else if (uVar3 == 0x29) {
                if (local_54 == 0) break;
                local_54 = local_54 + -1;
              }
            }
          }
          else {
            local_64 = local_48;
            while ((local_64 <= local_5c &&
                   (*(short *)(local_20[0] + -2 + (longlong)local_64 * 2) != local_56))) {
              local_64 = local_64 + 1;
            }
            local_4c = local_64;
          }
          FUN_00416dc0(&local_40,local_20[0],local_48,local_4c - local_48);
        }
      }
      FUN_00414480(local_20);
      FUN_00460ba0(&local_38);
      FUN_00414ad0(param_2,local_40);
      FUN_00414480(&local_40);
      local_41 = *param_2 != 0;
    }
    else {
      FUN_00414480(param_2);
      local_41 = true;
    }
  }
  FUN_00460ba0(&local_88);
  FUN_00414480(&local_40);
  return local_41;
}

