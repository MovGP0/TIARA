/* Ghidra address: 00bcbbd0 */
/* Ghidra symbol: FUN_00bcbbd0 */


void FUN_00bcbbd0(longlong *param_1,int param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 *local_50;
  longlong *local_48;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_38 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  *(int *)(param_1 + 0x33) = param_2;
  local_48 = param_1;
  local_3c = param_2;
  if (param_2 < 1000) {
    (**(code **)(*param_1 + 8))(param_1,&local_28,param_2);
    uVar1 = FUN_00bc8260(local_48);
    FUN_0043f750(&local_30,uVar1);
    local_58 = local_30;
    local_50 = &LAB_00bcbd34;
    FUN_00416cd0(local_20,4,local_28,L" (pos ");
    lVar2 = FUN_0044d490(&PTR_FUN_00bc3a78,1,local_20[0]);
  }
  else {
    (**(code **)(*param_1 + 8))(param_1,&local_38,param_2);
    lVar2 = FUN_0044d490(&PTR_FUN_00bc3a78,1,local_38);
  }
  *(int *)(lVar2 + 0x30) = local_3c;
  uVar1 = FUN_00bc8260(local_48);
  *(undefined4 *)(lVar2 + 0x34) = uVar1;
  uVar3 = FUN_00bcbbc0(auStack_78);
  FUN_004133b0(lVar2,uVar3);
  FUN_00414560(&local_38,4);
  return;
}

