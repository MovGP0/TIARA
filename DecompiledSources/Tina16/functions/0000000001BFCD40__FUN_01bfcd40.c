/* Ghidra address: 01bfcd40 */
/* Ghidra symbol: FUN_01bfcd40 */


longlong FUN_01bfcd40(longlong param_1,char param_2,undefined8 param_3)

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
  FUN_01c07b80(local_res8,0,param_3);
  *(undefined1 *)(local_res8 + 0x30) = 0;
  lVar2 = FUN_005fc570(&PTR_FUN_005f2d40,1);
  *(longlong *)(local_res8 + 0x38) = lVar2;
  *(longlong *)(lVar2 + 0x10) = local_res8;
  *(code **)(lVar2 + 8) = FUN_01bfce70;
  *(undefined1 *)(local_res8 + 0x40) = 1;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

