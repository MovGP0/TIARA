/* Ghidra address: 00538200 */
/* Ghidra symbol: FUN_00538200 */


void FUN_00538200(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined1 param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  FUN_00417580(param_3,&DAT_00527bf8);
  cVar1 = FUN_00534e60(param_2);
  if (cVar1 == '\0') {
    uVar3 = FUN_00417740(param_3,&DAT_00527bf8);
    FUN_00538080(param_1,param_2,uVar3);
  }
  else {
    *param_3 = param_2;
    iVar2 = FUN_00534f00(param_2);
    lVar4 = FUN_00535ea0(&DAT_005358f8,1,param_1,-iVar2,param_2,param_4);
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = lVar4 + 0x30;
    }
    FUN_0041b840(param_3 + 1,lVar4);
  }
  return;
}

