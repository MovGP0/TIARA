/* Ghidra address: 0184ef50 */
/* Ghidra symbol: FUN_0184ef50 */


undefined1 FUN_0184ef50(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined1 local_21;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_21 = 0;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x140) + 0xb0))
                    (*(longlong **)(param_1 + 0x140),param_3);
  if (iVar1 != -1) {
    plVar2 = (longlong *)
             (**(code **)(**(longlong **)(param_1 + 0x140) + 0x30))
                       (*(longlong **)(param_1 + 0x140),iVar1);
    FUN_0043f750(local_20,param_2);
    iVar1 = (**(code **)(*plVar2 + 0xb0))(plVar2,local_20[0]);
    if (iVar1 != -1) {
      local_21 = 1;
    }
  }
  FUN_00414480(local_20);
  return local_21;
}

