/* Ghidra address: 00866000 */
/* Ghidra symbol: FUN_00866000 */


undefined8 FUN_00866000(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_2 + 0x48) = 0x8000ffff;
  plVar1 = *(longlong **)(param_2 + 0x60);
  if (plVar1 != (longlong *)0x0) {
    uVar2 = (**(code **)(*plVar1 + -0x58))(plVar1,param_3,param_4);
    *(undefined4 *)(param_2 + 0x48) = uVar2;
  }
  return 0x865fe2;
}

