/* Ghidra address: 0153f7d0 */
/* Ghidra symbol: FUN_0153f7d0 */


longlong FUN_0153f7d0(longlong param_1,char param_2,undefined8 param_3,undefined4 param_4,
                     undefined8 param_5)

{
  ushort uVar1;
  longlong local_res8;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  FUN_00414610(param_5);
  local_res8 = param_1;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
  }
  FUN_00410e60(local_res8,0);
  *(undefined8 *)(local_res8 + 0x18) = param_3;
  uVar1 = FUN_01d03160(param_3);
  *(uint *)(local_res8 + 8) = (uint)uVar1;
  *(undefined4 *)(local_res8 + 0xc) = param_4;
  FUN_00414ad0(local_res8 + 0x20,param_5);
  FUN_00414480(&param_5);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

