/* Ghidra address: 0196d5f0 */
/* Ghidra symbol: FUN_0196d5f0 */


longlong FUN_0196d5f0(longlong param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong local_20;
  
  local_30 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_01814f70(local_res8,0,param_3);
  uVar2 = FUN_005fc570(&PTR_FUN_005f2d40,1);
  *(undefined8 *)(local_res8 + 0x28) = uVar2;
  local_20 = *(longlong *)(local_res8 + 0x28);
  *(undefined4 *)(local_20 + 0x2c) = DAT_01fb7de8;
  FUN_005fcd80(local_20,L"Arial");
  FUN_005fce30(local_20,10);
  FUN_005fcfa0(local_20,DAT_01fb7e08);
  uVar2 = FUN_01958b10(&PTR_FUN_01921868,1);
  *(undefined8 *)(local_res8 + 0x30) = uVar2;
  uVar2 = FUN_01956770(&PTR_FUN_01920040,1);
  *(undefined8 *)(local_res8 + 0x40) = uVar2;
  *(undefined1 *)(local_res8 + 0x38) = 1;
  *(undefined1 *)(local_res8 + 0x39) = 1;
  *(undefined1 *)(local_res8 + 0x3a) = 1;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

