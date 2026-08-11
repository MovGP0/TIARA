/* Ghidra address: 017b4a90 */
/* Ghidra symbol: FUN_017b4a90 */


void FUN_017b4a90(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  FUN_017aff80(param_1,param_2,param_3);
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_017b4ef0(param_1);
  }
  uVar1 = FUN_004095c0((longlong)(*(int *)(param_1 + 0x60) * 8));
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  FUN_00409a70(*(undefined8 *)(param_1 + 0x58),uVar1,(longlong)(*(int *)(param_1 + 0x60) * 8));
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x48);
  if (-1 < param_3) {
    *(undefined8 *)(param_1 + 0x70) =
         *(undefined8 *)(*(longlong *)(param_1 + 0x58) + (longlong)param_3 * 8);
  }
  return;
}

