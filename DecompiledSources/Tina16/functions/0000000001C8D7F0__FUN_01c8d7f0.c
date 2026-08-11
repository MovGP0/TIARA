/* Ghidra address: 01c8d7f0 */
/* Ghidra symbol: FUN_01c8d7f0 */


void FUN_01c8d7f0(longlong param_1,longlong *param_2)

{
  char cVar1;
  short sVar2;
  short sVar3;
  int iVar4;
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
      iVar4 = FUN_00416db0(local_20[0],local_28);
      if (iVar4 == 0) {
        sVar2 = (**(code **)(*param_2 + 0xf8))(param_2);
        sVar3 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0xf8))
                          (*(longlong **)(param_1 + 0x58));
        if ((sVar2 == sVar3) &&
           (*(int *)((longlong)param_2 + 0x18c) != *(int *)(*(longlong *)(param_1 + 0x58) + 0x18c)))
        {
          FUN_01993f30(*(undefined8 *)
                        (*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x8e0) + 0x27a8),param_2,
                       *(undefined1 *)(param_1 + 0x60),*(undefined1 *)(param_1 + 0x60));
        }
      }
    }
  }
  FUN_00414560(&local_28,2);
  return;
}

