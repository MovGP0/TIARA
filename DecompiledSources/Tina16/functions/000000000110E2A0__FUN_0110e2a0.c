/* Ghidra address: 0110e2a0 */
/* Ghidra symbol: FUN_0110e2a0 */


ulonglong FUN_0110e2a0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  short sVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong unaff_RSI;
  undefined6 uVar7;
  
  iVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))(*(longlong **)(param_1 + 8));
  if (0 < iVar4) {
    uVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))
                      (*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x1c));
    lVar6 = FUN_004113f0(uVar5,&PTR_FUN_01105d80);
    plVar2 = *(longlong **)(lVar6 + 0x20);
    if (plVar2 != (longlong *)0x0) {
      sVar3 = (**(code **)(*plVar2 + 0xf8))(plVar2);
      uVar7 = (undefined6)(unaff_RSI >> 0x10);
      if (sVar3 == 100) {
        unaff_RSI = CONCAT62(uVar7,0xc3);
      }
      else {
        unaff_RSI = CONCAT62(uVar7,7);
        cVar1 = *(char *)(lVar6 + 0x110);
        if (cVar1 == '\0') {
          unaff_RSI = CONCAT62(uVar7,4);
        }
        else if (cVar1 == '\x01') {
          unaff_RSI = CONCAT62(uVar7,7) | 8;
        }
        else if (cVar1 == '\x04') {
          unaff_RSI = CONCAT62(uVar7,5);
        }
      }
    }
  }
  return unaff_RSI & 0xffffffff;
}

