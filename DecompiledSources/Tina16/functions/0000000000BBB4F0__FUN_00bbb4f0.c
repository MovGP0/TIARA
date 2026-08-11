/* Ghidra address: 00bbb4f0 */
/* Ghidra symbol: FUN_00bbb4f0 */


longlong FUN_00bbb4f0(longlong param_1,char param_2,undefined8 param_3,longlong param_4,
                     undefined4 param_5)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
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
  FUN_00410e60(local_res8,0);
  if (param_4 == 0) {
    *(undefined4 *)(local_res8 + 0x20) = 0x1fffffff;
  }
  else {
    uVar2 = FUN_00608c80(&PTR_FUN_005f92e8,1);
    *(undefined8 *)(local_res8 + 0x10) = uVar2;
    FUN_0060a8f0(uVar2,param_3,param_4);
    *(undefined4 *)(local_res8 + 0x20) = param_5;
  }
  *(undefined1 *)(local_res8 + 8) = 1;
  lVar3 = FUN_00608c80(&PTR_FUN_005f92e8,1);
  *(longlong *)(local_res8 + 0x18) = lVar3;
  *(longlong *)(lVar3 + 0x20) = local_res8;
  *(code **)(lVar3 + 0x18) = FUN_00bbb890;
  *(undefined4 *)(local_res8 + 0x24) = 0x1fffffff;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

