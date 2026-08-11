/* Ghidra address: 0135a4e0 */
/* Ghidra symbol: FUN_0135a4e0 */


void FUN_0135a4e0(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  longlong *plVar2;
  undefined8 local_res10;
  undefined8 local_res18;
  
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0xb0))
                    (*(longlong **)(param_1 + 8),local_res10);
  if (iVar1 == -1) {
    plVar2 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    (**(code **)(*plVar2 + 0x80))(plVar2,local_res18,(longlong)param_4);
    (**(code **)(**(longlong **)(param_1 + 8) + 0x80))
              (*(longlong **)(param_1 + 8),local_res10,plVar2);
  }
  else {
    plVar2 = (longlong *)
             (**(code **)(**(longlong **)(param_1 + 8) + 0x30))(*(longlong **)(param_1 + 8),iVar1);
    (**(code **)(*plVar2 + 0x80))(plVar2,local_res18,(longlong)param_4);
  }
  FUN_00414560(&local_res10,2);
  return;
}

