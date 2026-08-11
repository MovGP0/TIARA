/* Ghidra address: 00aa61e0 */
/* Ghidra symbol: FUN_00aa61e0 */


undefined4
FUN_00aa61e0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 *param_7)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  
  *param_7 = 0;
  lVar1 = *(longlong *)(param_1 + 0x260);
  lVar2 = *(longlong *)(param_1 + 0x270);
  *(undefined8 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(param_1 + 0x270) = 0;
  uVar4 = FUN_00414480(param_7);
  uVar3 = FUN_00a9bc60(param_1,param_2,param_3,param_4,param_5,param_6,uVar4);
  if ((*(char *)(param_1 + 0x268) != '\0') && (*(longlong *)(param_1 + 0x260) != lVar1)) {
    if (lVar1 != 0) {
      FUN_00a94670(lVar1,*(undefined8 *)(param_1 + 600),0);
    }
    if (*(longlong *)(param_1 + 0x260) != 0) {
      FUN_00a94670(*(longlong *)(param_1 + 0x260),*(undefined8 *)(param_1 + 600),1);
    }
    (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x180))(*(longlong **)(param_1 + 0xc0));
  }
  if ((*(longlong *)(param_1 + 0x270) != lVar2) && (lVar2 != 0)) {
    FUN_00a956b0(lVar2,0);
  }
  if (*(longlong *)(param_1 + 0x270) != 0) {
    uVar5 = thunk_FUN_040bd713(1);
    if ((uVar5 & 0x8000) == 0) {
      FUN_00a956b0(*(undefined8 *)(param_1 + 0x270),1);
    }
    else {
      FUN_00a956b0(*(undefined8 *)(param_1 + 0x270),2);
    }
  }
  return uVar3;
}

