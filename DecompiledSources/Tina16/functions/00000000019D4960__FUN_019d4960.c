/* Ghidra address: 019d4960 */
/* Ghidra symbol: FUN_019d4960 */


void FUN_019d4960(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 local_res10 [3];
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined8 local_f0 [26];
  undefined8 local_20;
  
  local_20 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_0123ac70(local_res10[0],&local_100);
  iVar2 = 0;
  puVar3 = local_f0;
  do {
    uVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x808),iVar2);
    FUN_00b90440(uVar1,*puVar3);
    iVar2 = iVar2 + 1;
    puVar3 = puVar3 + 1;
  } while (iVar2 != 6);
  (**(code **)(**(longlong **)(param_1 + 0x720) + 0x268))(*(longlong **)(param_1 + 0x720),local_100)
  ;
  (**(code **)(**(longlong **)(param_1 + 0x730) + 0x268))(*(longlong **)(param_1 + 0x730),local_fc);
  (**(code **)(**(longlong **)(param_1 + 0x740) + 0x268))(*(longlong **)(param_1 + 0x740),local_f8);
  (**(code **)(**(longlong **)(param_1 + 0x750) + 0x268))(*(longlong **)(param_1 + 0x750),local_f4);
  FUN_019d5d90(param_1,0);
  FUN_00414480(&local_20);
  FUN_00414480(local_res10);
  return;
}

