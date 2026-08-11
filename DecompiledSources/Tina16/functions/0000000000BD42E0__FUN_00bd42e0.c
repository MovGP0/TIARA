/* Ghidra address: 00bd42e0 */
/* Ghidra symbol: FUN_00bd42e0 */


longlong * FUN_00bd42e0(longlong *param_1,char param_2,undefined1 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *local_res8;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_res8 = param_1;
  puVar1 = auStack_48;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  FUN_00410e60(local_res8,0);
  lVar2 = FUN_00bd3e40(&PTR_FUN_00bd2750,1,param_4);
  local_res8[3] = lVar2;
  lVar2 = FUN_00608c80(&PTR_FUN_005f92e8,1);
  local_res8[4] = lVar2;
  *(undefined1 *)(local_res8 + 5) = param_3;
  (**(code **)(*local_res8 + 0x50))(local_res8,param_4);
  *(undefined4 *)(local_res8 + 9) = 0xff000008;
  *(undefined4 *)((longlong)local_res8 + 0x4c) = 0xff000005;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

