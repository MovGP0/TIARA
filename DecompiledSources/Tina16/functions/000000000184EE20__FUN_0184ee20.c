/* Ghidra address: 0184ee20 */
/* Ghidra symbol: FUN_0184ee20 */


void FUN_0184ee20(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x140) + 0xb0))
                    (*(longlong **)(param_1 + 0x140),param_2);
  if (iVar1 == -1) {
    plVar2 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    FUN_004b67b0(plVar2,1);
    (**(code **)(**(longlong **)(param_1 + 0x140) + 0x80))
              (*(longlong **)(param_1 + 0x140),param_2,plVar2);
  }
  else {
    plVar2 = (longlong *)
             (**(code **)(**(longlong **)(param_1 + 0x140) + 0x30))
                       (*(longlong **)(param_1 + 0x140),iVar1);
  }
  iVar1 = FUN_004170c0(&LAB_0184ef44,param_3,1);
  FUN_00416dc0(local_20,param_3,1,iVar1 + -1);
  iVar1 = (**(code **)(*plVar2 + 0xb0))(plVar2,local_20[0]);
  if (iVar1 == -1) {
    (**(code **)(*plVar2 + 0x78))(plVar2,local_20[0]);
  }
  FUN_00414480(local_20);
  return;
}

