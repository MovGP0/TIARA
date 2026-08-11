/* Ghidra address: 019665f0 */
/* Ghidra symbol: FUN_019665f0 */


longlong FUN_019665f0(longlong param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong local_res8;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_res8 = param_1;
  puVar1 = auStack_48;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  FUN_0195a380(local_res8,0,param_3);
  *(byte *)(local_res8 + 0xd0) = *(byte *)(local_res8 + 0xd0) & 0xfb;
  lVar2 = FUN_00603960(&DAT_005f7500,1);
  *(longlong *)(local_res8 + 0x2c8) = lVar2;
  *(longlong *)(lVar2 + 0x28) = local_res8;
  *(code **)(lVar2 + 0x20) = FUN_01966ec0;
  *(undefined4 *)(local_res8 + 0x2d4) = 0xffffff;
  *(undefined1 *)(local_res8 + 0x2c5) = 1;
  *(undefined1 *)(local_res8 + 0x2a8) = 0x2c;
  *(undefined8 *)(local_res8 + 0x2b8) = 0;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

