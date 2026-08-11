/* Ghidra address: 00703000 */
/* Ghidra symbol: FUN_00703000 */


longlong FUN_00703000(longlong param_1,char param_2,undefined8 param_3)

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
  FUN_00652880(local_res8,0,param_3);
  FUN_0064cbf0(local_res8,0x96);
  FUN_0064cc50(local_res8,0x2d);
  FUN_0065bce0(local_res8,1);
  *(uint *)(local_res8 + 0xa0) = *(uint *)(local_res8 + 0xa0) & 0xffffffdd | 0xc0001;
  *(undefined4 *)(local_res8 + 0x494) = 0xc;
  *(undefined1 *)(local_res8 + 0x4a0) = 1;
  *(undefined1 *)(local_res8 + 0x490) = 0;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

