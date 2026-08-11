/* Ghidra address: 004aa0c0 */
/* Ghidra symbol: FUN_004aa0c0 */


longlong FUN_004aa0c0(longlong param_1,char param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
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
  FUN_00410e60(local_res8,0);
  if (DAT_02011620 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = DAT_02011620 + 0x10;
  }
  uVar2 = FUN_004ed1c0(&PTR_FUN_004a6c00,1,lVar3);
  *(undefined8 *)(local_res8 + 0x10) = uVar2;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

