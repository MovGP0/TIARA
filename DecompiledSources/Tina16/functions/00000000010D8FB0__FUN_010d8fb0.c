/* Ghidra address: 010d8fb0 */
/* Ghidra symbol: FUN_010d8fb0 */


void FUN_010d8fb0(longlong param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x9be);
  if (cVar1 == '\0') {
    FUN_010bfbe0(param_1 + 0x970,0x3f50624dd2f1a9fc,1);
    FUN_010d8e20(param_1,*(undefined8 *)(param_1 + 0x970));
  }
  else if (cVar1 == '\x01') {
    FUN_010bfbe0(param_1 + 0x978,0x3f50624dd2f1a9fc,1);
    FUN_010d8e20(param_1,*(undefined8 *)(param_1 + 0x978));
  }
  else if (cVar1 == '\x02') {
    FUN_010bfbe0(param_1 + 0x980,0x3f50624dd2f1a9fc,1);
    FUN_010d8e20(param_1,*(undefined8 *)(param_1 + 0x980));
  }
  return;
}

