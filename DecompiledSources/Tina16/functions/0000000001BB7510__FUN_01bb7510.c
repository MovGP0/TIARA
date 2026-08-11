/* Ghidra address: 01bb7510 */
/* Ghidra symbol: FUN_01bb7510 */


undefined1 FUN_01bb7510(longlong param_1,longlong *param_2)

{
  char cVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  undefined1 local_29;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0;
  local_28 = 0;
  local_29 = 0;
  cVar1 = FUN_0198a580(param_2);
  if (cVar1 == '\x04') {
    sVar2 = (**(code **)(*param_2 + 0xf8))(param_2);
    sVar3 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0xf8))(*(longlong **)(param_1 + 0x60));
    if (sVar2 == sVar3) {
      (**(code **)(*param_2 + 0x288))(param_2,&local_20);
      (**(code **)(**(longlong **)(param_1 + 0x60) + 0x288))
                (*(longlong **)(param_1 + 0x60),&local_28);
      iVar4 = FUN_00416db0(local_20,local_28);
      if ((iVar4 == 0) &&
         (*(int *)((longlong)param_2 + 0x18c) != *(int *)(*(longlong *)(param_1 + 0x60) + 0x18c))) {
        local_29 = 1;
        goto code_r0x01bb75ce;
      }
    }
    local_29 = 0;
  }
code_r0x01bb75ce:
  FUN_00414560(&local_28,2);
  return local_29;
}

