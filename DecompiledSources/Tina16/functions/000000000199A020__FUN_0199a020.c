/* Ghidra address: 0199a020 */
/* Ghidra symbol: FUN_0199a020 */


void FUN_0199a020(longlong param_1,longlong param_2,undefined4 param_3)

{
  short sVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 local_28;
  undefined8 local_20;
  
  local_28 = 0;
  local_20 = 0;
  iVar4 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 0x58);
  if (param_2 != 0) {
    do {
      for (; iVar4 < *(int *)(param_1 + 0x6c); iVar4 = iVar4 + 1) {
        plVar3 = (longlong *)FUN_00b94e60(*(undefined8 *)(param_1 + 0xd0),iVar4);
        sVar1 = (**(code **)(*plVar3 + 0xf8))(plVar3);
        if (sVar1 == 0x3a) {
          plVar3 = (longlong *)FUN_00b94e60(*(undefined8 *)(param_1 + 0xd0),iVar4);
          (**(code **)(*plVar3 + 0x288))(plVar3,&local_20);
          iVar2 = FUN_00416db0(param_2,local_20);
          if (iVar2 == 0) break;
        }
      }
      if (iVar4 < *(int *)(param_1 + 0x6c)) {
        plVar3 = (longlong *)FUN_00b94e60(*(undefined8 *)(param_1 + 0xd0),iVar4);
        sVar1 = (**(code **)(*plVar3 + 0xf8))(plVar3);
        if (sVar1 == 0x3a) {
          plVar3 = (longlong *)FUN_00b94e60(*(undefined8 *)(param_1 + 0xd0),iVar4);
          (**(code **)(*plVar3 + 0x288))(plVar3,&local_28);
          iVar2 = FUN_00416db0(param_2,local_28);
          if (iVar2 == 0) {
            *(undefined4 *)(param_1 + 0x74) = param_3;
            *(int *)(param_1 + 0x50) = iVar4;
            *(undefined4 *)(param_1 + 0x4c) = 0;
            FUN_01997020(param_1,*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x4c));
            FUN_01998310(param_1);
          }
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x6c));
  }
  FUN_00414560(&local_28,2);
  return;
}

