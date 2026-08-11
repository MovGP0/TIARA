/* Ghidra address: 01950760 */
/* Ghidra symbol: FUN_01950760 */


undefined8 FUN_01950760(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_28 [32];
  
  lVar1 = FUN_019507f0(param_1);
  if (lVar1 == 0) {
    if ((*(longlong *)(param_1 + 0x90) == 0) && ((*(ushort *)(param_1 + 0x34) & 8) == 0)) {
      lVar1 = FUN_004b6930(&PTR_FUN_00478280,1);
      *(longlong *)(param_1 + 0x90) = lVar1;
      *(undefined1 *)(lVar1 + 0x49) = 0;
      FUN_004b67b0(lVar1,1);
      FUN_019506c0(auStack_28,param_1);
    }
    uVar2 = *(undefined8 *)(param_1 + 0x90);
  }
  else {
    uVar2 = FUN_01950760(lVar1);
  }
  return uVar2;
}

