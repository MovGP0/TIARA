/* Ghidra address: 01bd3d70 */
/* Ghidra symbol: FUN_01bd3d70 */


longlong FUN_01bd3d70(longlong param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong local_res8;
  undefined1 auStack_68 [40];
  code *local_40;
  longlong local_38;
  undefined1 *local_30;
  undefined8 local_20;
  
  local_30 = auStack_68;
  local_res8 = param_1;
  puVar1 = auStack_68;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_01bd3330(local_res8,0,param_3);
  *(undefined1 *)(local_res8 + 0x38c) = 0;
  *(undefined4 *)(local_res8 + 0x368) = 2;
  *(undefined1 *)(local_res8 + 0x38d) = 1;
  uVar2 = FUN_00742bf0(&PTR_FUN_007334d8,1,local_res8);
  *(undefined8 *)(local_res8 + 0x370) = uVar2;
  local_20 = *(undefined8 *)(local_res8 + 0x370);
  FUN_00742eb0(local_20,0);
  local_38 = local_res8;
  local_40 = FUN_01bd4140;
  FUN_00742ef0(local_20,&local_40);
  FUN_00742ed0(local_20,0x2ee);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

