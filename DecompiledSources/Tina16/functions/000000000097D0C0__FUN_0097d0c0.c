/* Ghidra address: 0097d0c0 */
/* Ghidra symbol: FUN_0097d0c0 */


void FUN_0097d0c0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5,undefined1 *param_6)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  *param_5 = 0;
  FUN_00414be0(local_20,param_3);
  FUN_00414be0(&local_28,param_4);
  plVar1 = *(longlong **)(param_1 + 0x78);
  if (plVar1 == (longlong *)0x0) {
    FUN_00414520(param_5);
    *param_6 = 0x9a;
  }
  else {
    uVar2 = FUN_00414520(param_5);
    (**(code **)(*plVar1 + 0x100))(plVar1,param_2,local_20,&local_28,uVar2,param_6);
  }
  FUN_004145c0(&local_28,2);
  return;
}

