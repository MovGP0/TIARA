/* Ghidra address: 00b512f0 */
/* Ghidra symbol: FUN_00b512f0 */


void FUN_00b512f0(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  
  FUN_00b4dad0(param_1,param_2);
  if (*(longlong *)(param_1 + 0x10) != 0) {
    uVar1 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 0x10);
    iVar2 = FUN_00b4e330();
    iVar5 = 0;
    if (-1 < iVar2 + -1) {
      do {
        lVar3 = FUN_00b4fc70(uVar1,iVar5);
        if (*(short *)(lVar3 + 0x48) == *(short *)(param_1 + 0x3e)) {
          plVar4 = (longlong *)FUN_00b4fc70(uVar1,iVar5);
          (**(code **)(*plVar4 + 0x80))(plVar4,param_2);
        }
        iVar5 = iVar5 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return;
}

