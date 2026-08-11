/* Ghidra address: 01bb7690 */
/* Ghidra symbol: FUN_01bb7690 */


void FUN_01bb7690(longlong param_1,longlong *param_2)

{
  char cVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  if (param_2 != *(longlong **)(param_1 + 0x68)) {
    cVar1 = FUN_0198a580(param_2);
    if (cVar1 == '\x04') {
      sVar2 = (**(code **)(*param_2 + 0xf8))(param_2);
      sVar3 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0xf8))(*(longlong **)(param_1 + 0x68));
      if (sVar2 == sVar3) {
        (**(code **)(*param_2 + 0x288))(param_2,local_20);
        (**(code **)(**(longlong **)(param_1 + 0x68) + 0x288))
                  (*(longlong **)(param_1 + 0x68),&local_28);
        iVar4 = FUN_00416db0(local_20[0],local_28);
        if ((iVar4 == 0) &&
           (*(int *)((longlong)param_2 + 0x18c) != *(int *)(*(longlong *)(param_1 + 0x68) + 0x18c)))
        {
          iVar4 = FUN_00416db0(*(undefined8 *)(param_1 + 0x78),&DAT_01bb77e8);
          if (iVar4 != 0) {
            FUN_00414ad0(param_2 + 0x30,*(undefined8 *)(param_1 + 0x78));
          }
          FUN_00414ad0(param_2 + 0x13,*(undefined8 *)(param_1 + 0x70));
        }
      }
    }
  }
  FUN_00414560(&local_28,2);
  return;
}

