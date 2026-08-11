/* Ghidra address: 00850300 */
/* Ghidra symbol: FUN_00850300 */


void FUN_00850300(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38 [24];
  
  FUN_00850580(param_1,local_38);
  local_40 = param_2;
  local_3c = param_3;
  cVar2 = FUN_00423210(local_38,&local_40);
  if (*(char *)(param_1 + 0x53a) != cVar2) {
    *(char *)(param_1 + 0x53a) = cVar2;
    uVar1 = FUN_0065b870(param_1);
    thunk_FUN_03a2fc9d(uVar1,local_38,0);
  }
  return;
}

