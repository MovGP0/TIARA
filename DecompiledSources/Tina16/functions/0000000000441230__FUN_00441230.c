/* Ghidra address: 00441230 */
/* Ghidra symbol: FUN_00441230 */


int FUN_00441230(undefined8 param_1,uint param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  *(uint *)(param_3 + 0x20) = ~param_2 & 0x16;
  uVar2 = FUN_00416740();
  uVar2 = thunk_FUN_041460a9(uVar2,param_3 + 0x30);
  *(undefined8 *)(param_3 + 0x28) = uVar2;
  if (*(longlong *)(param_3 + 0x28) == -1) {
    iVar1 = thunk_FUN_03ce33a6();
  }
  else {
    iVar1 = FUN_00441190(param_3);
    if (iVar1 != 0) {
      FUN_004412c0(param_3);
    }
  }
  return iVar1;
}

