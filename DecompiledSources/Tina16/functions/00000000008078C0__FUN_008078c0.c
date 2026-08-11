/* Ghidra address: 008078c0 */
/* Ghidra symbol: FUN_008078c0 */


undefined4 FUN_008078c0(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 local_20 [4];
  undefined4 local_1c;
  
  cVar1 = FUN_0044f0c0(6,3);
  if (cVar1 == '\0') {
    uVar4 = thunk_FUN_040ef593(0);
    uVar3 = thunk_FUN_03e5bd07(uVar4,0x5a);
    thunk_FUN_041a9b5c(0,uVar4);
    local_1c = uVar3;
  }
  else {
    iVar2 = GetDpiForMonitor(*(undefined8 *)(param_1 + 8),0,&local_1c,local_20);
    if (iVar2 != 0) {
      local_1c = 0;
    }
  }
  return local_1c;
}

