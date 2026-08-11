/* Ghidra address: 00786530 */
/* Ghidra symbol: FUN_00786530 */


void FUN_00786530(longlong *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 local_20;
  
  local_30 = auStack_58;
  if (*(char *)((longlong)param_1 + 0x24) != '\0') {
    local_20 = FUN_005fe0d0(&PTR_FUN_005f54e0,1);
    uVar1 = FUN_0065b870(param_1[2]);
    uVar1 = thunk_FUN_0411fe47(uVar1);
    FUN_005ffb10(local_20,uVar1);
    (**(code **)(*param_1 + 0x30))(param_1,local_20);
    uVar1 = FUN_00786090(param_1);
    uVar2 = FUN_005ffa40(local_20);
    thunk_FUN_041a9b5c(uVar1,uVar2);
    FUN_005ffb10(local_20,0);
    FUN_00410f20(local_20);
    *(undefined1 *)(param_1 + 4) = 1;
  }
  return;
}

