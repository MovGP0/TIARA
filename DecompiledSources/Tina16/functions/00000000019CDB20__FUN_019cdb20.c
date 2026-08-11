/* Ghidra address: 019cdb20 */
/* Ghidra symbol: FUN_019cdb20 */


void FUN_019cdb20(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00f33100(&LAB_00f256b8,1);
  uVar2 = FUN_00f309b0(&LAB_00f23b78,1);
  FUN_00f30ec0(uVar2,L"model",*(undefined8 *)(param_2 + 8));
  FUN_00f30ec0(uVar2,L"extr_instr",
               *(undefined8 *)(PTR_PTR_02001540 + (longlong)*(int *)(param_2 + 0xa0) * 8));
  FUN_00f30e70(uVar2,L"items",uVar1);
  FUN_00f335b0(*(undefined8 *)(param_1 + 0x50),uVar2);
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  return;
}

