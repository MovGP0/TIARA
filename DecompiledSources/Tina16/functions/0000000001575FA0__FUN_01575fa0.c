/* Ghidra address: 01575fa0 */
/* Ghidra symbol: FUN_01575fa0 */


longlong FUN_01575fa0(longlong param_1,char param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  longlong local_res8;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 *local_20;
  
  local_20 = auStack_78;
  local_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  local_res8 = param_1;
  puVar1 = auStack_78;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  *(undefined4 *)(local_res8 + 8) = param_3;
  FUN_015f5620(&local_38,&DAT_0157614c,3);
  FUN_00417c40(local_res8 + 0x10,&local_38,&DAT_00e021a8);
  FUN_015f5620(&local_50,&DAT_0157614c,3);
  FUN_00417c40(local_res8 + 0x28,&local_50,&DAT_00e021a8);
  FUN_00417840(&local_50,&DAT_00e021a8,2);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

