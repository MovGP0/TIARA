/* Ghidra address: 0065bce0 */
/* Ghidra symbol: FUN_0065bce0 */


void FUN_0065bce0(longlong param_1,char param_2)

{
  char cVar1;
  uint uVar2;
  
  if (*(char *)(param_1 + 900) != param_2) {
    *(char *)(param_1 + 900) = param_2;
    cVar1 = FUN_0065be20(param_1);
    if (cVar1 != '\0') {
      uVar2 = thunk_FUN_04118143(*(undefined8 *)(param_1 + 0x468),0xfffffff0);
      uVar2 = uVar2 & 0xfffeffff;
      if (param_2 != '\0') {
        uVar2 = uVar2 | 0x10000;
      }
      thunk_FUN_03c9d277(*(undefined8 *)(param_1 + 0x468),0xfffffff0,(longlong)(int)uVar2);
    }
    FUN_0064fca0(param_1,0xb028,0,0);
  }
  return;
}

