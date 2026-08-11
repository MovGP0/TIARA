/* Ghidra address: 019a0c10 */
/* Ghidra symbol: FUN_019a0c10 */


void FUN_019a0c10(longlong param_1)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = *(int *)(param_1 + 0x10);
  iVar6 = 0;
  if (-1 < iVar7 + -1) {
    do {
      plVar4 = (longlong *)FUN_00b94e60(param_1,iVar6);
      cVar2 = FUN_0198a580(plVar4);
      if (cVar2 == '\x04') {
        sVar3 = (**(code **)(*plVar4 + 0xf8))(plVar4);
        cVar2 = FUN_01d3f230(plVar4);
        if ((cVar2 == '\0') || ((char)plVar4[0xac] != '\0')) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (((sVar3 == 0x39) && ((char)plVar4[0x34] == '\x01')) &&
           (*(longlong *)(plVar4[0x35] + 8) != 0)) {
          FUN_019a0c10(*(undefined8 *)(plVar4[0x35] + 8));
        }
        if (bVar1) {
          lVar5 = FUN_004113f0(plVar4[0x35],&PTR_FUN_017649b8);
          FUN_01644e40(*(undefined8 *)(lVar5 + 0xd8));
        }
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  return;
}

