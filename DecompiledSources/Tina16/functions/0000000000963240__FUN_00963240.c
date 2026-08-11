/* Ghidra address: 00963240 */
/* Ghidra symbol: FUN_00963240 */


longlong FUN_00963240(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,longlong param_7,undefined8 param_8,
                     longlong param_9)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong local_res8;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 local_70;
  wchar_t *local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  undefined1 *local_30;
  
  local_30 = auStack_98;
  local_res8 = param_1;
  puVar1 = auStack_98;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_00410e60(local_res8,0);
  if (param_7 < 0) {
    param_9 = param_9 + -1;
  }
  *(undefined8 *)(local_res8 + 0x20) = 0;
  *(undefined8 *)(local_res8 + 0x28) = 0;
  uVar2 = FUN_008f7f70(&PTR_FUN_008f67c0,1);
  *(undefined8 *)(local_res8 + 0xa8) = uVar2;
  uVar2 = FUN_008f9510(&PTR_FUN_008f6d80,1,param_3);
  *(undefined8 *)(local_res8 + 0x28) = uVar2;
  local_70 = 0x1000;
  local_68 = L"UTF-16LE";
  local_60 = param_5;
  local_58 = param_6;
  local_50 = param_7;
  local_48 = param_8;
  local_40 = param_9;
  local_78 = param_4;
  lVar3 = FUN_0095fe20(&PTR_FUN_00914aa8,1,uVar2,0);
  *(longlong *)(local_res8 + 0x20) = lVar3;
  puVar5 = (undefined8 *)(lVar3 + 0x10);
  puVar6 = (undefined8 *)(local_res8 + 0x68);
  for (lVar4 = 7; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar5 = (undefined8 *)(*(longlong *)(local_res8 + 0x20) + 0xc0);
  puVar6 = (undefined8 *)(local_res8 + 0x30);
  for (lVar3 = 7; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined1 *)(local_res8 + 0xa0) = 4;
  *(undefined1 *)(local_res8 + 0x18) = 0;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

