/* Ghidra address: 007d5980 */
/* Ghidra symbol: FUN_007d5980 */


undefined8 FUN_007d5980(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 local_40 [8];
  undefined8 local_38;
  
  iVar1 = (**(code **)(*param_1 + 0x90))(param_1);
  if (0 < iVar1) {
    uVar2 = FUN_007d56e0(param_1);
    iVar1 = thunk_FUN_039b2f81(uVar2,0,local_40);
    if (iVar1 != 0) {
      return local_38;
    }
  }
  return 0;
}

