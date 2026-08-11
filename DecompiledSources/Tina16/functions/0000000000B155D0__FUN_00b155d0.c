/* Ghidra address: 00b155d0 */
/* Ghidra symbol: FUN_00b155d0 */


undefined8 FUN_00b155d0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined1 *local_38;
  longlong local_30 [2];
  
  local_30[0] = 0;
  local_38 = (undefined1 *)0x0;
  FUN_00b15100(local_30,param_2);
  iVar5 = 0;
  if (local_30[0] != 0) {
    iVar5 = *(int *)(local_30[0] + -4);
  }
  iVar4 = 1;
  if (0 < iVar5) {
    do {
      cVar1 = *(char *)(local_30[0] + -1 + (longlong)iVar4);
      if (cVar1 != '\0') {
        FUN_004153d0(&local_38,cVar1,0);
        uVar2 = FUN_00415ab0(local_38);
        uVar2 = FUN_0043e820(uVar2);
        FUN_00415430(&local_38,uVar2);
        lVar3 = FUN_00414df0(local_30);
        *(undefined1 *)(lVar3 + -1 + (longlong)iVar4) = *local_38;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_00b15310(param_1,local_30[0]);
  FUN_00414590(&local_38,2);
  return param_1;
}

