/* Ghidra address: 01641960 */
/* Ghidra symbol: FUN_01641960 */


undefined8 FUN_01641960(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_2 + 0x88) < *(int *)(*(longlong *)(param_1 + 0x18) + 0x10)) {
    uVar1 = FUN_004aeac0();
  }
  else {
    FUN_01613110(L"THDLDesign.FindFunction");
  }
  return uVar1;
}

