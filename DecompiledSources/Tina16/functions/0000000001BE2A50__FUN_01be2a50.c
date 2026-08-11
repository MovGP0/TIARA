/* Ghidra address: 01be2a50 */
/* Ghidra symbol: FUN_01be2a50 */


void FUN_01be2a50(longlong *param_1,char param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  longlong local_30;
  longlong *local_28;
  int local_1c;
  
  local_40 = auStack_68;
  *(undefined1 *)((longlong)param_1 + 0x591) = 1;
  if (param_2 != '\0') {
    *(char *)(param_1[0xba] + 0x591) = param_2;
  }
  *(undefined1 *)(param_1 + 0xb2) = 0;
  cVar1 = FUN_01c019e0(param_1);
  if (cVar1 != '\0') {
    *(short *)(param_1 + 99) = (short)param_1[99] + 1;
    local_28 = param_1;
    local_30 = FUN_01c019a0(param_1);
    iVar5 = *(int *)(*(longlong *)(local_30 + 0x10) + 0x10);
    local_1c = 0;
    if (-1 < iVar5 + -1) {
      do {
        uVar2 = FUN_01c019a0(param_1);
        lVar3 = FUN_01bfb960(uVar2,local_1c);
        uVar2 = FUN_01c019a0(param_1);
        lVar4 = FUN_01bfb960(uVar2,local_1c);
        FUN_0064dbe0(*(undefined8 *)(lVar3 + 0x80),*(undefined1 *)(lVar4 + 0x58));
        local_1c = local_1c + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    (**(code **)(*param_1 + 0x108))(param_1);
    FUN_00654410(param_1);
  }
  return;
}

