/* Ghidra address: 01cc3870 */
/* Ghidra symbol: FUN_01cc3870 */


longlong FUN_01cc3870(longlong param_1,char param_2,byte param_3,char param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  longlong local_res8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 *local_20;
  
  local_20 = auStack_58;
  FUN_00414610(param_5);
  local_res8 = param_1;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
  }
  uVar1 = 0;
  FUN_01d33100(local_res8,0);
  FUN_01cc3810(local_res8);
  uVar2 = CONCAT71((int7)((ulonglong)uVar1 >> 8),1);
  local_38 = param_5;
  uVar1 = FUN_01cc1d20(&PTR_FUN_01cb4ce0,uVar2,param_3,param_4);
  *(undefined8 *)(local_res8 + 8) = uVar1;
  if (param_3 < 0x10) {
    bVar3 = ((int)CONCAT62((int6)((ulonglong)uVar2 >> 0x10),1) << (param_3 & 0x1f) & 0x80ffU) != 0;
  }
  else {
    bVar3 = false;
  }
  if ((bVar3) && (*(bool *)(local_res8 + 0x54) = param_4 == '\0', param_4 == '\0')) {
    uVar1 = FUN_01cbfd50(&PTR_FUN_01cb2978,1,param_5);
    *(undefined8 *)(local_res8 + 0x10) = uVar1;
  }
  FUN_00414480(&param_5);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

