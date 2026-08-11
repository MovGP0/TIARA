/* Ghidra address: 01c703e0 */
/* Ghidra symbol: FUN_01c703e0 */


void FUN_01c703e0(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_48 [32];
  undefined1 local_28;
  undefined1 local_9;
  
  cVar1 = FUN_01c8cee0(param_1);
  if (cVar1 == '\0') {
    iVar2 = FUN_01c6ff00(auStack_48);
    if (iVar2 != -1) {
      local_28 = 1;
      FUN_01c6ec30(param_1,iVar2,local_9,0);
    }
  }
  return;
}

