/* Ghidra address: 01706600 */
/* Ghidra symbol: FUN_01706600 */


void FUN_01706600(longlong param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_01704a20(&DAT_017043f8,1);
  *(undefined8 *)(param_1 + 0x720) = uVar2;
  uVar1 = FUN_01704d80(uVar2);
  *(undefined1 *)(param_1 + 0x6e8) = uVar1;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0x700) = uVar2;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0x708) = uVar2;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0x718) = uVar2;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0x710) = uVar2;
  FUN_00414480(param_1 + 0x728);
  FUN_0064cf60(param_1,1);
  *(undefined4 *)(param_1 + 0x730) = 0xffffffff;
  return;
}

