/* Ghidra address: 01858170 */
/* Ghidra symbol: FUN_01858170 */


void FUN_01858170(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x18) == 0) {
    plVar3 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
    *(longlong **)(param_1 + 0x18) = plVar3;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x60))(*(longlong **)(param_1 + 0x10));
    (**(code **)(*plVar3 + 0x88))(plVar3,uVar2);
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x48))(*(longlong **)(param_1 + 0x10));
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x70))(*(longlong **)(param_1 + 0x18),uVar2);
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x6c);
    if (iVar1 == 0) {
      FUN_0060bbf0(*(undefined8 *)(param_1 + 0x18),6);
    }
    else if (iVar1 == 1) {
      FUN_0060bbf0(*(undefined8 *)(param_1 + 0x18),3);
    }
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))
              (*(longlong **)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x10));
    FUN_00609e10(*(undefined8 *)(param_1 + 0x18));
  }
  else {
    FUN_00609e10(*(longlong *)(param_1 + 0x18));
  }
  return;
}

