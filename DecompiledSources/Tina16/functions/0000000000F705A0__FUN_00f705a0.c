/* Ghidra address: 00f705a0 */
/* Ghidra symbol: FUN_00f705a0 */


longlong FUN_00f705a0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_00f6f040();
  if ((*(char *)(lVar1 + 0x93) == '\x02') && (*(int *)(lVar1 + 0xa4) < *(int *)(lVar1 + 0x9c))) {
    FUN_00f6e2a0(lVar1,3);
  }
  else if ((*(char *)(lVar1 + 0x93) == '\x03') && (*(int *)(lVar1 + 0x9c) < *(int *)(lVar1 + 0xa4)))
  {
    FUN_00f6e2a0(lVar1,2);
  }
  else if ((*(char *)(lVar1 + 0x93) == '\0') && (*(int *)(lVar1 + 0xa0) < *(int *)(lVar1 + 0x98))) {
    FUN_00f6e2a0(lVar1,1);
  }
  else if ((*(char *)(lVar1 + 0x93) == '\x01') && (*(int *)(lVar1 + 0x98) < *(int *)(lVar1 + 0xa0)))
  {
    FUN_00f6e2a0(lVar1,0);
  }
  return lVar1;
}

