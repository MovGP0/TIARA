/* Ghidra address: 00d445a0 */
/* Ghidra symbol: FUN_00d445a0 */


void FUN_00d445a0(longlong param_1,longlong param_2)

{
  char cVar1;
  char cVar2;
  undefined1 local_30 [16];
  undefined8 local_20;
  
  FUN_00788400(param_1,param_2);
  FUN_0078a020(param_1,param_2);
  local_20 = CONCAT44((int)*(short *)(param_2 + 0x12),(int)*(short *)(param_2 + 0x10));
  cVar1 = *(char *)(param_1 + 0x79);
  FUN_00d43b10(param_1,local_30);
  cVar2 = FUN_00423210(local_30,&local_20);
  if (cVar2 == '\0') {
    *(undefined1 *)(param_1 + 0x79) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x79) = 1;
  }
  if (cVar1 != *(char *)(param_1 + 0x79)) {
    thunk_FUN_03a2fc9d(*(undefined8 *)(param_1 + 8),local_30,0);
  }
  *(undefined1 *)(param_1 + 0x40) = 1;
  return;
}

