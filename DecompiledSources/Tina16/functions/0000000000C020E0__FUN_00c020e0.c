/* Ghidra address: 00c020e0 */
/* Ghidra symbol: FUN_00c020e0 */


void FUN_00c020e0(longlong *param_1,ulonglong param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  longlong *local_30;
  
  uVar2 = (uint)param_2;
  if (uVar2 < 0x10) {
    bVar3 = ((int)CONCAT62((int6)(param_2 >> 0x10),1) << ((byte)param_2 & 0x1f) & 0x3ffU) != 0;
  }
  else {
    bVar3 = false;
  }
  if ((bVar3) && (0 < param_4)) {
    iVar1 = (**(code **)(*(longlong *)param_1[0x9d] + 0x28))((longlong *)param_1[0x9d]);
    if (iVar1 < 1) {
      iVar1 = 1;
    }
    if (param_4 <= iVar1) {
      local_30 = (longlong *)FUN_00c11370(&PTR_FUN_00be9758,1,param_1);
      (**(code **)(*local_30 + 0x18))(local_30,param_4);
      (**(code **)(*local_30 + 8))(local_30,param_3);
      (**(code **)(*local_30 + 0x10))(local_30,param_2 & 0xffffffff);
      *(uint *)((longlong)local_30 + 0x24) = uVar2;
      FUN_00c11340(local_30,1);
      FUN_00c112c0(local_30,*(longlong *)(param_1[0xb7] + 8) == 0);
      (**(code **)(*param_1 + 0x300))(param_1,&local_30);
      if (local_30 != (longlong *)0x0) {
        if (param_1[(longlong)(int)uVar2 + 0xac] != 0) {
          FUN_00c01ee0(param_1,param_2 & 0xffffffff);
        }
        param_1[(longlong)(int)uVar2 + 0xac] = (longlong)local_30;
        FUN_004ae7e0(param_1[0xbd],param_1[(longlong)(int)uVar2 + 0xac]);
      }
    }
  }
  return;
}

