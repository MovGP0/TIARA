/* Ghidra address: 006d3ef0 */
/* Ghidra symbol: FUN_006d3ef0 */


void FUN_006d3ef0(undefined8 param_1,uint param_2,char param_3)

{
  undefined8 uVar1;
  char cVar2;
  uint uVar3;
  
  cVar2 = FUN_0065be20(param_1);
  if (cVar2 != '\0') {
    uVar1 = FUN_0065b870(param_1);
    uVar3 = thunk_FUN_04118143(uVar1,0xfffffff0);
    if (param_3 == '\0') {
      uVar3 = uVar3 & ~param_2;
    }
    else {
      uVar3 = uVar3 | param_2;
    }
    uVar1 = FUN_0065b870(param_1);
    thunk_FUN_03c9d277(uVar1,0xfffffff0,(longlong)(int)uVar3);
  }
  return;
}

