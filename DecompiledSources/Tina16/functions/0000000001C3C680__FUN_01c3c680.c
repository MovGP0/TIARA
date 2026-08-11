/* Ghidra address: 01c3c680 */
/* Ghidra symbol: FUN_01c3c680 */


void FUN_01c3c680(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 local_30 [2];
  undefined8 *local_20;
  
  local_30[0] = 0;
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0xbf0) + 0xa8))(*(longlong **)(param_1 + 0xbf0));
  if (cVar2 != '\0') {
    FUN_00724270(*(undefined8 *)(param_1 + 0xbf0),local_30);
    FUN_01c3c5b0(param_1,local_30[0]);
    local_20 = (undefined8 *)(param_1 + 0x920);
    uVar1 = *local_20;
    *local_20 = 0;
    FUN_00410f20(uVar1);
    FUN_01c38530(param_1,*(undefined8 *)(param_1 + 0x6c8));
    FUN_0064de00(*(undefined8 *)(param_1 + 0x720),0);
    (**(code **)(**(longlong **)(param_1 + 0x730) + 0x268))
              (*(longlong **)(param_1 + 0x730),0xffffffff);
    (**(code **)(**(longlong **)(param_1 + 0x890) + 0x268))(*(longlong **)(param_1 + 0x890),0);
  }
  FUN_00414480(local_30);
  return;
}

