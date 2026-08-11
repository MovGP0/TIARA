/* Ghidra address: 01a9faa0 */
/* Ghidra symbol: FUN_01a9faa0 */


void FUN_01a9faa0(undefined8 param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_01a99990(param_1);
  *param_2 = uVar2;
  uVar2 = FUN_01a999b0(param_1);
  param_2[1] = uVar2;
  uVar2 = FUN_01a99a20(param_1);
  param_2[2] = uVar2;
  uVar1 = FUN_01a99b30(param_1);
  *(undefined1 *)(param_2 + 3) = uVar1;
  uVar1 = FUN_01a99b80(param_1);
  *(undefined1 *)((longlong)param_2 + 0xd) = uVar1;
  uVar1 = FUN_01a99be0(param_1);
  *(undefined1 *)((longlong)param_2 + 0xe) = uVar1;
  return;
}

