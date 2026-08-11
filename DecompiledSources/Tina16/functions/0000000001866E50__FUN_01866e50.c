/* Ghidra address: 01866e50 */
/* Ghidra symbol: FUN_01866e50 */


void FUN_01866e50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 undefined1 param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_38 = *param_4;
  uStack_30 = param_4[1];
  uVar1 = FUN_00410ad0(param_3);
  lVar2 = FUN_018671d0(param_1,uVar1,0);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x50))(lVar2,param_2,param_3,&local_38,param_5);
  }
  return;
}

