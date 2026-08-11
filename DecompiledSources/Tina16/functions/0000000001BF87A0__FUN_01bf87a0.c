/* Ghidra address: 01bf87a0 */
/* Ghidra symbol: FUN_01bf87a0 */


void FUN_01bf87a0(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (*(longlong *)(param_1 + 0x120) != 0) {
    lVar2 = FUN_01bfb5f0(*(undefined8 *)(param_1 + 0xe0),param_2);
    uVar1 = *(undefined8 *)(lVar2 + 0x18);
    uVar3 = FUN_01bfb5f0(*(undefined8 *)(param_1 + 0xe0),param_2);
    FUN_01bfad40(uVar3,0);
    plVar4 = (longlong *)FUN_004b2070(*(undefined8 *)(param_1 + 0xe0),param_2);
    uVar3 = FUN_004b2070(*(undefined8 *)(param_1 + 0x120),param_2);
    (**(code **)(*plVar4 + 0x10))(plVar4,uVar3);
    uVar3 = FUN_01bfb5f0(*(undefined8 *)(param_1 + 0xe0),param_2);
    FUN_01bfad40(uVar3,uVar1);
  }
  return;
}

