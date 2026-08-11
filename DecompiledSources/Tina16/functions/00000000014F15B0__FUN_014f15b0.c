/* Ghidra address: 014f15b0 */
/* Ghidra symbol: FUN_014f15b0 */


longlong FUN_014f15b0(longlong param_1,char param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong local_res8;
  undefined1 auStack_998 [40];
  undefined1 *local_970;
  undefined8 local_960 [296];
  
  local_970 = auStack_998;
  puVar2 = local_960;
  for (lVar1 = 0x127; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_4;
    param_4 = param_4 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_004179d0(local_960,&DAT_01d0d0b8);
  local_res8 = param_1;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
  }
  FUN_00417c40(local_res8 + 0x988,local_960,&DAT_01d0d0b8);
  FUN_007fc180(local_res8,0,param_3);
  FUN_00417740(local_960,&DAT_01d0d0b8);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

