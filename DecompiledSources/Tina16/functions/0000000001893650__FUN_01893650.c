/* Ghidra address: 01893650 */
/* Ghidra symbol: FUN_01893650 */


void FUN_01893650(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 local_38 [24];
  
  plVar1 = *(longlong **)(param_1 + 0x490);
  FUN_005fdab0(plVar1[0x10],*(undefined4 *)(param_1 + 200));
  uVar2 = FUN_0064d0b0(param_1);
  uVar3 = FUN_0064d120(param_1);
  FUN_00498350(local_38,0,0,uVar2,uVar3);
  (**(code **)(*plVar1 + 0xa8))(plVar1,local_38);
  return;
}

