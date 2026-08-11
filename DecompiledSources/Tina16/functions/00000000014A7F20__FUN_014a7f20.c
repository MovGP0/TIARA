/* Ghidra address: 014a7f20 */
/* Ghidra symbol: FUN_014a7f20 */


void FUN_014a7f20(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(longlong *)(param_2 + 0x88) != 0) {
    iVar1 = FUN_01d31a40(*(undefined8 *)(param_2 + 0x88));
    if (iVar1 != 0) {
      uVar2 = FUN_01d31a40(*(undefined8 *)(param_2 + 0x88));
      FUN_01d30730(param_2 + 0x30,uVar2);
      FUN_00414ad0(*(undefined8 *)(param_2 + 0xf0),*(undefined8 *)(param_2 + 0x30));
    }
  }
  FUN_00410f20(*(undefined8 *)(param_2 + 0x88));
  return;
}

