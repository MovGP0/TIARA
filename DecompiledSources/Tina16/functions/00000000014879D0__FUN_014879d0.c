/* Ghidra address: 014879d0 */
/* Ghidra symbol: FUN_014879d0 */


undefined8 FUN_014879d0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x48) == 0) {
    uVar1 = FUN_01487a70(&PTR_FUN_01484738,1,param_1);
    *(undefined8 *)(param_1 + 0x48) = uVar1;
  }
  return *(undefined8 *)(param_1 + 0x48);
}

