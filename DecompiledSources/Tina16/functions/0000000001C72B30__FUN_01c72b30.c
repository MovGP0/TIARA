/* Ghidra address: 01c72b30 */
/* Ghidra symbol: FUN_01c72b30 */


void FUN_01c72b30(longlong param_1,int param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  FUN_00416780(local_20,*(undefined2 *)(param_1 + 0x1810));
  plVar2 = (longlong *)FUN_006d6380(*(undefined8 *)(param_1 + 0x1348));
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_28,param_2);
  FUN_00416ad0(local_20,local_28);
  uVar1 = FUN_00c85b20(*(undefined8 *)PTR_DAT_02002c40,local_20[0],*(undefined8 *)PTR_DAT_02001f18,0
                      );
  uVar3 = FUN_00c85bb0(*(undefined8 *)PTR_DAT_02002c40,uVar1,*(undefined8 *)PTR_DAT_02001f18,0);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x27a0));
  *(undefined8 *)(param_1 + 0x27a0) = uVar3;
  FUN_00848960(*(undefined8 *)(param_1 + 0x700),0);
  if (*(int *)(param_1 + 0x1b44) == param_2) {
    FUN_01c72ee0(param_1,*(undefined4 *)(param_1 + 0x1b48));
  }
  else {
    FUN_01c72ee0(param_1,0xffffffff);
  }
  FUN_01c72d40(param_1);
  FUN_00414560(&local_28,2);
  return;
}

