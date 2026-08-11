/* Ghidra address: 01bc3a40 */
/* Ghidra symbol: FUN_01bc3a40 */


void FUN_01bc3a40(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x728) + 0x260))(*(longlong **)(param_1 + 0x728));
  if (cVar2 == '\0') {
LAB_01bc3af2:
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x730) + 0x260))(*(longlong **)(param_1 + 0x730))
    ;
    if (cVar2 != '\0') {
      FUN_0064dd90(*(undefined8 *)(param_1 + 0x700),&local_30);
      if (local_30 != 0) {
        FUN_0064dd90(*(undefined8 *)(param_1 + 0x6f0),&local_38);
        if (local_38 != 0) {
          FUN_0064dd90(*(undefined8 *)(param_1 + 0x6d8),&local_40);
          if (local_40 != 0) {
            FUN_0064dd90(*(undefined8 *)(param_1 + 0x6d8),&local_48);
            plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x720) + 0x4a0);
            uVar4 = (**(code **)(*plVar1 + 0xb0))(plVar1,local_48);
            if ((int)uVar4 == -1) goto LAB_01bc3ba1;
          }
        }
      }
    }
    uVar3 = 0;
  }
  else {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x700),local_20);
    if (local_20[0] == 0) goto LAB_01bc3af2;
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x6f0),&local_28);
    if (local_28 == 0) goto LAB_01bc3af2;
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x720) + 0x4a0);
    uVar4 = (**(code **)(*plVar1 + 0x28))(plVar1);
    if ((int)uVar4 < 1) goto LAB_01bc3af2;
LAB_01bc3ba1:
    uVar3 = (undefined4)CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
  }
  (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x128))(*(longlong **)(param_1 + 0x6b0),uVar3);
  FUN_00414560(&local_48,6);
  return;
}

