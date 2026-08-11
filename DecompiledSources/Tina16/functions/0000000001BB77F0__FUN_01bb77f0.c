/* Ghidra address: 01bb77f0 */
/* Ghidra symbol: FUN_01bb77f0 */


void FUN_01bb77f0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  short sVar1;
  longlong *plVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_58 [40];
  longlong local_30;
  
  local_res18 = param_3;
  local_res20 = param_4;
  local_30 = param_1;
  FUN_00414610(param_3);
  FUN_00414610(local_res20);
  lVar5 = *(longlong *)(local_30 + 0x6f0);
  plVar2 = (longlong *)FUN_017ff620(param_2);
  if (((plVar2 != (longlong *)0x0) && (sVar1 = (**(code **)(*plVar2 + 0xf8))(plVar2), sVar1 == 0x39)
      ) && ((char)plVar2[0x34] == '\x01')) {
    lVar5 = *(longlong *)(plVar2[0x35] + 8);
  }
  if (lVar5 != 0) {
    iVar6 = *(int *)(lVar5 + 0x10);
    iVar4 = 0;
    if (-1 < iVar6 + -1) {
      do {
        uVar3 = FUN_00b94e60(lVar5,iVar4);
        FUN_01bb7690(auStack_58,uVar3);
        iVar4 = iVar4 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  FUN_00414560(&local_res18,2);
  return;
}

