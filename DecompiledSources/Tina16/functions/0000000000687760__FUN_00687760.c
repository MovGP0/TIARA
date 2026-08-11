/* Ghidra address: 00687760 */
/* Ghidra symbol: FUN_00687760 */


longlong FUN_00687760(longlong param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  int iVar2;
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
  if (PTR_DAT_02005bd0[0xc] != '\0') {
    iVar2 = FUN_0044f060();
    if (iVar2 == 2) {
      *(undefined1 *)(local_res8 + 0x348) = 0;
    }
  }
  *(undefined1 *)(local_res8 + 0x368) = 0;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

