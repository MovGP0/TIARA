/* Ghidra address: 0184b750 */
/* Ghidra symbol: FUN_0184b750 */


void FUN_0184b750(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  iVar2 = FUN_01847410(param_1);
  lVar3 = FUN_0184b910(param_1,iVar2 + -1);
  *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)(*(longlong *)(lVar3 + 0x18) + 0x48);
  FUN_00414ad0(param_1 + 0x50,*(undefined8 *)(*(longlong *)(lVar3 + 0x18) + 0x50));
  if (*(char *)(param_1 + 0x48) == '\t') {
    *(undefined1 *)(param_1 + 0x48) = 5;
    iVar2 = FUN_01847410(param_1);
    lVar4 = FUN_0184b910(param_1,iVar2 + -2);
    FUN_00414ad0(param_1 + 0x50,*(undefined8 *)(*(longlong *)(lVar4 + 0x18) + 0x50));
  }
  *(undefined1 *)(param_1 + 0x19) = *(undefined1 *)(*(longlong *)(lVar3 + 0x18) + 0x19);
  iVar2 = FUN_01847410(param_1);
  if (iVar2 == 1) {
    lVar3 = FUN_0184b910(param_1,0);
    cVar1 = FUN_004113d0(*(undefined8 *)(lVar3 + 0x18),&DAT_01843700);
    if (cVar1 != '\0') {
      lVar3 = FUN_0184b910(param_1,0);
      *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(lVar3 + 0x18);
      *(undefined1 *)(param_1 + 0x88) = 1;
      return;
    }
  }
  iVar2 = FUN_01847410(param_1);
  if (iVar2 == 2) {
    lVar3 = FUN_0184b910(param_1,0);
    cVar1 = FUN_004113d0(*(undefined8 *)(lVar3 + 0x18),&PTR_FUN_01843978);
    if (cVar1 != '\0') {
      lVar3 = FUN_0184b910(param_1,0);
      *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(lVar3 + 0x18);
      uVar5 = FUN_0184b910(param_1,1);
      uVar5 = FUN_0184b520(uVar5,0);
      *(undefined8 *)(param_1 + 0xa0) = uVar5;
      *(undefined1 *)(param_1 + 0x88) = 2;
      return;
    }
  }
  iVar2 = FUN_01847410(param_1);
  if (iVar2 == 2) {
    lVar3 = FUN_0184b910(param_1,0);
    cVar1 = FUN_004113d0(*(undefined8 *)(lVar3 + 0x18),&DAT_01843700);
    if ((cVar1 != '\0') &&
       (lVar3 = FUN_0184b910(param_1,0), *(char *)(*(longlong *)(lVar3 + 0x18) + 0x48) == '\x06')) {
      lVar3 = FUN_0184b910(param_1,0);
      lVar3 = *(longlong *)(lVar3 + 0x18);
      *(longlong *)(param_1 + 0x30) = lVar3;
      *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(lVar3 + 0x30);
      uVar5 = FUN_0184b910(param_1,1);
      *(undefined8 *)(param_1 + 0xa8) = uVar5;
      *(undefined1 *)(param_1 + 0x88) = 3;
      return;
    }
  }
  *(undefined1 *)(param_1 + 0x88) = 0;
  return;
}

