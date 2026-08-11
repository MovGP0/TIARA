/* Ghidra address: 01af24a0 */
/* Ghidra symbol: FUN_01af24a0 */


longlong FUN_01af24a0(longlong param_1,char param_2,char param_3,undefined8 param_4)

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
  *(undefined8 *)(local_res8 + 0x38) = param_4;
  if (param_3 != '\0') {
    lVar2 = FUN_007fc180(&PTR_FUN_01aeef40,1,*(undefined8 *)PTR_DAT_02004030);
    *(longlong *)(local_res8 + 8) = lVar2;
    *(undefined8 *)(lVar2 + 0x788) = param_4;
  }
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

