/* Ghidra address: 00b53be0 */
/* Ghidra symbol: FUN_00b53be0 */


void FUN_00b53be0(longlong param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong local_30;
  
  iVar2 = FUN_00b573b0();
  iVar3 = 0;
  if (-1 < iVar2 + -1) {
    do {
      local_30 = FUN_00b57390(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(param_1 + 0xa0) + 8) + 0x28),iVar3);
      cVar1 = *(char *)(local_30 + 0x20);
      if (cVar1 != '\0') {
        FUN_00b569d0(local_30);
      }
      FUN_00b218a0(&local_30,*(undefined2 *)(param_1 + 0xa8),*(undefined2 *)(param_1 + 0xb0),
                   *(undefined2 *)(param_1 + 0xb8));
      if (cVar1 != '\0') {
        FUN_00b568a0(local_30);
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

