/* Ghidra address: 005db680 */
/* Ghidra symbol: FUN_005db680 */


longlong FUN_005db680(longlong param_1,char param_2,int param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  int local_1c;
  
  local_30 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_00410e60(local_res8,0);
  FUN_00419260(local_res8 + 8,&DAT_005d3eb0,1,param_3);
  local_1c = 0;
  if (-1 < param_3 + -1) {
    do {
      uVar2 = FUN_005dee00(&PTR_FUN_005d6a40,1);
      *(undefined8 *)(*(longlong *)(local_res8 + 8) + (longlong)local_1c * 8) = uVar2;
      local_1c = local_1c + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

