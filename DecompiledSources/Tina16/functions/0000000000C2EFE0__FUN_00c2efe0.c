/* Ghidra address: 00c2efe0 */
/* Ghidra symbol: FUN_00c2efe0 */


void FUN_00c2efe0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_33;
  undefined2 uStack_2b;
  undefined1 uStack_29;
  
  local_33 = *param_2;
  uStack_2b = *(undefined2 *)(param_2 + 1);
  uStack_29 = *(undefined1 *)((longlong)param_2 + 10);
  uVar1 = FUN_00c2efb0();
  FUN_00c2eea0(uVar1,&local_33,param_3);
  return;
}

