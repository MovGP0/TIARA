/* Ghidra address: 00956820 */
/* Ghidra symbol: FUN_00956820 */


undefined8 FUN_00956820(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  undefined4 local_1c [3];
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x130) + 0x10);
  cVar2 = (**(code **)(*plVar1 + 0xb0))(plVar1,param_2,local_1c);
  if (cVar2 == '\0') {
    uVar3 = 0;
  }
  else {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x130) + 0x10);
    uVar3 = (**(code **)(*plVar1 + 0x40))(plVar1,local_1c[0]);
  }
  return uVar3;
}

