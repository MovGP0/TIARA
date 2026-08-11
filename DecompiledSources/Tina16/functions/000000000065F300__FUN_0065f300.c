/* Ghidra address: 0065f300 */
/* Ghidra symbol: FUN_0065f300 */


longlong FUN_0065f300(longlong param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
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
  FUN_0064e030(local_res8,0x80ffff);
  FUN_005ff880(*(undefined8 *)(local_res8 + 0x490),
               *(undefined8 *)(*(longlong *)PTR_DAT_02005950 + 0x100));
  FUN_005fdcb0(*(undefined8 *)(*(longlong *)(local_res8 + 0x490) + 0x80),1);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

