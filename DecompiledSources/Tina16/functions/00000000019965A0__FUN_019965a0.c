/* Ghidra address: 019965a0 */
/* Ghidra symbol: FUN_019965a0 */


void FUN_019965a0(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  
  local_20 = FUN_019962b0(param_1,1);
  if (param_2 == 0) {
    iVar3 = *(int *)(param_1 + 0x10) + -1;
    if (-1 < iVar3) {
      do {
        uVar2 = FUN_00b94e60(param_1,iVar3);
        cVar1 = FUN_01996550(auStack_48,uVar2);
        if (cVar1 != '\0') {
          FUN_00b94e60(param_1,iVar3);
          return;
        }
        iVar3 = iVar3 + -1;
      } while (iVar3 != -1);
    }
  }
  else {
    FUN_019964f0(auStack_48,param_2);
  }
  return;
}

