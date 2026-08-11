/* Ghidra address: 017baf50 */
/* Ghidra symbol: FUN_017baf50 */


undefined8 FUN_017baf50(longlong *param_1,int param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  char cVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined1 auStack_1058 [4088];
  undefined8 auStack_60 [5];
  longlong lStack_38;
  longlong *local_30;
  
  uVar5 = ((longlong)param_2 + 1) * 8 + 0xfU & 0xfffffffffffffff0;
  uVar8 = -uVar5;
  uVar2 = uVar8 & 0xfff;
  while ((longlong)uVar8 < (longlong)uVar2) {
    auStack_1058[uVar2] = (char)(uVar2 - 0x1000);
    uVar2 = uVar2 - 0x1000;
  }
  lVar1 = -uVar5;
  plVar7 = (longlong *)((longlong)&lStack_38 + lVar1);
  for (lVar6 = (longlong)param_2 + 1; lVar6 != 0; lVar6 = lVar6 + -1) {
    *plVar7 = *param_1;
    param_1 = param_1 + 1;
    plVar7 = plVar7 + 1;
  }
  local_30 = (longlong *)((longlong)&lStack_38 + lVar1);
  *(undefined8 *)((longlong)auStack_60 + lVar1) = 0x17bafc2;
  uVar4 = FUN_00410e60(&PTR_FUN_00472dd0,CONCAT71((int7)(uVar2 >> 8),1));
  *(undefined8 *)((longlong)auStack_60 + lVar1) = 0x17bafd2;
  FUN_004aef40(uVar4,param_2 + 1);
  if (-1 < param_2) {
    param_2 = param_2 + 1;
    plVar7 = local_30;
    do {
      lVar6 = *plVar7;
      if (lVar6 != 0) {
        *(undefined8 *)((longlong)auStack_60 + lVar1) = 0x17baff5;
        cVar3 = FUN_017bae90(lVar6);
        if (cVar3 != '\0') {
          lVar6 = *plVar7;
          *(undefined8 *)((longlong)auStack_60 + lVar1) = 0x17bb004;
          FUN_004ae7e0(uVar4,lVar6);
        }
      }
      plVar7 = plVar7 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return uVar4;
}

