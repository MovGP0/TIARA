/* Ghidra address: 008222f0 */
/* Ghidra symbol: FUN_008222f0 */


void FUN_008222f0(undefined8 param_1,undefined4 param_2,char param_3)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = FUN_008222b0(param_1,param_2);
  if (param_3 != cVar2) {
    lVar1 = FUN_00821e60(param_1,param_2);
    *(char *)(lVar1 + 0x12) = param_3;
    FUN_00821870(param_1,param_2);
  }
  return;
}

