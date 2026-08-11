/* Ghidra address: 018afe70 */
/* Ghidra symbol: FUN_018afe70 */


void FUN_018afe70(longlong param_1,longlong param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (param_3 == '\0') {
    lVar2 = FUN_006d8710(*(undefined8 *)(*(longlong *)(param_1 + 0x760) + 0x490),1);
    iVar1 = FUN_00416db0(*(undefined8 *)(lVar2 + 0x18),param_2);
    if (iVar1 != 0) {
      uVar3 = FUN_006d8710(*(undefined8 *)(*(longlong *)(param_1 + 0x760) + 0x490),1);
      FUN_006d85c0(uVar3,param_2);
      (**(code **)(**(longlong **)(param_1 + 0x760) + 0x188))(*(longlong **)(param_1 + 0x760));
    }
  }
  else {
    if ((param_2 == 0) &&
       (lVar2 = FUN_006d8710(*(undefined8 *)(*(longlong *)(param_1 + 0x760) + 0x490),2),
       *(longlong *)(lVar2 + 0x18) == 0)) {
      return;
    }
    lVar2 = FUN_006d8710(*(undefined8 *)(*(longlong *)(param_1 + 0x760) + 0x490),2);
    iVar1 = FUN_00416db0(*(undefined8 *)(lVar2 + 0x18),param_2);
    if (iVar1 != 0) {
      uVar3 = FUN_006d8710(*(undefined8 *)(*(longlong *)(param_1 + 0x760) + 0x490),2);
      FUN_006d85c0(uVar3,param_2);
      (**(code **)(**(longlong **)(param_1 + 0x760) + 0x188))(*(longlong **)(param_1 + 0x760));
    }
  }
  return;
}

