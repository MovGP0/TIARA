/* Ghidra address: 009b72c0 */
/* Ghidra symbol: FUN_009b72c0 */


void FUN_009b72c0(longlong param_1,undefined4 param_2,longlong *param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int local_4c;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  
  FUN_00417580(local_38,&DAT_009427f8);
  FUN_00417580(local_48,&DAT_009427f8);
  local_4c = param_4;
  if (param_4 < param_5) {
    do {
      if (param_5 - local_4c == 1) {
        lVar4 = (longlong)local_4c;
        lVar6 = (longlong)param_5;
        iVar2 = (**(code **)(*param_3 + 0x18))
                          (param_3,param_1 + lVar4 * 0x10,param_1 + lVar6 * 0x10);
        if (0 < iVar2) {
          FUN_00417c40(local_48,param_1 + lVar4 * 0x10,&DAT_009427f8);
          FUN_00417c40(param_1 + lVar4 * 0x10,param_1 + lVar6 * 0x10,&DAT_009427f8);
          FUN_00417c40(param_1 + lVar6 * 0x10,local_48,&DAT_009427f8);
        }
        break;
      }
      FUN_00417c40(local_38,param_1 + (longlong)(int)(local_4c + ((uint)(param_5 - local_4c) >> 1))
                                      * 0x10,&DAT_009427f8);
      iVar2 = local_4c;
      iVar5 = param_5;
      do {
        while (iVar3 = (**(code **)(*param_3 + 0x18))
                                 (param_3,param_1 + (longlong)iVar2 * 0x10,local_38), iVar3 < 0) {
          iVar2 = iVar2 + 1;
        }
        while (iVar3 = (**(code **)(*param_3 + 0x18))
                                 (param_3,param_1 + (longlong)iVar5 * 0x10,local_38), 0 < iVar3) {
          iVar5 = iVar5 + -1;
        }
        if (iVar2 <= iVar5) {
          if (iVar2 != iVar5) {
            FUN_00417c40(local_48,param_1 + (longlong)iVar2 * 0x10,&DAT_009427f8);
            FUN_00417c40(param_1 + (longlong)iVar2 * 0x10,param_1 + (longlong)iVar5 * 0x10,
                         &DAT_009427f8);
            FUN_00417c40(param_1 + (longlong)iVar5 * 0x10,local_48,&DAT_009427f8);
          }
          iVar2 = iVar2 + 1;
          iVar5 = iVar5 + -1;
        }
      } while (iVar2 <= iVar5);
      if (param_5 - iVar2 < iVar5 - local_4c) {
        iVar3 = iVar5;
        iVar1 = local_4c;
        if (iVar2 < param_5) {
          FUN_009b72c0(param_1,param_2,param_3,iVar2,param_5);
        }
      }
      else {
        iVar3 = param_5;
        iVar1 = iVar2;
        if (local_4c < iVar5) {
          FUN_009b72c0(param_1,param_2,param_3,local_4c,iVar5);
        }
      }
      local_4c = iVar1;
      param_5 = iVar3;
    } while (local_4c < param_5);
  }
  FUN_00417840(local_48,&DAT_009427f8,2);
  return;
}

