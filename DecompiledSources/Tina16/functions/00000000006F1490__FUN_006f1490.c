/* Ghidra address: 006f1490 */
/* Ghidra symbol: FUN_006f1490 */


longlong FUN_006f1490(longlong param_1,char param_2,longlong param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
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
  if (param_3 == 0) {
    FUN_0041ddd0(&local_28,PTR_PTR_02004130);
    uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,local_28);
    FUN_004134c0(uVar2);
  }
  *(longlong *)(local_res8 + 8) = param_3;
  FUN_006f15c0(local_res8,0);
  FUN_006f15e0(local_res8,0);
  FUN_006f1600(local_res8,1);
  FUN_00414480(&local_28);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

