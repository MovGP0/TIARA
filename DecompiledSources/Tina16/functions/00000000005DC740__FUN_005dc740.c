/* Ghidra address: 005dc740 */
/* Ghidra symbol: FUN_005dc740 */


longlong FUN_005dc740(longlong param_1,char param_2,undefined1 param_3,undefined1 param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
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
  FUN_005dbd70(local_res8,0,param_3,param_4);
  *(undefined1 *)(*(longlong *)(local_res8 + 8) + 0x70) = 1;
  uVar2 = FUN_005e0b50(&PTR_FUN_005d96d0,1,0);
  *(undefined8 *)(local_res8 + 0x10) = uVar2;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

