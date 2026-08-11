/* Ghidra address: 0068bd10 */
/* Ghidra symbol: FUN_0068bd10 */


void FUN_0068bd10(longlong param_1,int param_2,char param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  int local_38 [2];
  undefined1 local_30;
  
  if ((param_2 != -1) && (cVar3 = FUN_0068bca0(param_1,param_2), param_3 == cVar3)) {
    return;
  }
  local_38[0] = param_2;
  if (*(char *)(param_1 + 0x490) == '\0') {
    if (param_3 == '\0') {
      uVar1 = FUN_0065b870(param_1);
      thunk_FUN_041b2403(uVar1,0x186,0xffffffffffffffff,0);
    }
    else {
      uVar1 = FUN_0065b870(param_1);
      lVar2 = thunk_FUN_041b2403(uVar1,0x186,(longlong)param_2,0);
      if (lVar2 == -1) {
        local_30 = 0;
        uVar1 = FUN_0044d8d0(&PTR_FUN_004347c0,1,PTR_PTR_02004940,local_38,0);
        FUN_004134c0(uVar1);
      }
    }
  }
  else {
    uVar1 = FUN_0065b870(param_1);
    lVar2 = thunk_FUN_041b2403(uVar1,0x185,param_3,(longlong)param_2);
    if (lVar2 == -1) {
      local_30 = 0;
      uVar1 = FUN_0044d8d0(&PTR_FUN_004347c0,1,PTR_PTR_02004940,local_38,0);
      FUN_004134c0(uVar1);
    }
  }
  return;
}

