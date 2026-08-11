/* Ghidra address: 0049fac0 */
/* Ghidra symbol: FUN_0049fac0 */


longlong FUN_0049fac0(longlong param_1,char param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong local_res8;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  undefined4 local_34;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  
  local_50 = auStack_78;
  local_res8 = param_1;
  puVar1 = auStack_78;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_50;
  }
  local_50 = puVar1;
  FUN_00410e60(local_res8,0);
  uVar2 = FUN_004e9860(&PTR_FUN_0049eaa0,1,1);
  *(undefined8 *)(local_res8 + 8) = uVar2;
  local_30 = FUN_0049ee90(&DAT_004984f8,1,&LAB_00474bd8);
  local_28 = *(longlong *)(local_res8 + 8);
  local_20 = local_30;
  local_34 = FUN_00597e50(local_28 + 8,&local_30);
  *(undefined1 *)(local_20 + 0x20) = 1;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

