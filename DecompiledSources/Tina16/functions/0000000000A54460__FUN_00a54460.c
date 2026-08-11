/* Ghidra address: 00a54460 */
/* Ghidra symbol: FUN_00a54460 */


undefined8 FUN_00a54460(longlong param_1,undefined8 param_2)

{
  short sVar1;
  char cVar2;
  ulonglong uVar3;
  undefined1 auStack_98 [40];
  undefined1 *local_70;
  int local_60;
  int local_5c;
  int local_58;
  short local_52;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  longlong local_20 [2];
  
  local_70 = auStack_98;
  local_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  local_40 = 0;
  local_20[0] = 0;
  FUN_00414480(&local_40);
  local_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  local_20[0] = 0;
  FUN_00461840(&local_38,param_1 + 0x558);
  FUN_00414480(&local_40);
  cVar2 = FUN_0046c390(&local_38);
  if (cVar2 != '\0') {
    FUN_00467e90(local_20,&local_38);
    local_44 = FUN_004170c0(L"url(",local_20[0],1);
    if (0 < local_44) {
      local_58 = 0;
      if (local_20[0] != 0) {
        local_58 = *(int *)(local_20[0] + -4);
      }
      local_4c = local_58;
      local_5c = local_44 + 4;
      while ((local_5c <= local_58 &&
             (((sVar1 = *(short *)(local_20[0] + -2 + (longlong)local_5c * 2), sVar1 == 10 ||
               ((ushort)(sVar1 - 0xcU) < 2)) || (sVar1 == 0x20))))) {
        local_5c = local_5c + 1;
      }
      local_52 = 0;
      local_44 = local_5c;
      if ((local_5c < local_58) &&
         ((sVar1 = *(short *)(local_20[0] + -2 + (longlong)local_5c * 2), sVar1 == 0x22 ||
          (sVar1 == 0x27)))) {
        local_44 = local_5c + 1;
        local_52 = sVar1;
      }
      if (local_52 == 0) {
        local_50 = 0;
        for (local_48 = local_44; local_48 <= local_58; local_48 = local_48 + 1) {
          uVar3 = (ulonglong)*(ushort *)(local_20[0] + -2 + (longlong)local_48 * 2);
          if (uVar3 < 0x21) {
            if ((((uVar3 == 0x20) || (uVar3 == 10)) || (uVar3 - 0xc < 2)) && (local_50 == 0)) break;
          }
          else if (uVar3 == 0x28) {
            local_50 = local_50 + 1;
          }
          else if (uVar3 == 0x29) {
            if (local_50 == 0) break;
            local_50 = local_50 + -1;
          }
        }
      }
      else {
        local_60 = local_44;
        while ((local_60 <= local_58 &&
               (*(short *)(local_20[0] + -2 + (longlong)local_60 * 2) != local_52))) {
          local_60 = local_60 + 1;
        }
        local_48 = local_60;
      }
      FUN_00416dc0(&local_40,local_20[0],local_44,local_48 - local_44);
    }
  }
  FUN_00414480(local_20);
  FUN_00460ba0(&local_38);
  FUN_00414ad0(param_2,local_40);
  FUN_00414480(&local_40);
  FUN_00414480(&local_40);
  return param_2;
}

