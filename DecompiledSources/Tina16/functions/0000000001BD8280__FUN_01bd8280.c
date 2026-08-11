/* Ghidra address: 01bd8280 */
/* Ghidra symbol: FUN_01bd8280 */


longlong FUN_01bd8280(longlong param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  longlong *plVar2;
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
  FUN_00660290(local_res8,0,param_3);
  *(undefined1 *)(local_res8 + 0x4a8) = 0;
  plVar2 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
  *(longlong **)(local_res8 + 0x4a0) = plVar2;
  (**(code **)(*plVar2 + 0xf8))(plVar2,1);
  FUN_0060bbf0(*(undefined8 *)(local_res8 + 0x4a0),6);
  FUN_0064e6f0(local_res8);
  *(undefined4 *)(local_res8 + 0x4bc) = 0;
  *(undefined4 *)(local_res8 + 0x4b8) = 0;
  FUN_00655f80(local_res8,*(undefined8 *)(*(longlong *)PTR_DAT_02004030 + 0x2d0));
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

