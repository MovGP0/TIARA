/* Ghidra address: 01743f00 */
/* Ghidra symbol: FUN_01743f00 */


void FUN_01743f00(longlong param_1,int *param_2)

{
  char *pcVar1;
  int iVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  
  if (*(longlong *)(param_1 + 0x30) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x488);
  }
  iVar2 = *param_2;
  if ((-1 < iVar2) && (iVar2 <= *(int *)(param_1 + 0xd0))) {
    pcVar1 = (char *)(param_1 + 8 + (longlong)iVar2 * 0x30);
    if (*pcVar1 != (char)param_2[1]) {
      *pcVar1 = (char)param_2[1];
      uVar4 = FUN_016ed780(uVar4,*(undefined1 *)(param_1 + 0x19));
      *(undefined8 *)(pcVar1 + 8) = uVar4;
    }
    if ((*(char *)(param_1 + 0xc) == '\0') || (*(char *)((longlong)param_2 + 5) == '\0')) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
    *(undefined1 *)(param_1 + 8) = uVar3;
  }
  return;
}

