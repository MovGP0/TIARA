/* Ghidra address: 009581c0 */
/* Ghidra symbol: FUN_009581c0 */


bool FUN_009581c0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  bool local_29;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  lVar2 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x2f0))(*(longlong **)(param_1 + 0x20));
  if (lVar2 == 0) {
    local_29 = true;
  }
  else {
    plVar3 = (longlong *)
             (**(code **)(**(longlong **)(param_1 + 0x20) + 0x2f0))(*(longlong **)(param_1 + 0x20));
    (**(code **)(*plVar3 + 0x2c8))(plVar3,local_20);
    iVar1 = FUN_00416420(local_20[0],0);
    if (iVar1 == 0) {
      plVar3 = (longlong *)
               (**(code **)(**(longlong **)(param_1 + 0x20) + 0x2f0))
                         (*(longlong **)(param_1 + 0x20));
      (**(code **)(*plVar3 + 0x2d0))(plVar3,&local_28);
      iVar1 = FUN_00416420(local_28,0);
      if (iVar1 == 0) {
        local_29 = *(char *)(*(longlong *)(param_1 + 8) + 0x20) == '\0';
        goto code_r0x00958292;
      }
    }
    local_29 = *(char *)(*(longlong *)(param_1 + 0x20) + 200) == '\0';
  }
code_r0x00958292:
  FUN_004145c0(&local_28,2);
  return local_29;
}

