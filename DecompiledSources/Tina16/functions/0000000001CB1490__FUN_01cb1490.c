/* Ghidra address: 01cb1490 */
/* Ghidra symbol: FUN_01cb1490 */


undefined8 * FUN_01cb1490(undefined8 *param_1,char param_2,longlong param_3)

{
  int iVar1;
  undefined1 *puVar2;
  undefined8 *local_res8;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_res8 = param_1;
  puVar2 = auStack_48;
  if (param_2 != '\0') {
    local_res8 = (undefined8 *)FUN_004119e0(param_1,param_2);
    puVar2 = local_20;
  }
  local_20 = puVar2;
  (**(code **)*local_res8)(local_res8,0);
  *(undefined4 *)((longlong)local_res8 + 0xc) = *(undefined4 *)(param_3 + 0xc);
  iVar1 = *(int *)(param_3 + 0x10);
  *(int *)(local_res8 + 2) = iVar1;
  FUN_00409620(local_res8 + 3,(longlong)(iVar1 * 9));
  FUN_00409a70(*(undefined8 *)(param_3 + 0x18),local_res8[3],
               (longlong)(*(int *)((longlong)local_res8 + 0xc) * 9));
  if (param_2 != '\0') {
    local_res8 = (undefined8 *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

