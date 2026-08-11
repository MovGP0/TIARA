/* Ghidra address: 010b6d50 */
/* Ghidra symbol: FUN_010b6d50 */


void FUN_010b6d50(longlong *param_1,longlong *param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong *local_20;
  
  local_30 = auStack_58;
  if ((param_3 == 0) || (param_4 == 0)) {
    uVar1 = (**(code **)(*param_1 + 0x60))(param_1);
    (**(code **)(*param_2 + 0x88))(param_2,uVar1);
    uVar1 = (**(code **)(*param_1 + 0x48))(param_1);
    (**(code **)(*param_2 + 0x70))(param_2,uVar1);
  }
  else {
    local_30 = auStack_58;
    (**(code **)(*param_2 + 0x88))(param_2,param_3);
    (**(code **)(*param_2 + 0x70))(param_2,param_4);
  }
  local_20 = (longlong *)FUN_006056e0(&PTR_FUN_005f7f40,1,param_2,0);
  (**(code **)(*local_20 + 0x88))(local_20,0,0,param_1);
  FUN_00410f20(local_20);
  return;
}

