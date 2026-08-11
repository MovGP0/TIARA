/* Ghidra address: 00956c80 */
/* Ghidra symbol: FUN_00956c80 */


longlong FUN_00956c80(longlong param_1,char param_2,undefined8 param_3)

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
  FUN_00954450(local_res8,0,param_3);
  uVar2 = FUN_0099f820(&PTR_FUN_00935ac0,1);
  *(undefined8 *)(local_res8 + 0x128) = uVar2;
  uVar2 = FUN_00410e60(&PTR_FUN_008f5158,1);
  *(undefined8 *)(local_res8 + 0x130) = uVar2;
  FUN_008f9470(uVar2,1);
  *(undefined1 *)(*(longlong *)(local_res8 + 0x130) + 0x10) = 0;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

