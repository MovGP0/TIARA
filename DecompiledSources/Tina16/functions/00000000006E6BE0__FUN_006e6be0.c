/* Ghidra address: 006e6be0 */
/* Ghidra symbol: FUN_006e6be0 */


void FUN_006e6be0(longlong param_1,int param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 uVar3;
  
  *(int *)(param_1 + 0x4b8) = param_2;
  if (param_2 == 0x20000000) {
    uVar3 = 0xff000000;
  }
  else {
    uVar3 = FUN_005fbf20(param_2);
  }
  cVar2 = FUN_0065be20(param_1);
  if (cVar2 != '\0') {
    uVar1 = FUN_0065b870(param_1);
    thunk_FUN_041b2403(uVar1,0x2001,0,uVar3);
  }
  return;
}

