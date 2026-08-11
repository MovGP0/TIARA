/* Ghidra address: 005bf620 */
/* Ghidra symbol: FUN_005bf620 */


longlong FUN_005bf620(longlong param_1,char param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
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
  uVar2 = FUN_005c2ae0(&PTR_FUN_005bebb0,1,0);
  *(undefined8 *)(local_res8 + 0x10) = uVar2;
  FUN_00419260(local_res8 + 8,&DAT_005bc5e8,1,0x65);
  puVar4 = (undefined8 *)(local_res8 + 0x18);
  for (lVar3 = 0x15; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  thunk_FUN_03a92fc6(local_res8 + 0x18);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

