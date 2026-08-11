/* Ghidra address: 005c8ac0 */
/* Ghidra symbol: FUN_005c8ac0 */


void FUN_005c8ac0(longlong param_1,undefined4 param_2,longlong *param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int local_9c;
  undefined1 local_98 [56];
  undefined1 local_60 [56];
  
  FUN_00417580(local_60,&DAT_005bc868);
  FUN_00417580(local_98,&DAT_005bc868);
  local_9c = param_4;
  if (param_4 < param_5) {
    do {
      if (param_5 - local_9c == 1) {
        lVar4 = (longlong)local_9c;
        lVar6 = (longlong)param_5;
        iVar2 = (**(code **)(*param_3 + 0x18))
                          (param_3,param_1 + lVar4 * 0x38,param_1 + lVar6 * 0x38);
        if (0 < iVar2) {
          FUN_00417c40(local_98,param_1 + lVar4 * 0x38,&DAT_005bc868);
          FUN_00417c40(param_1 + lVar4 * 0x38,param_1 + lVar6 * 0x38,&DAT_005bc868);
          FUN_00417c40(param_1 + lVar6 * 0x38,local_98,&DAT_005bc868);
        }
        break;
      }
      FUN_00417c40(local_60,param_1 + (longlong)(int)(local_9c + ((uint)(param_5 - local_9c) >> 1))
                                      * 0x38,&DAT_005bc868);
      iVar2 = local_9c;
      iVar5 = param_5;
      do {
        while (iVar3 = (**(code **)(*param_3 + 0x18))
                                 (param_3,param_1 + (longlong)iVar2 * 0x38,local_60), iVar3 < 0) {
          iVar2 = iVar2 + 1;
        }
        while (iVar3 = (**(code **)(*param_3 + 0x18))
                                 (param_3,param_1 + (longlong)iVar5 * 0x38,local_60), 0 < iVar3) {
          iVar5 = iVar5 + -1;
        }
        if (iVar2 <= iVar5) {
          if (iVar2 != iVar5) {
            FUN_00417c40(local_98,param_1 + (longlong)iVar2 * 0x38,&DAT_005bc868);
            FUN_00417c40(param_1 + (longlong)iVar2 * 0x38,param_1 + (longlong)iVar5 * 0x38,
                         &DAT_005bc868);
            FUN_00417c40(param_1 + (longlong)iVar5 * 0x38,local_98,&DAT_005bc868);
          }
          iVar2 = iVar2 + 1;
          iVar5 = iVar5 + -1;
        }
      } while (iVar2 <= iVar5);
      if (param_5 - iVar2 < iVar5 - local_9c) {
        iVar3 = iVar5;
        iVar1 = local_9c;
        if (iVar2 < param_5) {
          FUN_005c8ac0(param_1,param_2,param_3,iVar2,param_5);
        }
      }
      else {
        iVar3 = param_5;
        iVar1 = iVar2;
        if (local_9c < iVar5) {
          FUN_005c8ac0(param_1,param_2,param_3,local_9c,iVar5);
        }
      }
      local_9c = iVar1;
      param_5 = iVar3;
    } while (local_9c < param_5);
  }
  FUN_00417840(local_98,&DAT_005bc868,2);
  return;
}

