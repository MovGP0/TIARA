/* Ghidra address: 00b53830 */
/* Ghidra symbol: FUN_00b53830 */


void FUN_00b53830(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_00b52c60(param_1,param_2);
  if (lVar2 == 0) {
    plVar1 = *(longlong **)(param_1 + 0x10);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + -0x20))(plVar1,1);
    }
    uVar3 = FUN_00b50790(&PTR_FUN_00b47518,1,param_1,param_2,*(undefined8 *)(param_1 + 0x28));
    *(undefined8 *)(param_1 + 0x10) = uVar3;
  }
  return;
}

