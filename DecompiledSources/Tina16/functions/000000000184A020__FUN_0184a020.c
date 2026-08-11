/* Ghidra address: 0184a020 */
/* Ghidra symbol: FUN_0184a020 */


longlong FUN_0184a020(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong local_res8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 local_50;
  undefined1 local_48;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 *local_20;
  
  local_20 = auStack_78;
  local_28 = 0;
  local_30 = 0;
  local_res8 = param_1;
  puVar1 = auStack_78;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  FUN_00410ae0(param_3,&local_28);
  FUN_00410ae0(param_3,&local_30);
  local_58 = local_30;
  FUN_01847460(local_res8,0,local_28,5);
  uVar2 = FUN_018472d0(&PTR_FUN_0183e4a0,1);
  *(undefined8 *)(local_res8 + 0xa0) = uVar2;
  FUN_00414ad0(local_res8 + 0x88,param_4);
  *(undefined8 *)(local_res8 + 0x90) = param_3;
  FUN_0184af70(local_res8,param_3);
  local_58 = 0;
  local_50 = 1;
  local_48 = 0;
  uVar2 = FUN_01847a00(&PTR_FUN_01843af8,1,0,7);
  FUN_01847420(local_res8,uVar2);
  FUN_00414560(&local_30,2);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

