/* Ghidra address: 00bb6500 */
/* Ghidra symbol: FUN_00bb6500 */


void FUN_00bb6500(longlong param_1,undefined4 param_2,longlong *param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  
  local_30 = 0;
  local_38 = 0;
  local_3c = param_4;
  if (param_4 < param_5) {
    do {
      if (param_5 - local_3c == 1) {
        lVar4 = (longlong)local_3c;
        lVar6 = (longlong)param_5;
        iVar2 = (**(code **)(*param_3 + 0x18))
                          (param_3,*(undefined8 *)(param_1 + lVar4 * 8),
                           *(undefined8 *)(param_1 + lVar6 * 8));
        if (0 < iVar2) {
          FUN_0041b840(&local_38,*(undefined8 *)(param_1 + lVar4 * 8));
          FUN_0041b840(param_1 + lVar4 * 8,*(undefined8 *)(param_1 + lVar6 * 8));
          FUN_0041b840(param_1 + lVar6 * 8,local_38);
        }
        break;
      }
      FUN_0041b840(&local_30,
                   *(undefined8 *)
                    (param_1 + (longlong)(int)(local_3c + ((uint)(param_5 - local_3c) >> 1)) * 8));
      iVar2 = local_3c;
      iVar5 = param_5;
      do {
        while (iVar3 = (**(code **)(*param_3 + 0x18))
                                 (param_3,*(undefined8 *)(param_1 + (longlong)iVar2 * 8),local_30),
              iVar3 < 0) {
          iVar2 = iVar2 + 1;
        }
        while (iVar3 = (**(code **)(*param_3 + 0x18))
                                 (param_3,*(undefined8 *)(param_1 + (longlong)iVar5 * 8),local_30),
              0 < iVar3) {
          iVar5 = iVar5 + -1;
        }
        if (iVar2 <= iVar5) {
          if (iVar2 != iVar5) {
            FUN_0041b840(&local_38,*(undefined8 *)(param_1 + (longlong)iVar2 * 8));
            FUN_0041b840(param_1 + (longlong)iVar2 * 8,
                         *(undefined8 *)(param_1 + (longlong)iVar5 * 8));
            FUN_0041b840(param_1 + (longlong)iVar5 * 8,local_38);
          }
          iVar2 = iVar2 + 1;
          iVar5 = iVar5 + -1;
        }
      } while (iVar2 <= iVar5);
      if (param_5 - iVar2 < iVar5 - local_3c) {
        iVar3 = iVar5;
        iVar1 = local_3c;
        if (iVar2 < param_5) {
          FUN_00bb6500(param_1,param_2,param_3,iVar2,param_5);
        }
      }
      else {
        iVar3 = param_5;
        iVar1 = iVar2;
        if (local_3c < iVar5) {
          FUN_00bb6500(param_1,param_2,param_3,local_3c,iVar5);
        }
      }
      local_3c = iVar1;
      param_5 = iVar3;
    } while (local_3c < param_5);
  }
  FUN_00417840(&local_38,&DAT_00b9f8e0,2);
  return;
}

