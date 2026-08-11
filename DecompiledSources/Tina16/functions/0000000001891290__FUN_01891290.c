/* Ghidra address: 01891290 */
/* Ghidra symbol: FUN_01891290 */


longlong FUN_01891290(longlong param_1,char param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong local_res8;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_res8 = param_1;
  puVar2 = auStack_48;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar2 = local_20;
  }
  local_20 = puVar2;
  FUN_01818cc0(local_res8,0,param_3);
  FUN_0065d610(local_res8,0);
  FUN_00743850(local_res8,0);
  FUN_00743880(local_res8,0);
  FUN_00743910(local_res8,1);
  FUN_007438e0(local_res8,1);
  plVar3 = (longlong *)FUN_00680200(&PTR_FUN_0066b990,1,0);
  *(longlong **)(local_res8 + 0x4c0) = plVar3;
  (**(code **)(*plVar3 + 0x130))(plVar3,local_res8);
  FUN_006804c0(*(undefined8 *)(local_res8 + 0x4c0),0);
  lVar1 = *(longlong *)(local_res8 + 0x4c0);
  *(longlong *)(lVar1 + 0x3c0) = local_res8;
  *(code **)(lVar1 + 0x3b8) = FUN_018914b0;
  *(longlong *)(lVar1 + 0x3d0) = local_res8;
  *(code **)(lVar1 + 0x3c8) = FUN_018914e0;
  *(longlong *)(lVar1 + 0x4b0) = local_res8;
  *(code **)(lVar1 + 0x4a8) = FUN_01891510;
  FUN_0064e030(local_res8,0xff000005);
  FUN_01891a20(local_res8,0xff000005);
  uVar4 = FUN_00608c80(&PTR_FUN_005f92e8,1);
  *(undefined8 *)(local_res8 + 0x4c8) = uVar4;
  uVar4 = FUN_00608c80(&PTR_FUN_005f92e8,1);
  *(undefined8 *)(local_res8 + 0x4d0) = uVar4;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

