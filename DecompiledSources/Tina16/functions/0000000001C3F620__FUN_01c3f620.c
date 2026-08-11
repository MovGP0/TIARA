/* Ghidra address: 01c3f620 */
/* Ghidra symbol: FUN_01c3f620 */


void FUN_01c3f620(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_30[0] = 0;
  local_20[0] = 0;
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x730) + 0x260))(*(longlong **)(param_1 + 0x730));
  if (iVar3 != -1) {
    lVar1 = *(longlong *)(param_1 + 0x730);
    FUN_0064dd90(lVar1,local_30);
    plVar2 = *(longlong **)(lVar1 + 0x4f0);
    iVar3 = (**(code **)(*plVar2 + 0xb0))(plVar2,local_30[0]);
    if (iVar3 == -1) {
      FUN_0064dd90(*(undefined8 *)(param_1 + 0x730),local_20);
      (**(code **)(**(longlong **)(param_1 + 0x730) + 0x268))
                (*(longlong **)(param_1 + 0x730),0xffffffff);
      FUN_0064de00(*(undefined8 *)(param_1 + 0x730),local_20[0]);
    }
  }
  FUN_01c3dc60(param_1,param_2);
  FUN_00414480(local_30);
  FUN_00414480(local_20);
  return;
}

