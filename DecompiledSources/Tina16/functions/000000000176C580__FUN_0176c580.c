/* Ghidra address: 0176c580 */
/* Ghidra symbol: FUN_0176c580 */


void FUN_0176c580(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  (**(code **)(*param_1 + 0x68))(param_1,param_2);
  puVar1 = *(undefined8 **)(param_2 + 8);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = (**(code **)*puVar1)(puVar1);
    FUN_00418590(uVar2,&DAT_01984da0);
  }
  lVar3 = FUN_0198d3a0(param_1[1],0x8001,0);
  *(longlong *)(param_2 + 8) = lVar3;
  *(undefined1 *)(lVar3 + 0x490) = *(undefined1 *)(param_1[1] + 0x490);
  return;
}

