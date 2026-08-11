/* Ghidra address: 01487700 */
/* Ghidra symbol: FUN_01487700 */


void FUN_01487700(longlong param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_014869a0(param_1,param_2);
  iVar2 = FUN_014868f0(param_1,param_2,uVar1);
  if (iVar2 < 0) {
    *param_3 = 0;
  }
  else {
    *param_3 = *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x10 + (longlong)iVar2 * 0x18);
  }
  return;
}

