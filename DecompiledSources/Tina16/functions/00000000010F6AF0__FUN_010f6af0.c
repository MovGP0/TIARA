/* Ghidra address: 010f6af0 */
/* Ghidra symbol: FUN_010f6af0 */


void FUN_010f6af0(longlong param_1,byte param_2,undefined1 param_3,char param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  bool bVar7;
  undefined1 local_29;
  
  iVar1 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x7d8) + 0x4f0) + 0x28))();
  iVar6 = 0;
  if (-1 < iVar1 + -1) {
    do {
      plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x7d8) + 0x4f0);
      uVar3 = (**(code **)(*plVar5 + 0x30))(plVar5,iVar6);
      plVar4 = (longlong *)FUN_004113f0(uVar3,&PTR_FUN_011051a8);
      plVar5 = plVar4;
      if ((char)plVar4[2] == '\0') {
LAB_010f6b9d:
        if ((char)plVar4[2] == '\0') {
          if (param_2 < 8) {
            bVar7 = ((int)CONCAT71((int7)((ulonglong)plVar5 >> 8),1) << (param_2 & 0x1f) & 6U) != 0;
          }
          else {
            bVar7 = false;
          }
          if (bVar7) goto LAB_010f6bc6;
        }
      }
      else {
        if (param_2 < 8) {
          uVar2 = (int)CONCAT71((int7)((ulonglong)plVar4 >> 8),1) << (param_2 & 0x1f);
          plVar5 = (longlong *)(ulonglong)CONCAT31((int3)(uVar2 >> 8),(uVar2 & 5) != 0);
        }
        else {
          plVar5 = (longlong *)0x0;
        }
        if ((char)plVar5 == '\0') goto LAB_010f6b9d;
LAB_010f6bc6:
        local_29 = 0;
        FUN_010f6740(param_1,plVar4,0,&local_29,0);
        (**(code **)(*plVar4 + 0x10))(plVar4,0);
      }
      iVar6 = iVar6 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  if (param_4 != '\0') {
    FUN_010e8e30(*(undefined8 *)(param_1 + 0x9b0),param_3);
  }
  return;
}

