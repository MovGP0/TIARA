/* Ghidra address: 0095f5e0 */
/* Ghidra symbol: FUN_0095f5e0 */


undefined8 FUN_0095f5e0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x18))(param_1);
  if (plVar1 == (longlong *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,param_3);
  }
  return uVar2;
}

