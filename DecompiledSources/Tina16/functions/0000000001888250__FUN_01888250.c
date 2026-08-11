/* Ghidra address: 01888250 */
/* Ghidra symbol: FUN_01888250 */


longlong FUN_01888250(longlong param_1,char param_2)

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
  uVar2 = FUN_01801300(&PTR_FUN_01800f10,1);
  *(undefined8 *)(local_res8 + 0x48) = uVar2;
  uVar2 = FUN_01886e30(&DAT_01885a68,1);
  *(undefined8 *)(local_res8 + 0x18) = uVar2;
  uVar2 = FUN_01886e30(&DAT_01885a68,1);
  *(undefined8 *)(local_res8 + 0x20) = uVar2;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x28) = uVar2;
  FUN_004b67b0(uVar2,1);
  *(undefined8 *)(local_res8 + 0x50) = 0;
  uVar2 = FUN_01876d10(&DAT_018755e8,1,0);
  *(undefined8 *)(local_res8 + 0x50) = uVar2;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

