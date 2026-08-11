/* Ghidra address: 01cc04c0 */
/* Ghidra symbol: FUN_01cc04c0 */


undefined8 * FUN_01cc04c0(undefined8 *param_1,char param_2,longlong param_3)

{
  undefined1 *puVar1;
  undefined8 *local_res8;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined8 local_30 [2];
  
  local_40 = auStack_68;
  local_30[0] = 0;
  local_res8 = param_1;
  puVar1 = auStack_68;
  if (param_2 != '\0') {
    local_res8 = (undefined8 *)FUN_004119e0(param_1,param_2);
    puVar1 = local_40;
  }
  local_40 = puVar1;
  (**(code **)*local_res8)(local_res8,0);
  *(undefined1 *)(local_res8 + 1) = *(undefined1 *)(param_3 + 8);
  FUN_01cc0ae0(param_3,local_30);
  FUN_01cc09f0(local_res8,local_30[0]);
  *(undefined1 *)(local_res8 + 3) = *(undefined1 *)(param_3 + 0x18);
  *(undefined8 *)((longlong)local_res8 + 0x1a) = *(undefined8 *)(param_3 + 0x1a);
  *(undefined8 *)((longlong)local_res8 + 0x22) = *(undefined8 *)(param_3 + 0x22);
  *(undefined1 *)((longlong)local_res8 + 0x2a) = *(undefined1 *)(param_3 + 0x2a);
  *(undefined1 *)((longlong)local_res8 + 0x2b) = *(undefined1 *)(param_3 + 0x2b);
  *(undefined4 *)((longlong)local_res8 + 0x2c) = *(undefined4 *)(param_3 + 0x2c);
  *(undefined2 *)(local_res8 + 6) = *(undefined2 *)(param_3 + 0x30);
  *(undefined1 *)((longlong)local_res8 + 0x19) = *(undefined1 *)(param_3 + 0x19);
  FUN_00414480(local_30);
  if (param_2 != '\0') {
    local_res8 = (undefined8 *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

