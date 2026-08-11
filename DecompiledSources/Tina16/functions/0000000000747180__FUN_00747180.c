/* Ghidra address: 00747180 */
/* Ghidra symbol: FUN_00747180 */


void FUN_00747180(undefined8 param_1,int param_2,int param_3,undefined8 param_4)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 local_28;
  int local_20 [2];
  undefined1 local_18;
  undefined8 local_10;
  
  local_28 = 0;
  local_10 = 0;
  lVar3 = FUN_00747100(param_1);
  if (lVar3 != 0) {
    if (param_2 < 0) {
      bVar1 = true;
    }
    else {
      lVar3 = FUN_00747100(param_1);
      bVar1 = *(int *)(*(longlong *)(*(longlong *)(lVar3 + 0x4b8) + 0x10) + 0x10) <= param_2;
    }
    if (bVar1) {
      FUN_0041ddd0(&local_10,PTR_PTR_020017f0);
      local_18 = 0;
      local_20[0] = param_2;
      uVar4 = FUN_0044d530(&PTR_FUN_00737098,1,local_10,local_20,0);
      FUN_004134c0(uVar4);
    }
    if (param_3 < 0) {
      bVar1 = true;
    }
    else {
      lVar3 = FUN_00747100(param_1);
      bVar1 = *(int *)(*(longlong *)(*(longlong *)(lVar3 + 0x4b0) + 0x10) + 0x10) <= param_3;
    }
    if (bVar1) {
      FUN_0041ddd0(&local_28,PTR_PTR_02004128);
      local_18 = 0;
      local_20[0] = param_3;
      uVar4 = FUN_0044d530(&PTR_FUN_00737098,1,local_28,local_20,0);
      FUN_004134c0(uVar4);
    }
    iVar2 = FUN_007470a0(param_1,param_4);
    if (iVar2 < 0) {
      FUN_00746ef0(param_1,param_4,param_2,param_3);
    }
    else {
      lVar3 = FUN_00747090(param_1,iVar2);
      *(int *)(lVar3 + 0x20) = param_2;
      *(int *)(lVar3 + 0x24) = param_3;
    }
  }
  FUN_00414480(&local_28);
  FUN_00414480(&local_10);
  return;
}

