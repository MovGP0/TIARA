/* Ghidra address: 015a9a20 */
/* Ghidra symbol: FUN_015a9a20 */


void FUN_015a9a20(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_00410f20(*(undefined8 *)(param_2 + 0x78));
  if (*(longlong *)(param_2 + 0x78) != *(longlong *)(param_2 + 0x70)) {
    uVar1 = FUN_004b6da0(*(undefined8 *)(param_2 + 0x70));
    FUN_004b6e40(*(undefined8 *)(param_2 + 0x70),uVar1);
    FUN_00410f20(*(undefined8 *)(param_2 + 0x70));
  }
  return;
}

