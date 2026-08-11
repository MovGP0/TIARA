/* Ghidra address: 013d14f0 */
/* Ghidra symbol: FUN_013d14f0 */


longlong FUN_013d14f0(longlong param_1,char param_2)

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
  FUN_01d2ae00(local_res8,0);
  uVar2 = FUN_005fd250(&PTR_FUN_005f3290,1);
  *(undefined8 *)(local_res8 + 0x58) = uVar2;
  *(undefined4 *)(local_res8 + 0x4c) = 5;
  *(undefined1 *)(local_res8 + 0x48) = 0;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

