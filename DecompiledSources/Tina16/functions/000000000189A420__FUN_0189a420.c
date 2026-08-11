/* Ghidra address: 0189a420 */
/* Ghidra symbol: FUN_0189a420 */


void FUN_0189a420(longlong param_1,int param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  
  if (param_2 != -1) {
    iVar6 = *(int *)(*(longlong *)(param_1 + 0x4b8) + 0x10);
    iVar5 = 0;
    if (-1 < iVar6 + -1) {
      do {
        uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x4b8),iVar5);
        cVar1 = FUN_004113d0(uVar2,&PTR_FUN_018965d0);
        if (((cVar1 != '\0') &&
            (lVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x4b8),iVar5),
            *(int *)(lVar3 + 0x324) == param_2)) &&
           (lVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x4b8),iVar5),
           *(char *)(lVar3 + 0x319) != '\0')) {
          lVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x4b8),iVar5);
          *(undefined1 *)(lVar3 + 0x319) = 0;
          plVar4 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x4b8),iVar5);
          (**(code **)(*plVar4 + 0x180))(plVar4);
        }
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  return;
}

