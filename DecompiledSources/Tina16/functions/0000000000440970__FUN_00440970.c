/* Ghidra address: 00440970 */
/* Ghidra symbol: FUN_00440970 */


undefined4 FUN_00440970(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  undefined1 local_14 [8];
  undefined4 local_c;
  
  cVar1 = FUN_004407c0(param_1,local_14,1);
  if (cVar1 == '\0') {
    bVar3 = true;
  }
  else {
    iVar2 = thunk_FUN_0419adba(local_14,(longlong)&local_c + 2,&local_c);
    bVar3 = iVar2 == 0;
  }
  if (bVar3) {
    local_c = 0xffffffff;
  }
  return local_c;
}

