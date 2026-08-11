/* Ghidra address: 006053f0 */
/* Ghidra symbol: FUN_006053f0 */


void FUN_006053f0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined4 local_2c;
  longlong local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  if (*(undefined8 **)(param_1 + 0x18) == (undefined8 *)0x0) {
    FUN_00414480(local_20);
  }
  else {
    FUN_00410ae0(**(undefined8 **)(param_1 + 0x18),local_20);
  }
  uVar2 = FUN_0045ae90();
  FUN_00459ca0(uVar2,&local_28,local_20[0]);
  local_2c = 0;
  if (local_28 != 0) {
    local_2c = (undefined4)*(undefined8 *)(local_28 + -8);
  }
  (**(code **)(*param_2 + 0x20))(param_2,&local_2c,1);
  (**(code **)(*param_2 + 0x20))(param_2,local_28,local_2c);
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x90))(plVar1,param_2);
  }
  FUN_00419430(&local_28,&DAT_00406578);
  FUN_00414480(local_20);
  return;
}

