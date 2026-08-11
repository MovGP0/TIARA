/* Ghidra address: 00440d80 */
/* Ghidra symbol: FUN_00440d80 */


undefined4 FUN_00440d80(undefined8 param_1)

{
  int iVar1;
  bool bVar2;
  undefined1 local_1c [8];
  undefined1 local_14 [8];
  undefined4 local_c;
  
  iVar1 = thunk_FUN_03dc109c(param_1,0,0,local_14);
  if (iVar1 == 0) {
    bVar2 = false;
  }
  else {
    iVar1 = thunk_FUN_03b4a9a1(local_14,local_1c);
    bVar2 = iVar1 != 0;
  }
  if ((bVar2) && (iVar1 = thunk_FUN_0419adba(local_1c,(longlong)&local_c + 2,&local_c), iVar1 != 0))
  {
    return local_c;
  }
  return 0xffffffff;
}

