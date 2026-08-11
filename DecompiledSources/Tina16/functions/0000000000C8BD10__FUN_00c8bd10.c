/* Ghidra address: 00c8bd10 */
/* Ghidra symbol: FUN_00c8bd10 */


undefined8 FUN_00c8bd10(longlong param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = param_2;
  if (param_2 < 0) {
    iVar1 = *(int *)(param_1 + 0x1c);
  }
  uVar2 = FUN_00878380(*(undefined8 *)(param_1 + 8),iVar1);
  uVar2 = (**(code **)(**(longlong **)PTR_DAT_020050b0 + 0xb8))
                    (*(longlong **)PTR_DAT_020050b0,uVar2);
  if (param_2 < 0) {
    FUN_00c8b3f0(param_1,8);
  }
  return uVar2;
}

