/* Ghidra address: 0074ba60 */
/* Ghidra symbol: FUN_0074ba60 */


void FUN_0074ba60(longlong param_1)

{
  int iVar1;
  bool bVar2;
  undefined8 local_10;
  
  *(bool *)(param_1 + 0x348) = *(char *)(param_1 + 0x348) == '\0';
  iVar1 = *(int *)(param_1 + 0x94);
  if (*(byte *)(param_1 + 0xad) < 8) {
    bVar2 = ((int)CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1) << (*(byte *)(param_1 + 0xad) & 0x1f)
            & 0x18U) != 0;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    local_10 = CONCAT44(iVar1,*(int *)(param_1 + 0x90) + *(int *)(param_1 + 0x37c));
  }
  else {
    local_10 = CONCAT44(iVar1 + *(int *)(param_1 + 0x37c),*(int *)(param_1 + 0x90));
  }
  thunk_FUN_04161b78(*(undefined8 *)(param_1 + 0x340),local_10 & 0xffffffff,local_10._4_4_,
                     *(undefined4 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0x9c),0x5a0049);
  return;
}

