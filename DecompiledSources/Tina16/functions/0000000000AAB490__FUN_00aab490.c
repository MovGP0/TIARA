/* Ghidra address: 00aab490 */
/* Ghidra symbol: FUN_00aab490 */


int FUN_00aab490(longlong param_1,undefined8 param_2,longlong param_3,int param_4,int param_5,
                undefined8 param_6,int param_7,int param_8,int *param_9,undefined1 *param_10,
                undefined1 *param_11)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_3c;
  undefined4 local_30;
  undefined4 local_2c;
  
  local_3c = 0;
  *param_9 = 0;
  *param_10 = 0;
  local_30 = 0;
  *param_11 = 0;
  iVar8 = *(int *)(param_1 + 0x10);
  iVar6 = 0;
  if (-1 < iVar8 + -1) {
    do {
      uVar2 = FUN_00aab7d0(param_1,iVar6);
      cVar1 = FUN_004113d0(uVar2,&PTR_FUN_00a8c408);
      if (cVar1 != '\0') {
        lVar3 = FUN_00aab7d0(param_1,iVar6);
        if (0 < *(int *)(lVar3 + 8)) {
          iVar4 = iVar6 + *(int *)(lVar3 + 8) + -1;
          iVar5 = 0;
          if (iVar6 <= iVar4) {
            iVar7 = (iVar4 - iVar6) + 1;
            iVar4 = iVar6;
            do {
              iVar5 = iVar5 + *(int *)(param_3 + (longlong)iVar4 * 4);
              iVar4 = iVar4 + 1;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
          *(int *)(lVar3 + 0x28) = iVar5;
          if (param_4 == *(int *)(lVar3 + 0xc)) {
            local_2c = 0;
            if (*(char *)(lVar3 + 0x24) == '\x01') {
              iVar4 = FUN_0040c840((double)*(int *)(lVar3 + 0x20));
            }
            else if (*(char *)(lVar3 + 0x24) == '\x02') {
              iVar4 = FUN_0040c840((double)(*(int *)(lVar3 + 0x20) * param_7) / 1000.0);
            }
            else {
              iVar4 = 0;
            }
            if ((iVar4 == 0) && (param_8 == 1)) {
              iVar4 = param_7;
            }
            iVar5 = iVar4 - *(int *)(lVar3 + 0x14);
            if (iVar5 < 0) {
              iVar5 = 0;
            }
            iVar7 = (**(code **)(**(longlong **)(lVar3 + 0x80) + 0x30))
                              (*(longlong **)(lVar3 + 0x80),param_2,0,
                               (*(int *)(lVar3 + 0x28) - *(int *)(lVar3 + 0x10)) - param_5,iVar5,0,
                               &local_2c,&local_30);
            *(int *)(lVar3 + 0x30) = iVar7;
            iVar5 = iVar7 + *(int *)(lVar3 + 0x14);
            if (iVar5 < local_3c) {
              iVar5 = local_3c;
            }
            if (*(char *)(lVar3 + 0x24) == '\x01') {
              lVar3 = FUN_0040c840((double)*(int *)(lVar3 + 0x20));
              if (lVar3 < iVar7) {
                lVar3 = (longlong)iVar7;
              }
              if (lVar3 < iVar5) {
                lVar3 = (longlong)iVar5;
              }
              local_3c = (int)lVar3;
              *param_10 = 1;
            }
            else {
              local_3c = iVar5;
              if (*(char *)(lVar3 + 0x24) == '\x02') {
                if (iVar4 < *param_9) {
                  iVar4 = *param_9;
                }
                *param_9 = iVar4;
                *param_10 = 1;
              }
            }
          }
          else if (param_4 < *(int *)(lVar3 + 0xc)) {
            *param_11 = 1;
          }
        }
      }
      iVar6 = iVar6 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  iVar8 = local_3c;
  if (local_3c <= *param_9) {
    iVar8 = *param_9;
  }
  *param_9 = iVar8;
  return local_3c;
}

