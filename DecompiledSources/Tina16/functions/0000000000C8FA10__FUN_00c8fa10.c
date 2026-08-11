/* Ghidra address: 00c8fa10 */
/* Ghidra symbol: FUN_00c8fa10 */


void FUN_00c8fa10(undefined8 param_1,int param_2)

{
  char cVar1;
  undefined1 auStack_38 [40];
  
  if (param_2 == -1) {
    param_2 = -2;
  }
  cVar1 = FUN_00c8c9b0(&PTR_FUN_00c8c438);
  if (cVar1 != '\0') {
    if (param_2 == -2) {
      do {
        cVar1 = FUN_00c8f970(auStack_38,*(undefined4 *)(*(longlong *)PTR_DAT_02005b88 + 0x7c));
      } while (cVar1 == '\0');
      return;
    }
    for (; *(int *)(*(longlong *)PTR_DAT_02005b88 + 0x7c) < param_2;
        param_2 = param_2 - *(int *)(*(longlong *)PTR_DAT_02005b88 + 0x7c)) {
      cVar1 = FUN_00c8f970(auStack_38,*(int *)(*(longlong *)PTR_DAT_02005b88 + 0x7c));
      if (cVar1 != '\0') {
        return;
      }
    }
  }
  FUN_00c8f970(auStack_38,param_2);
  return;
}

