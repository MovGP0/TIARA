/* Ghidra address: 0180cb40 */
/* Ghidra symbol: FUN_0180cb40 */


undefined8 FUN_0180cb40(undefined8 param_1,char param_2,longlong param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  undefined8 local_res8;
  undefined1 auStack_88 [32];
  double local_68;
  double local_60;
  undefined1 *local_50;
  
  local_50 = auStack_88;
  local_res8 = param_1;
  puVar1 = auStack_88;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_50;
  }
  local_50 = puVar1;
  uVar2 = FUN_019508b0(param_3);
  uVar3 = FUN_01950860(param_3);
  dVar4 = (double)FUN_019508b0(param_3);
  local_60 = (double)FUN_01950860(param_3);
  local_68 = dVar4 + *(double *)(param_3 + 0xa8);
  local_60 = local_60 + *(double *)(param_3 + 0xb0);
  FUN_0180cca0(local_res8,0,uVar2,uVar3);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

