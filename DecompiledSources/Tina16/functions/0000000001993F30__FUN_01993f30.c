/* Ghidra address: 01993f30 */
/* Ghidra symbol: FUN_01993f30 */


void FUN_01993f30(longlong param_1,longlong *param_2,char param_3,undefined1 param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 local_38;
  longlong local_30 [2];
  
  local_30[0] = 0;
  local_38 = 0;
  FUN_0198a680(local_30,param_2);
  if (param_3 == '\0') {
    (**(code **)(*param_2 + 0xb8))(param_2,*(undefined8 *)(param_1 + 0x210));
    if (local_30[0] != 0) {
      iVar5 = *(int *)(param_1 + 0x10);
      iVar4 = 0;
      if (-1 < iVar5 + -1) {
        do {
          uVar2 = FUN_00b94e60(param_1,iVar4);
          FUN_0198a680(&local_38,uVar2);
          iVar1 = FUN_00416db0(local_30[0],local_38);
          if (iVar1 == 0) {
            plVar3 = (longlong *)FUN_00b94e60(param_1,iVar4);
            (**(code **)(*plVar3 + 0xb8))(plVar3,*(undefined8 *)(param_1 + 0x210));
          }
          iVar4 = iVar4 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
  }
  else {
    (**(code **)(*param_2 + 0xb0))(param_2,*(undefined8 *)(param_1 + 0x210),param_4);
    if (local_30[0] != 0) {
      iVar5 = *(int *)(param_1 + 0x10);
      iVar4 = 0;
      if (-1 < iVar5 + -1) {
        do {
          uVar2 = FUN_00b94e60(param_1,iVar4);
          FUN_0198a680(&local_38,uVar2);
          iVar1 = FUN_00416db0(local_30[0],local_38);
          if (iVar1 == 0) {
            plVar3 = (longlong *)FUN_00b94e60(param_1,iVar4);
            (**(code **)(*plVar3 + 0xb0))(plVar3,*(undefined8 *)(param_1 + 0x210),param_4);
          }
          iVar4 = iVar4 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
  }
  FUN_00414560(&local_38,2);
  return;
}

