/* Ghidra address: 00c8bde0 */
/* Ghidra symbol: FUN_00c8bde0 */


undefined4 FUN_00c8bde0(longlong param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_2;
  if (param_2 < 0) {
    iVar1 = *(int *)(param_1 + 0x1c);
  }
  uVar2 = FUN_00878390(*(undefined8 *)(param_1 + 8),iVar1);
  uVar2 = (**(code **)(**(longlong **)PTR_DAT_020050b0 + 0xa8))
                    (*(longlong **)PTR_DAT_020050b0,uVar2);
  if (param_2 < 0) {
    FUN_00c8b3f0(param_1,2);
  }
  return uVar2;
}

