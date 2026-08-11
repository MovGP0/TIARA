/* Ghidra address: 01c18670 */
/* Ghidra symbol: FUN_01c18670 */


undefined8 FUN_01c18670(void)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 local_20;
  
  lVar2 = FUN_01be5730();
  lVar4 = 0;
  local_20 = 0;
  if (lVar2 == 0) {
    return 0;
  }
  lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x5d0) + 0x498);
  if ((lVar3 == 0) || (lVar3 = FUN_01bfaa70(lVar3), *(char *)(lVar3 + 0x49) != '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (*(longlong *)(lVar2 + 0x4a0) != 0) {
    if ((bVar1) && (*(longlong *)(*(longlong *)(lVar2 + 0x4a0) + 0x148) != 0)) {
      lVar4 = *(longlong *)(*(longlong *)(lVar2 + 0x4a0) + 0x148);
    }
    else {
      lVar4 = *(longlong *)(*(longlong *)(lVar2 + 0x4a0) + 0xd0);
    }
  }
  if (lVar4 != 0) {
    if ((((*(longlong *)(*(longlong *)(lVar2 + 0x5d0) + 0x498) != 0) &&
         (lVar2 = FUN_01bfaa70(*(undefined8 *)(*(longlong *)(lVar2 + 0x5d0) + 0x498)),
         *(char *)(lVar2 + 0x49) == '\0')) && (*(int *)(lVar4 + 0x94) == *(int *)(lVar4 + 0x90))) &&
       (*(int *)(lVar4 + 0x94) < 0x20)) {
      return 0x2000000020;
    }
    local_20 = CONCAT44(*(undefined4 *)(lVar4 + 0x90),*(undefined4 *)(lVar4 + 0x94));
  }
  return local_20;
}

