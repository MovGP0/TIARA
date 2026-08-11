/* Ghidra address: 01b35c30 */
/* Ghidra symbol: FUN_01b35c30 */


void FUN_01b35c30(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 local_40 [2];
  longlong local_30 [2];
  
  local_40[0] = 0;
  local_30[0] = 0;
  FUN_0043e130(local_40,*(undefined8 *)(param_1 + 0x5fe0));
  FUN_0043ea00(local_30,local_40[0]);
  iVar3 = 0;
  if (local_30[0] != 0) {
    iVar3 = *(int *)(local_30[0] + -4);
  }
  iVar2 = 1;
  if (0 < iVar3) {
    do {
      if (*(short *)(local_30[0] + -2 + (longlong)iVar2 * 2) == 0x22) {
        lVar1 = FUN_00414de0(local_30);
        *(undefined2 *)(lVar1 + -2 + (longlong)iVar2 * 2) = 0x27;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00414ad0(param_1 + 0x5fe0,local_30[0]);
  FUN_00414480(local_40);
  FUN_00414480(local_30);
  return;
}

