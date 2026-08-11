/* Ghidra address: 006aab10 */
/* Ghidra symbol: FUN_006aab10 */


void FUN_006aab10(undefined8 param_1,int param_2,undefined8 param_3)

{
  undefined8 uVar1;
  char cVar2;
  int local_44 [9];
  
  cVar2 = FUN_004113d0(param_1,&PTR_FUN_006bdd08);
  if (cVar2 == '\0') {
    FUN_0064dcb0(param_1,param_3,param_2 + 1);
  }
  else {
    local_44[0] = (param_2 + 1) * 2;
    local_44[1] = 0;
    local_44[2] = 0x4b0;
    local_44[3] = 0;
    local_44[4] = 0;
    local_44[5] = 0;
    local_44[6] = 0;
    uVar1 = FUN_0065b870(param_1);
    thunk_FUN_041b2403(uVar1,0x45e,local_44,param_3);
  }
  return;
}

