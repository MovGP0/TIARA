/* Ghidra address: 006806f0 */
/* Ghidra symbol: FUN_006806f0 */


void FUN_006806f0(longlong param_1,char param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  if (*(char *)(param_1 + 0x4c0) != param_2) {
    *(char *)(param_1 + 0x4c0) = param_2;
    cVar1 = FUN_0065be20(param_1);
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x4c0) == '\0') {
        uVar2 = FUN_0065b870(param_1);
        uVar3 = FUN_0065b870(param_1);
        uVar4 = thunk_FUN_04118143(uVar3,0xfffffff0);
        thunk_FUN_03c9d277(uVar2,0xfffffff0,uVar4 & 0xffffffffffffdfff);
      }
      else {
        uVar2 = FUN_0065b870(param_1);
        uVar3 = FUN_0065b870(param_1);
        uVar4 = thunk_FUN_04118143(uVar3,0xfffffff0);
        thunk_FUN_03c9d277(uVar2,0xfffffff0,uVar4 | 0x2000);
      }
    }
  }
  return;
}

