/* Ghidra address: 00b33970 */
/* Ghidra symbol: FUN_00b33970 */


void FUN_00b33970(longlong param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30 [2];
  char *local_20;
  
  local_30[0] = 0;
  FUN_00b19300(*(undefined8 *)(param_1 + 0x38));
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x30) + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      local_20 = (char *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x30),iVar2);
      cVar1 = *local_20;
      if (cVar1 == '\0') {
        FUN_00b33520(auStack_58);
      }
      else if (cVar1 == '\x01') {
        FUN_00b33660(auStack_58);
      }
      else if (cVar1 == '\x02') {
        FUN_00b337c0(auStack_58);
      }
      else if (cVar1 == '\x03') {
        FUN_00b334f0(auStack_58);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar3 = FUN_00b19370(*(undefined8 *)(param_1 + 0x38));
  if (0 < iVar3) {
    FUN_00b19380(*(undefined8 *)(param_1 + 0x38),local_30,0);
    FUN_00414bf0(param_1 + 0x20,local_30[0]);
  }
  FUN_00b19300(*(undefined8 *)(param_1 + 0x38));
  FUN_004144d0(local_30);
  return;
}

