/* Ghidra address: 01b6d7e0 */
/* Ghidra symbol: FUN_01b6d7e0 */


void FUN_01b6d7e0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  bool bVar4;
  byte local_29;
  
  lVar1 = param_1[0x13b];
  cVar2 = FUN_004113d0(lVar1,&PTR_FUN_010db178);
  if (cVar2 != '\0') {
    plVar3 = (longlong *)FUN_004113f0(lVar1,&PTR_FUN_010db178);
    cVar2 = (**(code **)(*param_1 + 0x498))(param_1,param_2);
    if ((cVar2 == '\0') && (cVar2 = FUN_010e1d20(param_1,param_2), cVar2 != '\0')) {
      bVar4 = false;
      *(bool *)((longlong)plVar3 + 0x71) = (*(ulonglong *)(param_2 + 8) & 2) == 0;
      if (*(longlong *)(param_2 + 0x10) != 0) {
        bVar4 = *(longlong *)(param_2 + 8) == 0xffff;
        *(undefined8 *)(param_2 + 8) = 0;
        *(undefined8 *)(param_2 + 0x10) = 0;
      }
      if (bVar4) {
        local_29 = 0x6c;
      }
      else {
        (**(code **)(*plVar3 + 0xa0))(plVar3,&local_29);
      }
      *(ulonglong *)(param_2 + 0x10) = (ulonglong)local_29;
      FUN_01b6d8c0(param_1,param_2);
      *(undefined1 *)((longlong)plVar3 + 0x71) = 0;
    }
  }
  return;
}

