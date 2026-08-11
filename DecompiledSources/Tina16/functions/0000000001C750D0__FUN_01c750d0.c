/* Ghidra address: 01c750d0 */
/* Ghidra symbol: FUN_01c750d0 */


void FUN_01c750d0(longlong param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  if (*(longlong *)(param_1 + 0x27a8) != 0) {
    local_res10[0] = param_2;
    local_res18[0] = param_3;
    local_res20[0] = param_4;
    lVar2 = FUN_0198d430(*(longlong *)(param_1 + 0x27a8));
    if (lVar2 != 0) {
      if (local_res20[0] < local_res10[0]) {
        FUN_01cefdf0(local_res10,local_res20);
      }
      if (param_5 < local_res18[0]) {
        FUN_01cefdf0(local_res18,&param_5);
      }
      FUN_00b956d0(&local_28,local_res10[0],local_res18[0],local_res20[0],param_5);
      if (local_res20[0] - local_res10[0] < 0x28) {
        iVar1 = FUN_0040c770((double)(0x28 - (local_res20[0] - local_res10[0])) / 2.0);
        local_res10[0] = local_res10[0] - iVar1;
        local_res20[0] = local_res20[0] + iVar1;
      }
      if (param_5 - local_res18[0] < 0x28) {
        iVar1 = FUN_0040c770((double)(0x28 - (param_5 - local_res18[0])) / 2.0);
        local_res18[0] = local_res18[0] - iVar1;
        param_5 = param_5 + iVar1;
      }
      FUN_00b956d0(&local_28,local_res10[0],local_res18[0],local_res20[0],param_5);
      plVar3 = (longlong *)FUN_0198d430(*(undefined8 *)(param_1 + 0x27a8));
      (**(code **)(*plVar3 + 0x20))(plVar3,&local_28);
      uVar4 = FUN_0198d430(*(undefined8 *)(param_1 + 0x27a8));
      FUN_01a98210(uVar4,&local_28);
      FUN_01c74990(param_1,local_28,local_24,local_20,local_1c);
      (**(code **)(**(longlong **)(param_1 + 0xa10) + 0x180))(*(longlong **)(param_1 + 0xa10));
    }
  }
  return;
}

