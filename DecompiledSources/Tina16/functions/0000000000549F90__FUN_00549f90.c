/* Ghidra address: 00549f90 */
/* Ghidra symbol: FUN_00549f90 */


longlong FUN_00549f90(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong local_res8;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 *local_30;
  longlong local_20;
  
  local_30 = auStack_68;
  local_res8 = param_1;
  puVar1 = auStack_68;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  local_48 = param_5;
  FUN_00546280(local_res8,0,param_3,param_4);
  lVar2 = FUN_0054a100(local_res8);
  local_20 = *(longlong *)(lVar2 + -0xa0);
  if (local_20 != 0) {
    *(undefined8 *)(local_res8 + 0x50) = *(undefined8 *)(local_20 + 2);
  }
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

