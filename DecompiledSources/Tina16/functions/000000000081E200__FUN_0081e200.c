/* Ghidra address: 0081e200 */
/* Ghidra symbol: FUN_0081e200 */


longlong FUN_0081e200(longlong param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
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
  FUN_008101e0(local_res8,0,param_3);
  *(undefined1 *)(local_res8 + 0x22) = 1;
  if ((*(byte *)(*(longlong *)(local_res8 + 0x10) + 0x2c8) & 2) == 0) {
    FUN_005fdab0(*(undefined8 *)(local_res8 + 8),
                 *(undefined4 *)(*(longlong *)(local_res8 + 0x10) + 200));
  }
  else {
    uVar3 = FUN_00781840();
    uVar2 = FUN_00779380(uVar3,0x17);
    FUN_005fdab0(*(undefined8 *)(local_res8 + 8),uVar2);
  }
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

