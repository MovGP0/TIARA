/* Ghidra address: 018223a0 */
/* Ghidra symbol: FUN_018223a0 */


undefined8 FUN_018223a0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  
  FUN_00414480(param_2);
  iVar1 = *(int *)(param_1 + 0x84);
  bVar2 = true;
  bVar3 = true;
  iVar6 = 1;
  *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + -1;
  do {
    *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
    if ((bool)(bVar3 & bVar2)) {
      cVar4 = FUN_0043e100(*(undefined2 *)
                            (*(longlong *)(param_1 + 0xa8) + -2 +
                            (longlong)*(int *)(param_1 + 0x84) * 2),&DAT_018224fc);
      if (cVar4 == '\0') {
        cVar4 = FUN_0043e100(*(undefined2 *)
                              (*(longlong *)(param_1 + 0xa8) + -2 +
                              (longlong)*(int *)(param_1 + 0x84) * 2),&DAT_0182251c);
        if (cVar4 != '\0') {
          iVar6 = iVar6 + -1;
        }
      }
      else {
        iVar6 = iVar6 + 1;
      }
    }
    if ((bVar2) &&
       (*(short *)(*(longlong *)(param_1 + 0xa8) + -2 + (longlong)*(int *)(param_1 + 0x84) * 2) ==
        0x22)) {
      bVar3 = !bVar3;
    }
    if ((bVar3) &&
       (*(short *)(*(longlong *)(param_1 + 0xa8) + -2 + (longlong)*(int *)(param_1 + 0x84) * 2) ==
        0x27)) {
      bVar2 = !bVar2;
    }
    if (iVar6 == 0) break;
    iVar5 = FUN_00414cb0(*(undefined8 *)(param_1 + 0xa8));
  } while (*(int *)(param_1 + 0x84) < iVar5);
  FUN_00416dc0(param_2,*(undefined8 *)(param_1 + 0xa8),iVar1,*(int *)(param_1 + 0x84) - iVar1);
  return param_2;
}

