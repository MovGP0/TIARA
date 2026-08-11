/* Ghidra address: 00bf4650 */
/* Ghidra symbol: FUN_00bf4650 */


void FUN_00bf4650(longlong *param_1,ushort param_2,int param_3,int param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int extraout_var;
  uint uVar5;
  undefined8 local_40 [2];
  undefined8 local_30;
  
  FUN_00650d70(param_1,param_2,param_3,param_4);
  cVar1 = FUN_0064e170(param_1);
  if ((cVar1 == '\0') || ((*(ushort *)(param_1 + 199) & 0x80) == 0)) {
    if (((param_2 & 8) != 0) &&
       ((cVar1 = FUN_0064e170(param_1), cVar1 != '\0' && ((*(ushort *)(param_1 + 199) & 0x400) != 0)
        ))) {
      FUN_00bf1aa0(param_1,param_3,param_4);
      local_30 = FUN_00bf1910(param_1,param_3,param_4);
      uVar4 = FUN_00c10fb0(param_1);
      uVar4 = FUN_00bcbe50(local_30._4_4_,1,uVar4);
      local_30._4_4_ = uVar4;
      if ((int)param_1[0xcf] != 0) {
        local_30._0_4_ = FUN_00bfaa40(param_1);
      }
      if (*(int *)((longlong)param_1 + 0x67c) != 0) {
        local_30._4_4_ = FUN_00bfaa50(param_1);
      }
      local_40[0] = FUN_00c0ee50(param_1,&local_30);
      (**(code **)(*param_1 + 0x2a8))(param_1,local_40);
      local_40[0] = FUN_00bfaa10(param_1);
      FUN_00bfa6c0(param_1,local_40);
      if (((*(ushort *)(param_1 + 199) & 0x40) != 0) &&
         (FUN_00bfaa10(param_1), (int)param_1[0x97] != extraout_var)) {
        *(ushort *)(param_1 + 199) = *(ushort *)(param_1 + 199) | 0x200;
      }
    }
  }
  else {
    uVar2 = (int)param_1[0xb6] - param_3;
    uVar5 = (int)uVar2 >> 0x1f;
    iVar3 = (**(code **)(*param_1 + 0x1a0))(param_1,0x44);
    if (((int)((uVar2 ^ uVar5) - uVar5) < iVar3) &&
       (uVar2 = *(int *)((longlong)param_1 + 0x5b4) - param_4, uVar5 = (int)uVar2 >> 0x1f,
       iVar3 = (**(code **)(*param_1 + 0x1a0))(param_1,0x45), (int)((uVar2 ^ uVar5) - uVar5) < iVar3
       )) {
      return;
    }
    *(ushort *)(param_1 + 199) = *(ushort *)(param_1 + 199) & 0xff7f;
    FUN_0064e9e0(param_1,0,0xffffffff);
  }
  return;
}

