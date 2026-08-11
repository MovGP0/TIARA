/* Ghidra address: 00844240 */
/* Ghidra symbol: FUN_00844240 */


void FUN_00844240(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_38 = *param_2;
  uStack_30 = param_2[1];
  cVar2 = FUN_0065be20(param_1);
  if (cVar2 != '\0') {
    FUN_00844000(param_1,&local_38,local_48,1);
    uVar1 = FUN_0065b870(param_1);
    thunk_FUN_03a2fc9d(uVar1,local_48,0);
  }
  return;
}

