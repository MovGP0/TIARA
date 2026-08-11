/* Ghidra address: 0095f2b0 */
/* Ghidra symbol: FUN_0095f2b0 */


longlong FUN_0095f2b0(longlong param_1,char param_2)

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
  FUN_00410e60(local_res8,0);
  *(undefined8 *)(local_res8 + 0x18) = 0;
  uVar2 = FUN_00957440(&PTR_FUN_00911038,1,local_res8);
  *(undefined8 *)(local_res8 + 0x28) = uVar2;
  uVar2 = FUN_00957440(&PTR_FUN_00911038,1,local_res8);
  *(undefined8 *)(local_res8 + 0x30) = uVar2;
  uVar2 = FUN_00957440(&PTR_FUN_00911038,1,local_res8);
  *(undefined8 *)(local_res8 + 0x38) = uVar2;
  uVar2 = FUN_00957440(&PTR_FUN_00911038,1,local_res8);
  *(undefined8 *)(local_res8 + 0x40) = uVar2;
  FUN_0095fbb0(local_res8);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

