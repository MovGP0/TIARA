/* Ghidra address: 008355e0 */
/* Ghidra symbol: FUN_008355e0 */


void FUN_008355e0(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined8 local_28;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_28 = 0;
  local_20[0] = 0;
  local_10 = 0;
  FUN_008350c0(param_1,local_20);
  FUN_008369d0(param_1,&local_10,local_20[0]);
  FUN_00414ad0(param_1 + 0x4d8,param_2);
  uVar3 = 0;
  if (param_2 != 0) {
    uVar3 = *(undefined4 *)(param_2 + -4);
  }
  uVar3 = FUN_008323e0(*(undefined8 *)(param_1 + 0x4d8),uVar3);
  *(undefined4 *)(param_1 + 0x4e4) = uVar3;
  uVar1 = FUN_00832180(param_2);
  *(undefined1 *)(param_1 + 0x4e8) = uVar1;
  uVar2 = FUN_00832250(param_2);
  *(undefined2 *)(param_1 + 0x4e0) = uVar2;
  FUN_00836980(param_1,&local_28,local_10,1);
  FUN_00414b50(&local_10,local_28);
  FUN_00835030(param_1,local_10);
  FUN_00414560(&local_28,2);
  FUN_00414480(&local_10);
  return;
}

