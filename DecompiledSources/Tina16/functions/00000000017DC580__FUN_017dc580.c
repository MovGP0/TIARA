/* Ghidra address: 017dc580 */
/* Ghidra symbol: FUN_017dc580 */


void FUN_017dc580(longlong param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 local_3c [12];
  
  if (*(char *)(param_1 + 0x18) == '\x02') {
    *param_2 = 0;
    *param_3 = 0;
    iVar4 = 0;
    iVar5 = *(int *)(param_1 + 8) + -1;
    iVar3 = 1;
    if (0 < iVar5) {
      do {
        cVar1 = FUN_017d7470(*(undefined8 *)(param_1 + 0x1b0),iVar3 + -1,local_3c);
        if (cVar1 == '\0') {
          iVar2 = param_4 * ((*(int *)(param_1 + 8) -
                             *(int *)(*(longlong *)(param_1 + 0x1b0) + 0x10)) + -1) + iVar4 * 2;
          param_2[iVar3] = *(undefined8 *)(*(longlong *)(param_1 + 0x1c8) + (longlong)iVar2 * 8);
          param_3[iVar3] =
               *(undefined8 *)(*(longlong *)(param_1 + 0x1c8) + (longlong)(iVar2 + 1) * 8);
          iVar4 = iVar4 + 1;
        }
        else {
          param_2[iVar3] = 0;
          param_3[iVar3] = 0;
        }
        iVar3 = iVar3 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  return;
}

