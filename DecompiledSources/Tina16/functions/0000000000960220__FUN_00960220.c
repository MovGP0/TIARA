/* Ghidra address: 00960220 */
/* Ghidra symbol: FUN_00960220 */


longlong FUN_00960220(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                     undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong local_res8;
  undefined1 auStack_78 [32];
  wchar_t *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 *local_20;
  
  local_20 = auStack_78;
  local_res8 = param_1;
  puVar1 = auStack_78;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  *(undefined8 *)(local_res8 + 0x108) = 0;
  *(undefined8 *)(local_res8 + 0x118) = 0;
  FUN_00414b90(local_res8 + 0x100,param_4);
  FUN_00414b90(local_res8 + 0x110,param_5);
  uVar2 = FUN_008f9510(&PTR_FUN_008f6d80,1,param_3);
  *(undefined8 *)(local_res8 + 0x118) = uVar2;
  local_58 = L"UTF-16LE";
  local_50 = param_7;
  local_48 = param_8;
  local_40 = param_9;
  local_38 = param_10;
  local_30 = param_11;
  FUN_008f4860(local_res8,0,uVar2,param_6);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

