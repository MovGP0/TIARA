/* Ghidra address: 0129c720 */
/* Ghidra symbol: FUN_0129c720 */


void FUN_0129c720(longlong param_1,undefined4 param_2,longlong *param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int local_6c;
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  
  FUN_00417580(local_48,&DAT_01984be0);
  FUN_00417580(local_68,&DAT_01984be0);
  local_6c = param_4;
  if (param_4 < param_5) {
    do {
      if (param_5 - local_6c == 1) {
        lVar4 = (longlong)local_6c;
        lVar6 = (longlong)param_5;
        iVar2 = (**(code **)(*param_3 + 0x18))
                          (param_3,param_1 + lVar4 * 0x20,param_1 + lVar6 * 0x20);
        if (0 < iVar2) {
          FUN_00417c40(local_68,param_1 + lVar4 * 0x20,&DAT_01984be0);
          FUN_00417c40(param_1 + lVar4 * 0x20,param_1 + lVar6 * 0x20,&DAT_01984be0);
          FUN_00417c40(param_1 + lVar6 * 0x20,local_68,&DAT_01984be0);
        }
        break;
      }
      FUN_00417c40(local_48,param_1 + (longlong)(int)(local_6c + ((uint)(param_5 - local_6c) >> 1))
                                      * 0x20,&DAT_01984be0);
      iVar2 = local_6c;
      iVar5 = param_5;
      do {
        while (iVar3 = (**(code **)(*param_3 + 0x18))
                                 (param_3,param_1 + (longlong)iVar2 * 0x20,local_48), iVar3 < 0) {
          iVar2 = iVar2 + 1;
        }
        while (iVar3 = (**(code **)(*param_3 + 0x18))
                                 (param_3,param_1 + (longlong)iVar5 * 0x20,local_48), 0 < iVar3) {
          iVar5 = iVar5 + -1;
        }
        if (iVar2 <= iVar5) {
          if (iVar2 != iVar5) {
            FUN_00417c40(local_68,param_1 + (longlong)iVar2 * 0x20,&DAT_01984be0);
            FUN_00417c40(param_1 + (longlong)iVar2 * 0x20,param_1 + (longlong)iVar5 * 0x20,
                         &DAT_01984be0);
            FUN_00417c40(param_1 + (longlong)iVar5 * 0x20,local_68,&DAT_01984be0);
          }
          iVar2 = iVar2 + 1;
          iVar5 = iVar5 + -1;
        }
      } while (iVar2 <= iVar5);
      if (param_5 - iVar2 < iVar5 - local_6c) {
        iVar3 = iVar5;
        iVar1 = local_6c;
        if (iVar2 < param_5) {
          FUN_0129c720(param_1,param_2,param_3,iVar2,param_5);
        }
      }
      else {
        iVar3 = param_5;
        iVar1 = iVar2;
        if (local_6c < iVar5) {
          FUN_0129c720(param_1,param_2,param_3,local_6c,iVar5);
        }
      }
      local_6c = iVar1;
      param_5 = iVar3;
    } while (local_6c < param_5);
  }
  FUN_00417840(local_68,&DAT_01984be0,2);
  return;
}

