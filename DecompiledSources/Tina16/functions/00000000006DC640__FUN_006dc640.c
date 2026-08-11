/* Ghidra address: 006dc640 */
/* Ghidra symbol: FUN_006dc640 */


void FUN_006dc640(longlong param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  
  FUN_00411a80(param_1,param_2);
  FUN_006dfe80(*(undefined8 *)(param_1 + 8));
  *(undefined1 *)(param_1 + 0x38) = 1;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + 8);
  if (lVar3 != 0) {
    FUN_004aee50(*(undefined8 *)(lVar3 + 0x568),param_1,0);
  }
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + 8);
  if (*(longlong *)(lVar3 + 0x4f8) == param_1) {
    *(undefined8 *)(lVar3 + 0x4f8) = 0;
  }
  lVar3 = FUN_006dd390(param_1);
  if ((lVar3 != 0) && (*(char *)(lVar3 + 0x38) == '\0')) {
    iVar2 = FUN_006dd870(lVar3,param_1);
    cVar1 = FUN_006dcde0(lVar3,iVar2 != -1);
    if (cVar1 != '\0') {
      FUN_006dd0c0(param_1,0);
      FUN_006dd340(lVar3,0);
    }
  }
  if ((*(longlong *)(*(longlong *)(param_1 + 8) + 8) != 0) &&
     ((lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + 8), *(char *)(lVar3 + 0x58c) == '\0' ||
      ((*(uint *)(lVar3 + 0xa4) & 0x2000) == 0)))) {
    uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 8);
    pcVar4 = (code *)FUN_00411550(uVar5,0xffa6);
    (*pcVar4)(uVar5,param_1);
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    uVar5 = FUN_006dc7a0(param_1);
    thunk_FUN_041b2403(uVar5,0x1101,0,*(undefined8 *)(param_1 + 0x20));
  }
  FUN_006dc990(param_1,0);
  FUN_004b1010(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

