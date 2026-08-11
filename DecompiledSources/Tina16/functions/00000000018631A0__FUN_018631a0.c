/* Ghidra address: 018631a0 */
/* Ghidra symbol: FUN_018631a0 */


void FUN_018631a0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 undefined1 param_5)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_38 = *param_4;
  uStack_30 = param_4[1];
  cVar1 = FUN_01862700(param_3);
  if (cVar1 == '\0') {
    FUN_018680e0(param_1,param_2,param_3,&local_38,param_5);
  }
  else {
    uVar2 = FUN_01862b50(param_3);
    (**(code **)(param_1 + 0x58))(param_1,param_2,param_3,&local_38,uVar2,param_5);
  }
  return;
}

