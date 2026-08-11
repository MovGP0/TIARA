/* Ghidra address: 018ae140 */
/* Ghidra symbol: FUN_018ae140 */


void FUN_018ae140(undefined8 param_1,longlong *param_2,int param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  char cVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined1 auStack_1058 [4088];
  undefined8 auStack_60 [5];
  longlong lStack_38;
  longlong *local_30;
  
  uVar6 = ((longlong)param_3 + 1) * 8 + 0xfU & 0xfffffffffffffff0;
  uVar10 = -uVar6;
  uVar4 = uVar10 & 0xfff;
  while ((longlong)uVar10 < (longlong)uVar4) {
    auStack_1058[uVar4] = (char)(uVar4 - 0x1000);
    uVar4 = uVar4 - 0x1000;
  }
  lVar3 = -uVar6;
  plVar8 = (longlong *)((longlong)&lStack_38 + lVar3);
  plVar9 = plVar8;
  for (lVar7 = (longlong)param_3 + 1; lVar7 != 0; lVar7 = lVar7 + -1) {
    *plVar9 = *param_2;
    param_2 = param_2 + 1;
    plVar9 = plVar9 + 1;
  }
  if (-1 < param_3) {
    param_3 = param_3 + 1;
    local_30 = plVar8;
    do {
      plVar9 = (longlong *)*plVar8;
      *(undefined8 *)((longlong)auStack_60 + lVar3) = 0x18ae1d0;
      cVar5 = FUN_004113d0(plVar9,&PTR_FUN_007d94d0);
      if (cVar5 == '\0') {
        *(undefined8 *)((longlong)auStack_60 + lVar3) = 0x18ae1ef;
        cVar5 = FUN_004113d0(plVar9,&PTR_FUN_006cb0d0);
        if (cVar5 != '\0') {
          pcVar1 = *(code **)(*plVar9 + 0x128);
          *(undefined8 *)((longlong)auStack_60 + lVar3) = 0x18ae201;
          (*pcVar1)(plVar9,param_4);
          lVar7 = *plVar8;
          *(undefined8 *)((longlong)auStack_60 + lVar3) = 0x18ae20b;
          FUN_006fa3b0(lVar7,0);
          if (*(longlong *)(*plVar8 + 0x18) != 0) {
            uVar2 = *(undefined8 *)(*plVar8 + 0x18);
            *(undefined8 *)((longlong)auStack_60 + lVar3) = 0x18ae220;
            FUN_007e2da0(uVar2,param_4);
          }
        }
      }
      else {
        *(undefined8 *)((longlong)auStack_60 + lVar3) = 0x18ae1de;
        FUN_007e2f80(plVar9,param_4);
      }
      plVar8 = plVar8 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

