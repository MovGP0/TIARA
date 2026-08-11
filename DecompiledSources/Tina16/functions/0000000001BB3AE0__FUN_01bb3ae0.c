/* Ghidra address: 01bb3ae0 */
/* Ghidra symbol: FUN_01bb3ae0 */


void FUN_01bb3ae0(longlong *param_1,undefined8 param_2,undefined1 *param_3,longlong *param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_30[0] = 0;
  local_20[0] = 0;
  plVar1 = (longlong *)param_1[0xdc];
  if ((longlong *)*param_4 == plVar1) {
    iVar2 = (**(code **)(*plVar1 + 0x260))(plVar1);
    if (iVar2 < 0) {
      *param_3 = 0;
    }
    else {
      plVar1 = (longlong *)param_1[0xdc];
      uVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
      (**(code **)(*(longlong *)plVar1[0x9e] + 0x18))((longlong *)plVar1[0x9e],local_20,uVar3);
      uVar5 = FUN_007ffbe0(param_1);
      iVar2 = FUN_005fdff0(uVar5,local_20[0]);
      iVar4 = (**(code **)(*param_1 + 0x1a0))(param_1,10);
      if (*(int *)(param_1[0xdc] + 0x98) < iVar2 + iVar4 + 5) {
        FUN_00414ad0(param_4 + 8,local_20[0]);
        *param_3 = 1;
        *(undefined4 *)(param_4 + 7) = 100;
      }
      else {
        *param_3 = 0;
      }
    }
  }
  if (*param_4 == param_1[0xe2]) {
    if (param_1[0xf0] != 0) {
      FUN_0064dd90(param_1[0xe2],local_30);
      iVar2 = FUN_00416db0(param_1[0xf0],local_30[0]);
      if (iVar2 != 0) {
        FUN_00414b50(local_20,param_1[0xf0]);
        FUN_00414ad0(param_4 + 8,local_20[0]);
        *param_3 = 1;
        *(undefined4 *)(param_4 + 7) = 100;
        goto code_r0x01bb3c71;
      }
    }
    *param_3 = 0;
  }
code_r0x01bb3c71:
  FUN_00414480(local_30);
  FUN_00414480(local_20);
  return;
}

