/* Ghidra address: 00c0e260 */
/* Ghidra symbol: FUN_00c0e260 */


undefined1
FUN_00c0e260(longlong param_1,int *param_2,longlong *param_3,undefined4 *param_4,int *param_5,
            undefined8 *param_6)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined1 local_31;
  undefined8 local_30 [2];
  longlong local_20;
  
  local_30[0] = 0;
  local_20 = 0;
  iVar1 = param_2[1];
  iVar6 = iVar1 + -1;
  if (((*(longlong *)(param_1 + 0x538) != 0) && (-1 < iVar6)) &&
     (iVar3 = (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x28))
                        (*(longlong **)(param_1 + 0x4e8)), iVar6 < iVar3)) {
    (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x18))
              (*(longlong **)(param_1 + 0x4e8),&local_20,iVar6);
    if (iVar6 == 0) {
      (**(code **)(**(longlong **)(param_1 + 0x538) + 0x168))(*(longlong **)(param_1 + 0x538));
    }
    else {
      uVar5 = FUN_00bcfb80(*(undefined8 *)(param_1 + 0x4e8),iVar1 + -2);
      (**(code **)(**(longlong **)(param_1 + 0x538) + 0x160))(*(longlong **)(param_1 + 0x538),uVar5)
      ;
    }
    (**(code **)(**(longlong **)(param_1 + 0x538) + 0x158))
              (*(longlong **)(param_1 + 0x538),local_20,iVar6);
    iVar1 = *param_2;
    if (0 < iVar1) {
      iVar6 = 0;
      if (local_20 != 0) {
        iVar6 = *(int *)(local_20 + -4);
      }
      if (iVar1 <= iVar6) {
        while (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x538) + 0xf8))
                                 (*(longlong **)(param_1 + 0x538)), cVar2 == '\0') {
          iVar6 = (**(code **)(**(longlong **)(param_1 + 0x538) + 0x138))
                            (*(longlong **)(param_1 + 0x538));
          *param_5 = iVar6 + 1;
          (**(code **)(**(longlong **)(param_1 + 0x538) + 0x120))
                    (*(longlong **)(param_1 + 0x538),local_30);
          FUN_00414ad0(param_3,local_30[0]);
          if (*param_5 <= iVar1) {
            iVar6 = 0;
            if (*param_3 != 0) {
              iVar6 = *(int *)(*param_3 + -4);
            }
            if (iVar1 < *param_5 + iVar6) {
              uVar5 = (**(code **)(**(longlong **)(param_1 + 0x538) + 0x128))
                                (*(longlong **)(param_1 + 0x538));
              *param_6 = uVar5;
              uVar4 = (**(code **)(**(longlong **)(param_1 + 0x538) + 0x130))
                                (*(longlong **)(param_1 + 0x538));
              *param_4 = uVar4;
              local_31 = 1;
              goto LAB_00c0e493;
            }
          }
          (**(code **)(**(longlong **)(param_1 + 0x538) + 0x148))(*(longlong **)(param_1 + 0x538));
        }
      }
    }
  }
  FUN_00414480(param_3);
  *param_6 = 0;
  local_31 = 0;
LAB_00c0e493:
  FUN_00414480(local_30);
  FUN_00414480(&local_20);
  return local_31;
}

