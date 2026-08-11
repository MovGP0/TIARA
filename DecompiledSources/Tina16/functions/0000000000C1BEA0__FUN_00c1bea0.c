/* Ghidra address: 00c1bea0 */
/* Ghidra symbol: FUN_00c1bea0 */


longlong FUN_00c1bea0(longlong param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong local_res8;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_res8 = param_1;
  puVar1 = auStack_48;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  FUN_00c1bdf0(local_res8,0,param_3);
  *(undefined8 *)(local_res8 + 0x18) = param_3;
  uVar2 = thunk_FUN_041a3f2d(param_3,0,0x100,0);
  FUN_00c1be90(local_res8,uVar2);
  if (0 < *(int *)(local_res8 + 8)) {
    uVar3 = FUN_004095c0((longlong)(*(int *)(local_res8 + 8) * 4));
    *(undefined8 *)(local_res8 + 0x10) = uVar3;
    uVar2 = thunk_FUN_041a3f2d(param_3,0,0x100,uVar3);
    FUN_00c1be90(local_res8,uVar2);
  }
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

