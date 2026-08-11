/* Ghidra address: 01d2b960 */
/* Ghidra symbol: FUN_01d2b960 */


void FUN_01d2b960(longlong *param_1,longlong *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 local_40;
  undefined1 local_38 [16];
  
  if ((((1 < (int)param_1[9]) && (cVar1 = (**(code **)(*param_1 + 0x58))(param_1), cVar1 != '\0'))
      && (param_2 != (longlong *)0x0)) &&
     (((param_1[10] != 0 &&
       (0 < *(int *)((longlong)param_1 + 0x1c) - *(int *)((longlong)param_1 + 0x14))) &&
      (0 < (int)param_1[4] - (int)param_1[3])))) {
    (**(code **)(*(longlong *)param_2[0xf] + 0x10))((longlong *)param_2[0xf],param_1[0xc]);
    uVar2 = FUN_005fd4d0(param_1[0xc]);
    uVar2 = FUN_01a90ee0(uVar2);
    FUN_005fd4e0(param_2[0xf],uVar2);
    if ((char)param_1[2] != '\0') {
      uVar2 = FUN_01a90ee0(0xff);
      FUN_005fd4e0(param_2[0xf],uVar2);
    }
    if ((*PTR_DAT_02002c80 != '\0') && (DAT_01ff3f85 != '\0')) {
      uVar2 = FUN_01a90ee0(0);
      FUN_005fd4e0(param_2[0xf],uVar2);
    }
    if (((*(char *)((longlong)param_1 + 0x5d) != '\0') &&
        (cVar1 = FUN_00f06890(L"QuickDraw",0), cVar1 != '\0')) &&
       ((*(int *)((longlong)param_1 + 0x1c) - *(int *)((longlong)param_1 + 0x14)) * 2 <
        (int)param_1[9])) {
      FUN_005fd6d0(param_2[0xf],1);
      FUN_01d27ab0(param_2,param_1[10],(int)param_1[9],
                   *(undefined4 *)(*(longlong *)(param_1[0xc] + 0x18) + 0x2c),
                   *(undefined4 *)((longlong)param_1 + 0x14),(int)param_1[3],
                   *(undefined4 *)((longlong)param_1 + 0x1c),(int)param_1[4]);
      return;
    }
    (**(code **)(*param_2 + 200))(param_2,*(undefined4 *)param_1[10],((undefined4 *)param_1[10])[1])
    ;
    iVar4 = 2;
    if (1 < (int)param_1[9]) {
      iVar5 = (int)param_1[9] + -1;
      do {
        FUN_00498350(local_38,0,0,0,0);
        iVar3 = thunk_FUN_03b7fa88((longlong)param_1 + 0x14,local_38);
        if (iVar3 == 0) {
          local_40 = FUN_00498310(*(undefined4 *)(param_1[10] + -8 + (longlong)(iVar4 + -1) * 8),
                                  *(undefined4 *)(param_1[10] + -4 + (longlong)(iVar4 + -1) * 8));
          cVar1 = FUN_01a8e4c0((longlong)param_1 + 0x14,&local_40);
          if (cVar1 != '\0') {
            local_40 = FUN_00498310(*(undefined4 *)(param_1[10] + -8 + (longlong)iVar4 * 8),
                                    *(undefined4 *)(param_1[10] + -4 + (longlong)iVar4 * 8));
            cVar1 = FUN_01a8e4c0((longlong)param_1 + 0x14,&local_40);
            if (cVar1 != '\0') goto LAB_01d2bbc7;
          }
          local_40 = FUN_00498310(*(undefined4 *)(param_1[10] + -8 + (longlong)(iVar4 + -1) * 8),
                                  *(undefined4 *)(param_1[10] + -4 + (longlong)(iVar4 + -1) * 8));
          FUN_00498310(*(undefined4 *)(param_1[10] + -8 + (longlong)iVar4 * 8),
                       *(undefined4 *)(param_1[10] + -4 + (longlong)iVar4 * 8));
          FUN_01d2b6e0(param_1);
        }
        else {
LAB_01d2bbc7:
          (**(code **)(*param_2 + 200))
                    (param_2,*(undefined4 *)(param_1[10] + -8 + (longlong)(iVar4 + -1) * 8),
                     *(undefined4 *)(param_1[10] + -4 + (longlong)(iVar4 + -1) * 8));
          (**(code **)(*param_2 + 0xc0))(param_2);
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  return;
}

