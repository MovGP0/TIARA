/* Ghidra address: 01cc77d0 */
/* Ghidra symbol: FUN_01cc77d0 */


longlong FUN_01cc77d0(longlong param_1,longlong *param_2,longlong param_3,int param_4,int param_5,
                     int param_6,char param_7)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong local_68;
  int local_60;
  int local_5c;
  longlong local_40 [2];
  
  local_40[0] = 0;
  iVar2 = 0;
  bVar1 = true;
  iVar4 = *(int *)(param_1 + 0x4470);
  local_60 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar7 = (longlong)local_60;
      if (((*(longlong **)(*(longlong *)(param_1 + 0x4468) + 8 + lVar7 * 0x20) == param_2) &&
          (*(longlong *)(*(longlong *)(param_1 + 0x4468) + 0x18 + lVar7 * 0x20) == param_3)) &&
         (*(int *)(*(longlong *)(param_1 + 0x4468) + 0x10 + lVar7 * 0x20) == param_5 + 1)) {
        local_68 = *(longlong *)(param_1 + 0x4468) + lVar7 * 0x20;
        bVar1 = false;
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x4468) + lVar7 * 0x20);
        lVar5 = 0;
        if (lVar3 != 0) {
          lVar5 = *(longlong *)(lVar3 + -8);
        }
        if (lVar5 < param_4) {
          param_7 = '\x01';
          lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x4468) + lVar7 * 0x20);
          iVar2 = 0;
          if (lVar7 != 0) {
            iVar2 = (int)*(undefined8 *)(lVar7 + -8);
          }
        }
        break;
      }
      local_60 = local_60 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (bVar1) {
    *(int *)(param_1 + 0x4470) = *(int *)(param_1 + 0x4470) + 1;
    lVar7 = 0;
    if (*(longlong *)(param_1 + 0x4468) != 0) {
      lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x4468) + -8);
    }
    if (lVar7 < *(int *)(param_1 + 0x4470)) {
      FUN_00419260(param_1 + 0x4468,&DAT_01cb4bd8,1,(longlong)(*(int *)(param_1 + 0x4470) * 2 + 100)
                  );
    }
    *(longlong **)
     (*(longlong *)(param_1 + 0x4468) + 8 + (longlong)(*(int *)(param_1 + 0x4470) + -1) * 0x20) =
         param_2;
    *(longlong *)
     (*(longlong *)(param_1 + 0x4468) + 0x18 + (longlong)(*(int *)(param_1 + 0x4470) + -1) * 0x20) =
         param_3;
    *(int *)(*(longlong *)(param_1 + 0x4468) + 0x10 +
            (longlong)(*(int *)(param_1 + 0x4470) + -1) * 0x20) = param_5 + 1;
    local_68 = *(longlong *)(param_1 + 0x4468) + (longlong)(*(int *)(param_1 + 0x4470) + -1) * 0x20;
  }
  if (param_7 != '\0') {
    param_6 = param_6 + 1;
    (**(code **)(*param_2 + 0x50))(param_2,param_3 + param_6 * 8 * iVar2,0);
    local_5c = 99999999;
    iVar9 = 0;
    iVar4 = *(int *)(param_1 + 0x4470);
    local_60 = 0;
    if (-1 < iVar4 + -1) {
      do {
        lVar7 = (longlong)local_60;
        if ((*(longlong **)(*(longlong *)(param_1 + 0x4468) + 8 + lVar7 * 0x20) == param_2) &&
           (*(longlong *)(*(longlong *)(param_1 + 0x4468) + 0x18 + lVar7 * 0x20) == param_3)) {
          lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x4468) + lVar7 * 0x20);
          lVar3 = 0;
          if (lVar7 != 0) {
            lVar3 = *(longlong *)(lVar7 + -8);
          }
          if (lVar3 < param_4) {
            if (local_60 < local_5c) {
              local_5c = local_60;
            }
            if (iVar9 < local_60) {
              iVar9 = local_60;
            }
          }
        }
        local_60 = local_60 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    if (local_5c <= iVar9) {
      local_60 = local_5c;
      if (local_5c <= iVar9) {
        iVar4 = (iVar9 - local_5c) + 1;
        do {
          FUN_00419260(*(longlong *)(param_1 + 0x4468) + (longlong)local_60 * 0x20,&DAT_01cb36e0,1,
                       (longlong)param_4);
          local_60 = local_60 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      iVar4 = (int)(0x10000 / (longlong)param_6);
      FUN_00419260(local_40,&DAT_01cc7788,1,(longlong)(param_6 * iVar4));
      iVar8 = 0;
      if (iVar2 <= param_4 + -1) {
        iVar10 = ((param_4 + -1) - iVar2) + 1;
        local_60 = iVar2;
        do {
          if (iVar8 == 0) {
            (**(code **)(*param_2 + 0x18))(param_2,local_40[0],param_6 * 8 * iVar4);
          }
          if (local_5c <= iVar9) {
            iVar6 = (iVar9 - local_5c) + 1;
            iVar2 = local_5c;
            do {
              *(undefined8 *)
               (*(longlong *)(*(longlong *)(param_1 + 0x4468) + (longlong)iVar2 * 0x20) +
               (longlong)local_60 * 8) =
                   *(undefined8 *)
                    (local_40[0] +
                    (longlong)
                    (param_6 * iVar8 +
                    *(int *)(*(longlong *)(param_1 + 0x4468) + 0x10 + (longlong)iVar2 * 0x20)) * 8);
              iVar2 = iVar2 + 1;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
          iVar8 = iVar8 + 1;
          if (iVar8 == iVar4) {
            iVar8 = 0;
          }
          local_60 = local_60 + 1;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
      FUN_00419430(local_40,&DAT_01cc7788);
    }
  }
  FUN_00419430(local_40,&DAT_01cc7788);
  return local_68;
}

