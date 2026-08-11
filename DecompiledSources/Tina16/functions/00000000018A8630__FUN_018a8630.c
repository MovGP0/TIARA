/* Ghidra address: 018a8630 */
/* Ghidra symbol: FUN_018a8630 */


undefined1 FUN_018a8630(longlong *param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined1 local_29;
  undefined8 local_20;
  
  local_20 = 0;
  local_29 = 0;
  if (*(char *)((longlong)param_1 + 0x571) == '\0') {
    if (((char)param_1[0xae] == '\0') || ((char)param_1[0xb1] == '\0')) {
      lVar3 = param_1[0xf];
      cVar1 = FUN_004113d0(lVar3,&PTR_FUN_018a1608);
      if (cVar1 != '\0') {
        param_1[0x94] = lVar3;
      }
      DAT_02110670 = 0;
      *(undefined4 *)(param_1[0xaa] + 0x50c) = 0;
      DAT_02110688 = 0xffffffff;
      *(undefined1 *)((longlong)param_1 + 0x4b9) = 0;
      if ((char)param_1[0xae] == '\0') {
        cVar1 = *(char *)(*(longlong *)(param_2 + 0x220) + 0x28);
        if (cVar1 == '\0') {
          param_1[0xab] = *(longlong *)(*(longlong *)(param_2 + 0x220) + 0x20);
        }
        else {
          *(char *)(param_1 + 0xac) = cVar1;
        }
        if (*(longlong *)(param_2 + 0x1c0) == 0) {
          FUN_00414b50(&local_20,*(undefined8 *)(*(longlong *)(param_2 + 0x240) + 0x38));
        }
        else {
          FUN_00441920(&local_20,*(undefined8 *)(param_2 + 0x1c0));
        }
        (**(code **)(*param_1 + 0x2e0))(param_1,param_2,local_20,local_20,0,0);
        *(undefined1 *)(param_1 + 0xae) = 1;
        FUN_00659460(param_1[0xaa],1);
        uVar2 = FUN_0040c770((double)*(int *)(*(longlong *)(param_2 + 0x220) + 0x14) * DAT_02110690)
        ;
        FUN_018a8fb0(param_1,uVar2);
        FUN_018a8dc0(param_1,*(undefined1 *)(*(longlong *)(param_2 + 0x220) + 0x13));
        FUN_018a8ea0(param_1,*(undefined1 *)(*(longlong *)(param_2 + 0x220) + 0x1d));
        pcVar4 = (code *)FUN_00411550(param_1,0xffc5);
        cVar1 = (*pcVar4)(param_1);
        if (cVar1 != '\0') {
          cVar1 = FUN_004113d0(param_1[1],&PTR_FUN_018a1608);
          if (cVar1 == '\0') {
            pcVar4 = (code *)FUN_00411550(param_1,0xffb1);
            (*pcVar4)(param_1,1);
          }
          *(undefined1 *)(*(longlong *)(param_2 + 0x220) + 0x2a) = 1;
          *(undefined1 *)(param_1[0xaa] + 0x550) = 1;
          uVar5 = FUN_0065b870(param_1[0xa0]);
          uVar6 = FUN_0065b870(param_1[0xa0]);
          uVar7 = FUN_00429990(uVar6,0xffffffec);
          FUN_00429fc0(uVar5,0xffffffec,uVar7 | 0x500000);
        }
        FUN_018aba70(param_1);
        FUN_018abf10(param_1);
        FUN_018a9e90(param_1);
        local_29 = 1;
      }
      else {
        lVar3 = FUN_018b0ad0(param_1[0xaf],*(undefined4 *)(param_1[0xaf] + 0x40));
        *(longlong *)(lVar3 + 0x30) = param_2;
        lVar3 = FUN_018b0ad0(param_1[0xaf],*(undefined4 *)(param_1[0xaf] + 0x40));
        *(undefined8 *)(lVar3 + 0x38) = param_3;
        (**(code **)(*param_1 + 800))(param_1,param_2);
        local_29 = 1;
      }
    }
    else {
      (**(code **)(*param_1 + 0x2e8))(param_1,param_2,0,0,0,0);
    }
  }
  FUN_00414480(&local_20);
  return local_29;
}

