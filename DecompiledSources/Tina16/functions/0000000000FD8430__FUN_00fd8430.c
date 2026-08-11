/* Ghidra address: 00fd8430 */
/* Ghidra symbol: FUN_00fd8430 */


void FUN_00fd8430(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  plVar1 = *(longlong **)(param_1 + 0x6c0);
  uVar2 = (**(code **)(*plVar1 + 0x260))(plVar1);
  (**(code **)(*(longlong *)plVar1[0x9e] + 0x18))((longlong *)plVar1[0x9e],local_20,uVar2);
  FUN_00414ad0(param_1 + 0x700,local_20[0]);
  uVar3 = FUN_00b90090(*(undefined8 *)(param_1 + 0x6c8));
  *(undefined8 *)(param_1 + 0x708) = uVar3;
  FUN_00414480(local_20);
  return;
}

