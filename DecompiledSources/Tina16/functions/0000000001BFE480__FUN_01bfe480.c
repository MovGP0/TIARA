/* Ghidra address: 01bfe480 */
/* Ghidra symbol: FUN_01bfe480 */


void FUN_01bfe480(longlong *param_1,char param_2)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  if (*(char *)((longlong)param_1 + 0x95) != param_2) {
    uVar4 = FUN_01bfd960(param_1);
    lVar5 = FUN_01bf9620(uVar4);
    if (((*(ushort *)(lVar5 + 0x34) & 1) == 0) &&
       (cVar1 = (**(code **)(*param_1 + 0x70))(param_1), cVar1 == '\0')) {
      if ((param_2 == '\0') &&
         ((param_1[0x10] == 0 || (iVar3 = FUN_004d3e30(param_1[0x10]), iVar3 != 0)))) {
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
      *(undefined1 *)((longlong)param_1 + 0x95) = uVar2;
    }
    else {
      *(char *)((longlong)param_1 + 0x95) = param_2;
    }
    (**(code **)(*param_1 + 0x68))(param_1);
    return;
  }
  return;
}

