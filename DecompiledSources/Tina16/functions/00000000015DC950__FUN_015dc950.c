/* Ghidra address: 015dc950 */
/* Ghidra symbol: FUN_015dc950 */


void FUN_015dc950(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong local_20 [2];
  int local_c;
  
  local_20[0] = 0;
  *(undefined1 *)(param_1 + 0x231) = 0;
  if (*(char *)(param_1 + 0xe0) == '\0') {
    FUN_015bf710(local_20,*(undefined8 *)(param_1 + 0x88));
    if (local_20[0] == 0) {
      uVar2 = FUN_015b59b0(&PTR_FUN_015b5818,1,9,param_1);
      FUN_004134c0(uVar2);
    }
  }
  if (*(char *)(param_1 + 0xe0) == '\0') {
    cVar1 = FUN_015bf1b0(*(undefined8 *)(param_1 + 0x88));
    if (cVar1 != '\0') {
      local_c = FUN_00440210(*(undefined8 *)(param_1 + 0x88),0x22);
      if (local_c == -1) {
        *(undefined2 *)(param_1 + 0xa0) = 0x40;
      }
      else {
        *(undefined2 *)(param_1 + 0xa0) = 0x22;
        thunk_FUN_041d2921((longlong)local_c);
      }
      goto LAB_015dca2b;
    }
  }
  *(undefined2 *)(param_1 + 0xa0) = 0xff00;
LAB_015dca2b:
  FUN_015dca70(param_1,*(undefined2 *)(param_1 + 0xa0));
  FUN_00414480(local_20);
  return;
}

