/* Ghidra address: 00b39910 */
/* Ghidra symbol: FUN_00b39910 */


longlong FUN_00b39910(longlong param_1,char param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong local_res8;
  undefined1 auStack_58 [40];
  code *local_30;
  longlong local_28;
  undefined1 *local_20;
  
  local_20 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  local_28 = local_res8;
  local_30 = FUN_00b39c60;
  uVar2 = FUN_00b1aac0(&PTR_FUN_00b19d20,1,0x3fff,&local_30);
  *(undefined8 *)(local_res8 + 0x10) = uVar2;
  *(undefined8 *)(local_res8 + 8) = 0;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

