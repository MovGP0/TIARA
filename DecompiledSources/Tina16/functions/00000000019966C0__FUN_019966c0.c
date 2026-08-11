/* Ghidra address: 019966c0 */
/* Ghidra symbol: FUN_019966c0 */


void FUN_019966c0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  
  local_20 = FUN_019962b0(param_1,0);
  if (param_2 == 0) {
    iVar3 = *(int *)(param_1 + 0x10);
    iVar2 = 0;
    if (-1 < iVar3 + -1) {
      do {
        uVar1 = FUN_00b94e60(param_1,iVar2);
        FUN_01996680(auStack_48,uVar1);
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  else {
    FUN_01996620(auStack_48,param_2);
  }
  return;
}

