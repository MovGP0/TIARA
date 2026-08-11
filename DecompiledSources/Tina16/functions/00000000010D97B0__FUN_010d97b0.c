/* Ghidra address: 010d97b0 */
/* Ghidra symbol: FUN_010d97b0 */


void FUN_010d97b0(longlong param_1)

{
  undefined1 uVar1;
  char cVar2;
  
  uVar1 = *PTR_DAT_02005310;
  *PTR_DAT_02005310 = 3;
  cVar2 = *(char *)(param_1 + 0x9be);
  if (cVar2 == '\0') {
    FUN_00b90440(*(undefined8 *)(param_1 + 0x968),*(undefined8 *)(param_1 + 0x970));
  }
  else if (cVar2 == '\x01') {
    FUN_00b90440(*(undefined8 *)(param_1 + 0x968),*(undefined8 *)(param_1 + 0x978));
  }
  else if (cVar2 == '\x02') {
    FUN_00b90440(*(undefined8 *)(param_1 + 0x968),*(undefined8 *)(param_1 + 0x980));
  }
  *PTR_DAT_02005310 = uVar1;
  return;
}

