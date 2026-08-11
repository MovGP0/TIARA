/* Ghidra address: 00950640 */
/* Ghidra symbol: FUN_00950640 */


undefined1 FUN_00950640(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 local_29;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0;
  local_28 = 0;
  lVar1 = (**(code **)(*param_1 + 0x188))(param_1);
  if (lVar1 != 0) {
    lVar1 = (**(code **)(*param_1 + 0x2d0))(param_1);
    if (lVar1 != 0) {
      plVar2 = (longlong *)(**(code **)(*param_1 + 0x188))(param_1);
      plVar3 = (longlong *)(**(code **)(*param_1 + 0x2d0))(param_1);
      (**(code **)(*plVar3 + 0xe8))(plVar3,&local_20);
      (**(code **)(*param_1 + 0xe8))(param_1,&local_28);
      local_29 = (**(code **)(*plVar2 + 0x2e8))(plVar2,local_20,local_28);
      goto code_r0x009506f0;
    }
  }
  local_29 = 0;
code_r0x009506f0:
  FUN_004145c0(&local_28,2);
  return local_29;
}

