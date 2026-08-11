/* Ghidra address: 01b984f0 */
/* Ghidra symbol: FUN_01b984f0 */


void FUN_01b984f0(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined1 auStack_38 [32];
  
  if (param_2 != 0) {
    FUN_01b98470(auStack_38,param_2);
    FUN_006ded10(*(undefined8 *)(*(longlong *)(param_1 + 0x7e8) + 0x550),param_2);
    iVar1 = FUN_006d5120(*(undefined8 *)(param_1 + 0x7e0));
    if (-1 < iVar1) {
      plVar3 = (longlong *)FUN_006d6380(*(undefined8 *)(param_1 + 0x7e0));
      uVar2 = FUN_006d5120(*(undefined8 *)(param_1 + 0x7e0));
      (**(code **)(*plVar3 + 0x48))(plVar3,uVar2,1);
    }
  }
  return;
}

