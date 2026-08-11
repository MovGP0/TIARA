/* Ghidra address: 018226a0 */
/* Ghidra symbol: FUN_018226a0 */


int FUN_018226a0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 local_10;
  undefined4 uStack_c;
  
  uVar1 = *param_2;
  uStack_c = (int)((ulonglong)uVar1 >> 0x20);
  iVar2 = -1;
  if ((-1 < uStack_c + -1) &&
     (iVar2 = -1, uStack_c + -1 < *(int *)(*(longlong *)(param_1 + 0xb8) + 0x10))) {
    iVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xb8));
    local_10 = (int)uVar1;
    iVar2 = iVar2 + local_10;
  }
  return iVar2;
}

