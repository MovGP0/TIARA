/* Ghidra address: 00c02250 */
/* Ghidra symbol: FUN_00c02250 */


void FUN_00c02250(longlong param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (((*param_2 == 0x106) && (*(longlong *)(param_2 + 2) == 8)) &&
     ((*(ulonglong *)(param_2 + 4) & 0x20000000) != 0)) {
    *param_2 = 0;
  }
  cVar1 = FUN_0065be20(param_1);
  if (cVar1 != '\0') {
    uVar3 = FUN_0065b870(param_1);
    iVar2 = thunk_FUN_039bb6fb(uVar3);
    if (iVar2 != 0) {
      if (*(char *)(param_1 + 0x900) == '\0') {
        *(undefined1 *)(param_1 + 0x900) = 1;
        cVar1 = FUN_00c02230(*param_2);
        if (cVar1 != '\0') {
          uVar3 = FUN_0065b870(param_1);
          uVar3 = thunk_FUN_03cb881f(uVar3,*param_2,*(undefined8 *)(param_2 + 2),
                                     *(undefined8 *)(param_2 + 4));
          *(undefined8 *)(param_2 + 6) = uVar3;
          return;
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x900) = 0;
      }
    }
  }
  FUN_00656570(param_1,param_2);
  return;
}

