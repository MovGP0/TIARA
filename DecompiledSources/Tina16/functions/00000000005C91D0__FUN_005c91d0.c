/* Ghidra address: 005c91d0 */
/* Ghidra symbol: FUN_005c91d0 */


void FUN_005c91d0(longlong param_1,undefined4 param_2,longlong *param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int local_8c;
  undefined1 local_88 [48];
  undefined1 local_58 [48];
  
  FUN_00417580(local_58,&DAT_005bc4e0);
  FUN_00417580(local_88,&DAT_005bc4e0);
  local_8c = param_4;
  if (param_4 < param_5) {
    do {
      if (param_5 - local_8c == 1) {
        lVar4 = (longlong)local_8c;
        lVar6 = (longlong)param_5;
        iVar2 = (**(code **)(*param_3 + 0x18))
                          (param_3,param_1 + lVar4 * 0x30,param_1 + lVar6 * 0x30);
        if (0 < iVar2) {
          FUN_00417c40(local_88,param_1 + lVar4 * 0x30,&DAT_005bc4e0);
          FUN_00417c40(param_1 + lVar4 * 0x30,param_1 + lVar6 * 0x30,&DAT_005bc4e0);
          FUN_00417c40(param_1 + lVar6 * 0x30,local_88,&DAT_005bc4e0);
        }
        break;
      }
      FUN_00417c40(local_58,param_1 + (longlong)(int)(local_8c + ((uint)(param_5 - local_8c) >> 1))
                                      * 0x30,&DAT_005bc4e0);
      iVar2 = local_8c;
      iVar5 = param_5;
      do {
        while (iVar3 = (**(code **)(*param_3 + 0x18))
                                 (param_3,param_1 + (longlong)iVar2 * 0x30,local_58), iVar3 < 0) {
          iVar2 = iVar2 + 1;
        }
        while (iVar3 = (**(code **)(*param_3 + 0x18))
                                 (param_3,param_1 + (longlong)iVar5 * 0x30,local_58), 0 < iVar3) {
          iVar5 = iVar5 + -1;
        }
        if (iVar2 <= iVar5) {
          if (iVar2 != iVar5) {
            FUN_00417c40(local_88,param_1 + (longlong)iVar2 * 0x30,&DAT_005bc4e0);
            FUN_00417c40(param_1 + (longlong)iVar2 * 0x30,param_1 + (longlong)iVar5 * 0x30,
                         &DAT_005bc4e0);
            FUN_00417c40(param_1 + (longlong)iVar5 * 0x30,local_88,&DAT_005bc4e0);
          }
          iVar2 = iVar2 + 1;
          iVar5 = iVar5 + -1;
        }
      } while (iVar2 <= iVar5);
      if (param_5 - iVar2 < iVar5 - local_8c) {
        iVar3 = iVar5;
        iVar1 = local_8c;
        if (iVar2 < param_5) {
          FUN_005c91d0(param_1,param_2,param_3,iVar2,param_5);
        }
      }
      else {
        iVar3 = param_5;
        iVar1 = iVar2;
        if (local_8c < iVar5) {
          FUN_005c91d0(param_1,param_2,param_3,local_8c,iVar5);
        }
      }
      local_8c = iVar1;
      param_5 = iVar3;
    } while (local_8c < param_5);
  }
  FUN_00417840(local_88,&DAT_005bc4e0,2);
  return;
}

