/* Ghidra address: 01364e80 */
/* Ghidra symbol: FUN_01364e80 */


longlong * FUN_01364e80(longlong *param_1,char param_2,longlong param_3)

{
  undefined1 *puVar1;
  undefined2 uVar2;
  undefined4 uVar3;
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
  local_res8[2] = param_3;
  if (param_3 != 0) {
    FUN_01c6cf20(param_3);
  }
  uVar3 = (**(code **)(*local_res8 + 0x30))(local_res8);
  uVar2 = (**(code **)(*local_res8 + 0x38))(local_res8,uVar3);
  *(undefined2 *)(local_res8 + 1) = uVar2;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

