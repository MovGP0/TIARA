/* Ghidra address: 01bb05c0 */
/* Ghidra symbol: FUN_01bb05c0 */


longlong FUN_01bb05c0(longlong param_1,char param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
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
  *(undefined8 **)(local_res8 + 8) = param_3;
  iVar2 = (**(code **)*param_3)(param_3);
  iVar3 = FUN_004b6da0(*(undefined8 *)(local_res8 + 8));
  *(int *)(local_res8 + 0x20) = iVar2 - iVar3;
  FUN_00419260(local_res8 + 0x10,&DAT_00406578,1,(longlong)(iVar2 - iVar3));
  FUN_004b84c0(*(undefined8 *)(local_res8 + 8),*(undefined8 *)(local_res8 + 0x10),
               (longlong)*(int *)(local_res8 + 0x20));
  *(undefined4 *)(local_res8 + 0x18) = 0;
  *(undefined4 *)(local_res8 + 0x1c) = 0xffffffff;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

