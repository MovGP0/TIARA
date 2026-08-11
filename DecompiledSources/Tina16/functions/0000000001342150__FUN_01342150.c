/* Ghidra address: 01342150 */
/* Ghidra symbol: FUN_01342150 */


void FUN_01342150(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_res18 [2];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_40 = 0;
  local_30[0] = 0;
  local_38 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_00414610(param_5);
  FUN_00414610(param_6);
  local_20[0] = 0;
  cVar1 = FUN_01b07dd0(param_1);
  if (((cVar1 == '\0') || (*PTR_DAT_02002b78 == '\0')) || (*PTR_DAT_020030c0 == '\0'))
  goto code_r0x01342326;
  cVar1 = FUN_019a1420(*(undefined8 *)(param_1 + 0xa8),local_20);
  if (cVar1 != '\0') {
    lVar2 = FUN_014cdd20(*(undefined8 *)(param_1 + 0xe8));
    cVar1 = FUN_0160e910(lVar2 + 0x848);
    if (cVar1 != '\0') goto code_r0x01342326;
    lVar2 = FUN_014cdd20(*(undefined8 *)(param_1 + 0xe8));
    cVar1 = FUN_0160e940(lVar2 + 0x848);
    if (cVar1 != '\0') goto code_r0x01342326;
  }
  if (*(char *)(*(longlong *)(param_1 + 0xe8) + 0x22bb) != '\0') {
    if (*(char *)(*(longlong *)(param_1 + 0xe8) + 0x22bc) != '\0') {
      uVar3 = FUN_00b89270();
      FUN_0041ddd0(&local_38,PTR_PTR_02005250);
      FUN_00b8e650(uVar3,local_30,L"HDLStrings.Msg_HCS08DbgMixedMode",local_38);
      uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,local_30[0]);
      FUN_004134c0(uVar3);
    }
    uVar3 = FUN_014cdd20(*(undefined8 *)(param_1 + 0xe8));
    FUN_014cdcf0(*(undefined8 *)(param_1 + 0xe8),&local_40);
    uVar4 = FUN_014cdce0(*(undefined8 *)(param_1 + 0xe8));
    FUN_01c99d60(*(undefined8 *)PTR_DAT_02004e40,uVar3,local_40,uVar4,1,
                 *(undefined8 *)(param_1 + 0xe8));
  }
code_r0x01342326:
  FUN_00414560(&local_40,3);
  FUN_00414480(local_res18);
  FUN_00414560(&param_5,2);
  return;
}

