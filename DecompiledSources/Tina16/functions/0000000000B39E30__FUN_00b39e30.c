/* Ghidra address: 00b39e30 */
/* Ghidra symbol: FUN_00b39e30 */


void FUN_00b39e30(longlong param_1,undefined4 param_2,undefined2 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  undefined2 local_38;
  
  FUN_00b39e00(auStack_58);
  lVar2 = FUN_00b39d20(param_1,param_2,param_3);
  if (lVar2 == 0) {
    plVar1 = *(longlong **)(param_1 + 8);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + -0x20))(plVar1,1);
      *(undefined8 *)(param_1 + 8) = 0;
    }
    local_38 = param_3;
    uVar3 = FUN_00b392f0(&DAT_00b38a68,1,param_1,param_2);
    *(undefined8 *)(param_1 + 8) = uVar3;
  }
  return;
}

