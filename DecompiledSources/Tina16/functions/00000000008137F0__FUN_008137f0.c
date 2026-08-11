/* Ghidra address: 008137f0 */
/* Ghidra symbol: FUN_008137f0 */


void FUN_008137f0(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  FUN_00785c20(param_1,param_2);
  if ((*(uint *)(*(longlong *)(param_2 + 0x10) + 0x20) & 0x80) == 0x80) {
    if (*(longlong *)(param_1 + 0x68) != 0) {
      uVar2 = FUN_0065b870(*(longlong *)(param_1 + 0x68));
      thunk_FUN_03ab0e43(uVar2,0);
    }
    if (*(longlong *)(param_1 + 0x48) != 0) {
      uVar2 = FUN_0065b870(*(longlong *)(param_1 + 0x48));
      thunk_FUN_03ab0e43(uVar2,0);
    }
  }
  else {
    uVar2 = FUN_0065b870(*(undefined8 *)(param_1 + 0x10));
    iVar1 = thunk_FUN_0419e3da(uVar2);
    if (iVar1 != 0) {
      FUN_00810830(param_1);
    }
  }
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}

