/* Ghidra address: 00685410 */
/* Ghidra symbol: FUN_00685410 */


longlong * FUN_00685410(longlong *param_1,char param_2,undefined8 param_3)

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
  FUN_006835c0(local_res8,0,param_3);
  lVar2 = (**(code **)(*local_res8 + 0x2c8))(local_res8);
  lVar2 = (**(code **)(lVar2 + 0x128))(lVar2,1);
  local_res8[0x9e] = lVar2;
  *(longlong **)(lVar2 + 0x38) = local_res8;
  *(undefined1 *)((longlong)local_res8 + 0x54a) = 0;
  *(undefined4 *)((longlong)local_res8 + 0x53c) = 0;
  *(undefined1 *)(local_res8 + 0xa7) = 1;
  *(undefined1 *)(local_res8 + 0xaf) = 0;
  *(undefined4 *)((longlong)local_res8 + 0x57c) = 500;
  FUN_00414480(local_res8 + 0xb0);
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

