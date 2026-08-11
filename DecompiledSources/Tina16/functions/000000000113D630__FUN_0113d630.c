/* Ghidra address: 0113d630 */
/* Ghidra symbol: FUN_0113d630 */


undefined8 FUN_0113d630(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  
  param_2 = param_2 & 0xff;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x9d8) + 0x4f0);
  iVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
  if (iVar2 + -1 < (int)param_2) {
    uVar4 = 0x80000000;
  }
  else {
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x9d8) + 0x260))(*(longlong **)(param_1 + 0x9d8))
    ;
    if (uVar3 != param_2) {
      (**(code **)(**(longlong **)(param_1 + 0x9d8) + 0x268))
                (*(longlong **)(param_1 + 0x9d8),param_2);
      FUN_0113d390(param_1,param_1);
    }
    uVar4 = 0;
  }
  return uVar4;
}

