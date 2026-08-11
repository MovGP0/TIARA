/* Ghidra address: 0180c730 */
/* Ghidra symbol: FUN_0180c730 */


void FUN_0180c730(longlong *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined1 local_40 [16];
  undefined1 *local_30;
  longlong *local_20;
  
  local_30 = auStack_78;
  if (*(int *)PTR_DAT_02001400 < param_2) {
    local_20 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
    iVar1 = (**(code **)(*param_1 + 0x60))(param_1);
    uVar2 = FUN_0040c770((double)(iVar1 * param_2) / (double)*(int *)PTR_DAT_02001400);
    (**(code **)(*local_20 + 0x88))(local_20,uVar2);
    iVar1 = (**(code **)(*param_1 + 0x48))(param_1);
    uVar2 = FUN_0040c770((double)(iVar1 * param_2) / (double)*(int *)PTR_DAT_02001400);
    (**(code **)(*local_20 + 0x70))(local_20,uVar2);
    plVar3 = (longlong *)FUN_00609e10(local_20);
    uVar2 = (**(code **)(*local_20 + 0x60))(local_20);
    local_58 = (**(code **)(*local_20 + 0x48))(local_20);
    FUN_004238d0(local_40,0,0,uVar2);
    (**(code **)(*plVar3 + 0x110))(plVar3,local_40,param_1);
    (**(code **)(*param_1 + 0x10))(param_1,local_20);
    FUN_00410f20(local_20);
  }
  return;
}

