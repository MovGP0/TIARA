/* Ghidra address: 01706ab0 */
/* Ghidra symbol: FUN_01706ab0 */


void FUN_01706ab0(longlong param_1,int param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  *(int *)(param_1 + 0x6f0) = param_2;
  if (param_2 == 0) {
    (**(code **)(**(longlong **)(param_1 + 0x710) + 0x10))
              (*(longlong **)(param_1 + 0x710),*(undefined8 *)(param_1 + 0x708));
  }
  else {
    FUN_01705800(*(undefined8 *)(param_1 + 0x720),*(undefined8 *)(param_1 + 0x708),
                 *(undefined8 *)(param_1 + 0x710),param_2);
  }
  FUN_01706490(param_1,*(undefined8 *)(param_1 + 0x710),*(undefined8 *)(param_1 + 0x718));
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4a0);
  (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 *)(param_1 + 0x718));
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4a0);
  uVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
  FUN_0043f750(&local_28,uVar2);
  FUN_00416ba0(local_20,&DAT_01706c08,local_28);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6d0),local_20[0]);
  FUN_00414560(&local_28,2);
  return;
}

