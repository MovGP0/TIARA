/* Ghidra address: 00c09070 */
/* Ghidra symbol: FUN_00c09070 */


undefined8 FUN_00c09070(longlong param_1,int param_2,int param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = 1;
  cVar1 = *(char *)(*(longlong *)(param_1 + 0xf0) + 0x5f5);
  if ((cVar1 == '\0') || ((*(byte *)(param_1 + 0x108) & 0x10) == 0)) {
    if (((*(int *)(param_1 + 0xcc) == *(int *)(param_1 + 0xc4)) &&
        (param_2 < *(int *)(param_1 + 0xc0))) ||
       ((*(int *)(param_1 + 0xcc) == *(int *)(param_1 + 0xbc) &&
        (*(int *)(param_1 + 0xb8) < param_3)))) {
      uVar2 = 0;
    }
  }
  else if (cVar1 == '\x02') {
    if (((param_2 < *(int *)(param_1 + 0xc0)) || (*(int *)(param_1 + 0xb8) < param_3)) &&
       (0 < *(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0xc0))) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}

