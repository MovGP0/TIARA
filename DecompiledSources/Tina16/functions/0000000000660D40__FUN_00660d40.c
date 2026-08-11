/* Ghidra address: 00660d40 */
/* Ghidra symbol: FUN_00660d40 */


void FUN_00660d40(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [32];
  
  *(undefined4 *)(param_1 + 0x40) = param_2;
  for (lVar1 = *(longlong *)(param_1 + 0x10); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x18)) {
    iVar2 = FUN_006605d0(lVar1);
    if (0 < iVar2) {
      uVar3 = FUN_00660d20(auStack_38,lVar1);
      FUN_00660d40(uVar3,param_2);
    }
  }
  return;
}

