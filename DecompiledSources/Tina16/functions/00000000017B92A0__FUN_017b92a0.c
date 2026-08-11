/* Ghidra address: 017b92a0 */
/* Ghidra symbol: FUN_017b92a0 */


undefined1 FUN_017b92a0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  char local_22;
  undefined1 local_21;
  longlong *local_20;
  
  local_30 = auStack_58;
  local_21 = 0;
  local_20 = (longlong *)FUN_007fc180(&PTR_FUN_00c5ac78,1,*(undefined8 *)PTR_DAT_02004030);
  FUN_017b96e0(param_1);
  plVar2 = (longlong *)FUN_017b9690(param_1);
  (**(code **)(*plVar2 + 0x38))(plVar2,local_20);
  iVar1 = (**(code **)(*local_20 + 0x2d0))(local_20);
  if (iVar1 == 1) {
    local_21 = 1;
    local_22 = (char)param_1[1];
    (**(code **)(*param_1 + 0xa8))(param_1,param_2);
    plVar2 = (longlong *)FUN_017b9690(param_1);
    (**(code **)(*plVar2 + 0x30))(plVar2,local_20);
    FUN_017b9730(param_1);
    if (local_22 != '\0') {
      (**(code **)(*param_1 + 0xa0))(param_1,param_2);
    }
    FUN_019abac0(param_1);
  }
  FUN_00410f20(local_20);
  return local_21;
}

