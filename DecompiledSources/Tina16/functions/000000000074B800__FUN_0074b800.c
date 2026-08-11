/* Ghidra address: 0074b800 */
/* Ghidra symbol: FUN_0074b800 */


longlong FUN_0074b800(longlong param_1,char param_2,undefined8 param_3)

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
  FUN_0065f0e0(local_res8,0,param_3);
  *(uint *)(local_res8 + 0xa0) = *(uint *)(local_res8 + 0xa0) & 0xffdfffff;
  *(undefined1 *)(local_res8 + 800) = 1;
  FUN_0064cc50(local_res8,100);
  FUN_0064c650(local_res8,3);
  FUN_0064cbf0(local_res8,3);
  FUN_0064e140(local_res8,0xfff2);
  *(undefined4 *)(local_res8 + 0x34c) = 0x1e;
  *(undefined1 *)(local_res8 + 0x378) = 3;
  *(undefined4 *)(local_res8 + 0x368) = 0xffffffff;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

