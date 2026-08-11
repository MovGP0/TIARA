/* Ghidra address: 01d15130 */
/* Ghidra symbol: FUN_01d15130 */


undefined1 FUN_01d15130(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_39;
  longlong local_30 [2];
  
  local_30[0] = 0;
  local_48 = param_2;
  FUN_004167d0(local_30,param_2);
  local_39 = 1;
  iVar3 = 0;
  if (local_30[0] != 0) {
    iVar3 = *(int *)(local_30[0] + -4);
  }
  iVar2 = 1;
  if (0 < iVar3) {
    do {
      cVar1 = FUN_01d150e0(auStack_68,*(undefined2 *)(local_30[0] + -2 + (longlong)iVar2 * 2));
      if ((cVar1 == '\0') &&
         (cVar1 = FUN_01d150a0(auStack_68,*(undefined2 *)(local_30[0] + -2 + (longlong)iVar2 * 2)),
         cVar1 == '\0')) {
        local_39 = 0;
        break;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00414480(local_30);
  return local_39;
}

