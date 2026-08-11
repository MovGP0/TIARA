/* Ghidra address: 01cb1910 */
/* Ghidra symbol: FUN_01cb1910 */


undefined8 * FUN_01cb1910(undefined8 *param_1,char param_2,longlong param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 *local_res8;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_res8 = param_1;
  puVar1 = auStack_48;
  if (param_2 != '\0') {
    local_res8 = (undefined8 *)FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  (**(code **)*local_res8)(local_res8,0);
  *(undefined4 *)(local_res8 + 4) = *(undefined4 *)(param_3 + 0x20);
  *(undefined4 *)((longlong)local_res8 + 0x24) = *(undefined4 *)(param_3 + 0x24);
  *(undefined4 *)(local_res8 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((longlong)local_res8 + 0xc) = *(undefined4 *)(param_3 + 0xc);
  uVar2 = FUN_00409570((longlong)(*(int *)(local_res8 + 2) * *(int *)((longlong)local_res8 + 0x24)))
  ;
  local_res8[3] = uVar2;
  FUN_00409a70(*(undefined8 *)(param_3 + 0x18),uVar2,
               (longlong)
               (*(int *)((longlong)local_res8 + 0xc) * *(int *)((longlong)local_res8 + 0x24)));
  if (param_2 != '\0') {
    local_res8 = (undefined8 *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

