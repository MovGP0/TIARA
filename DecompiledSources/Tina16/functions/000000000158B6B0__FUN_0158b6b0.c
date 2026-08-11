/* Ghidra address: 0158b6b0 */
/* Ghidra symbol: FUN_0158b6b0 */


void FUN_0158b6b0(longlong param_1,undefined4 param_2,longlong *param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int local_bc;
  undefined1 local_ac [66];
  undefined1 local_6a [66];
  
  FUN_00417580(local_6a,&DAT_015764a8);
  FUN_00417580(local_ac,&DAT_015764a8);
  local_bc = param_4;
  if (param_4 < param_5) {
    do {
      if (param_5 - local_bc == 1) {
        lVar4 = (longlong)local_bc;
        lVar6 = (longlong)param_5;
        iVar2 = (**(code **)(*param_3 + 0x18))
                          (param_3,param_1 + lVar4 * 0x42,param_1 + lVar6 * 0x42);
        if (0 < iVar2) {
          FUN_00417c40(local_ac,param_1 + lVar4 * 0x42,&DAT_015764a8);
          FUN_00417c40(param_1 + lVar4 * 0x42,param_1 + lVar6 * 0x42,&DAT_015764a8);
          FUN_00417c40(param_1 + lVar6 * 0x42,local_ac,&DAT_015764a8);
        }
        break;
      }
      FUN_00417c40(local_6a,param_1 + (longlong)(int)(local_bc + ((uint)(param_5 - local_bc) >> 1))
                                      * 0x42,&DAT_015764a8);
      iVar2 = local_bc;
      iVar5 = param_5;
      do {
        while (iVar3 = (**(code **)(*param_3 + 0x18))
                                 (param_3,param_1 + (longlong)iVar2 * 0x42,local_6a), iVar3 < 0) {
          iVar2 = iVar2 + 1;
        }
        while (iVar3 = (**(code **)(*param_3 + 0x18))
                                 (param_3,param_1 + (longlong)iVar5 * 0x42,local_6a), 0 < iVar3) {
          iVar5 = iVar5 + -1;
        }
        if (iVar2 <= iVar5) {
          if (iVar2 != iVar5) {
            FUN_00417c40(local_ac,param_1 + (longlong)iVar2 * 0x42,&DAT_015764a8);
            FUN_00417c40(param_1 + (longlong)iVar2 * 0x42,param_1 + (longlong)iVar5 * 0x42,
                         &DAT_015764a8);
            FUN_00417c40(param_1 + (longlong)iVar5 * 0x42,local_ac,&DAT_015764a8);
          }
          iVar2 = iVar2 + 1;
          iVar5 = iVar5 + -1;
        }
      } while (iVar2 <= iVar5);
      if (param_5 - iVar2 < iVar5 - local_bc) {
        iVar3 = iVar5;
        iVar1 = local_bc;
        if (iVar2 < param_5) {
          FUN_0158b6b0(param_1,param_2,param_3,iVar2,param_5);
        }
      }
      else {
        iVar3 = param_5;
        iVar1 = iVar2;
        if (local_bc < iVar5) {
          FUN_0158b6b0(param_1,param_2,param_3,local_bc,iVar5);
        }
      }
      local_bc = iVar1;
      param_5 = iVar3;
    } while (local_bc < param_5);
  }
  FUN_00417840(local_ac,&DAT_015764a8,2);
  return;
}

