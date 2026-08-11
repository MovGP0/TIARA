/* Ghidra address: 01977650 */
/* Ghidra symbol: FUN_01977650 */


void FUN_01977650(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x210);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x290))(plVar1,param_1);
    *(undefined8 *)(param_1 + 0x218) = 0;
  }
  *(longlong **)(param_1 + 0x210) = param_2;
  if (param_2 != (longlong *)0x0) {
    uVar2 = FUN_0196f540(param_1);
    (**(code **)(*param_2 + 0x288))(param_2,param_1,uVar2);
    *(undefined8 *)(param_1 + 0x218) = *(undefined8 *)(*(longlong *)(param_1 + 0x210) + 0x4a0);
  }
  return;
}

