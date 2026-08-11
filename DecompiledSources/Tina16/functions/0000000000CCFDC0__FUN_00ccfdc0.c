/* Ghidra address: 00ccfdc0 */
/* Ghidra symbol: FUN_00ccfdc0 */


longlong FUN_00ccfdc0(longlong param_1,char param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined8 uVar3;
  longlong local_res8;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_28 = 0;
  local_res8 = param_1;
  puVar1 = auStack_48;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  FUN_00410e60(local_res8,0);
  cVar2 = FUN_00ccdb00();
  if (cVar2 == '\0') {
    FUN_0041ddd0(&local_28,PTR_PTR_02002cc0);
    uVar3 = FUN_0086dfd0(&PTR_FUN_00cca3a8,1,local_28);
    FUN_004134c0(uVar3);
  }
  *(undefined1 *)(local_res8 + 0x34) = 0;
  *(undefined1 *)(local_res8 + 10) = 0;
  *(undefined4 *)(local_res8 + 0x54) = 1;
  FUN_00414480(&local_28);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

