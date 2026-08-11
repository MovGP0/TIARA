/* Ghidra address: 01b1e5d0 */
/* Ghidra symbol: FUN_01b1e5d0 */


undefined1 FUN_01b1e5d0(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined1 uVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  if (param_2 != *(longlong **)(param_1 + 0x58)) {
    cVar1 = FUN_0198a580(param_2);
    if (cVar1 == '\x04') {
      (**(code **)(*param_2 + 0x288))(param_2,local_20);
      (**(code **)(**(longlong **)(param_1 + 0x58) + 0x288))
                (*(longlong **)(param_1 + 0x58),&local_28);
      iVar5 = FUN_00416db0(local_20[0],local_28);
      if (iVar5 == 0) {
        sVar3 = (**(code **)(*param_2 + 0xf8))(param_2);
        sVar4 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0xf8))
                          (*(longlong **)(param_1 + 0x58));
        if ((sVar3 == sVar4) &&
           (*(int *)((longlong)param_2 + 0x18c) != *(int *)(*(longlong *)(param_1 + 0x58) + 0x18c)))
        {
          cVar1 = (**(code **)(*param_2 + 0xc0))(param_2);
          if (cVar1 != '\0') {
            uVar2 = 1;
            goto LAB_01b1e6b7;
          }
        }
      }
    }
  }
  uVar2 = 0;
LAB_01b1e6b7:
  FUN_00414560(&local_28,2);
  return uVar2;
}

