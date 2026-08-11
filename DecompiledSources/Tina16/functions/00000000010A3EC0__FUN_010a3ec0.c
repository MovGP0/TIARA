/* Ghidra address: 010a3ec0 */
/* Ghidra symbol: FUN_010a3ec0 */


void FUN_010a3ec0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar2 = FUN_01b21610(local_res10[0]);
  if (iVar2 < 50000) {
    FUN_0109fad0(*(undefined8 *)(param_1 + 0x960),local_res10[0]);
  }
  else {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x960) + 0x4e8);
    (**(code **)(*plVar1 + 0xd8))(plVar1,local_res10[0]);
  }
  FUN_00414480(local_res10);
  return;
}

