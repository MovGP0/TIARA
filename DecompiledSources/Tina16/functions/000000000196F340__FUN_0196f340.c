/* Ghidra address: 0196f340 */
/* Ghidra symbol: FUN_0196f340 */


void FUN_0196f340(undefined8 param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  local_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  if (*(longlong *)(param_2 + 0x200) != 0) {
    FUN_0196f340(param_1,*(longlong *)(param_2 + 0x200));
  }
  lVar2 = FUN_01951400(param_2);
  iVar6 = *(int *)(lVar2 + 0x10);
  iVar5 = 0;
  if (-1 < iVar6 + -1) {
    do {
      lVar3 = FUN_004aeac0(lVar2,iVar5);
      cVar1 = FUN_01953b80(lVar3);
      if ((cVar1 == '\0') &&
         (plVar4 = (longlong *)
                   FUN_0184cde0(*(undefined8 *)(param_2 + 0x248),*(undefined8 *)(lVar3 + 0x10)),
         plVar4 != (longlong *)0x0)) {
        FUN_00468700(&local_50,lVar3);
        (**(code **)(*plVar4 + 8))(plVar4,&local_50);
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  FUN_00460ba0(&local_50);
  return;
}

