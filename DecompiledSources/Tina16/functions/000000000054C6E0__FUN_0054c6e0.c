/* Ghidra address: 0054c6e0 */
/* Ghidra symbol: FUN_0054c6e0 */


longlong *
FUN_0054c6e0(longlong *param_1,char param_2,undefined8 param_3,undefined8 param_4,longlong *param_5)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *local_res8;
  undefined1 auStack_58 [32];
  longlong *local_38;
  undefined8 local_28;
  undefined1 *local_20;
  
  local_20 = auStack_58;
  local_28 = 0;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  local_38 = param_5;
  FUN_0054c180(local_res8,0,param_3,param_4);
  lVar5 = FUN_00547190(local_res8);
  *param_5 = lVar5 + 0x11;
  cVar2 = FUN_0054c670(local_res8);
  if (cVar2 != '\0') {
    iVar3 = (**(code **)(*local_res8 + 0xa8))(local_res8);
    iVar4 = (**(code **)(*local_res8 + 0xb0))(local_res8);
    lVar5 = FUN_0054c640(*param_5,(iVar3 - iVar4) + 1);
    *param_5 = lVar5;
  }
  lVar5 = FUN_0053c6c0(*param_5);
  *param_5 = lVar5;
  FUN_00545c40(&local_28,param_5);
  FUN_0041b840(local_res8 + 5,local_28);
  FUN_0041b800(&local_28);
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

