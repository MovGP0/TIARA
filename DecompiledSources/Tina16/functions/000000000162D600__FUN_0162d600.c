/* Ghidra address: 0162d600 */
/* Ghidra symbol: FUN_0162d600 */


void FUN_0162d600(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  char local_39;
  undefined8 local_38;
  longlong local_30;
  int local_28;
  int local_24;
  longlong *local_20;
  
  local_50 = auStack_88;
  local_58 = 0;
  local_60 = 0;
  local_20 = (longlong *)FUN_00410e60(&PTR_FUN_00472dd0,1);
  local_28 = 0;
  if (*(longlong *)(param_1 + 8) == 0) {
    FUN_01613110(L"THDLSession.ReplaceUserDefAnalogFunctions");
  }
  do {
    (**(code **)(*local_20 + 0x10))(local_20);
    FUN_0161db10(*(undefined8 *)(param_1 + 8),local_20);
    local_39 = FUN_0161de00(local_20);
    if ((local_39 != '\0') && (local_24 = (int)local_20[2] + -1, -1 < local_24)) {
      do {
        local_30 = FUN_004aeac0(local_20,local_24);
        local_38 = *(undefined8 *)(local_30 + 8);
        cVar1 = FUN_0161dda0(local_38);
        if (cVar1 != '\0') {
          FUN_0162d240(param_1,param_3,local_30,0);
        }
        local_38 = *(undefined8 *)(local_30 + 0x10);
        cVar1 = FUN_0161dda0(local_38);
        if (cVar1 != '\0') {
          FUN_0162d240(param_1,param_3,local_30,1);
        }
        local_24 = local_24 + -1;
      } while (local_24 != -1);
    }
    local_28 = local_28 + 1;
    if (1000 < local_28) {
      uVar2 = FUN_00b89270();
      FUN_0041ddd0(&local_60,PTR_PTR_02001620);
      FUN_00b8e650(uVar2,&local_58,L"HDLStrings.Msg_ErrRepUsrDefFn");
      FUN_01613110(local_58);
    }
  } while (local_39 != '\0');
  FUN_00410f20(local_20);
  FUN_00414560(&local_60,2);
  return;
}

