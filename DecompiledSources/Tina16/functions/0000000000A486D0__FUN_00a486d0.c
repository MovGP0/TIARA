/* Ghidra address: 00a486d0 */
/* Ghidra symbol: FUN_00a486d0 */


void FUN_00a486d0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 uVar3;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    FUN_00a47680(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x20);
    if (lVar1 == 0) {
      FUN_00a46490(param_2,param_3,param_4,param_5,param_6,*(undefined8 *)(param_1 + 0x18));
    }
    else {
      plVar2 = *(longlong **)(param_1 + 0x18);
      uVar3 = (**(code **)(*plVar2 + 0x48))(plVar2);
      FUN_00a46720(param_2,param_3,param_4,param_5,param_6,plVar2,lVar1,0,uVar3);
    }
  }
  return;
}

