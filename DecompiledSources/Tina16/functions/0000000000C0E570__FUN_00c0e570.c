/* Ghidra address: 00c0e570 */
/* Ghidra symbol: FUN_00c0e570 */


void FUN_00c0e570(longlong param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  
  if (*param_2 != 0) {
    if (*(longlong *)(param_1 + 0x650) == 0) {
      uVar1 = FUN_00610ca0(&PTR_FUN_0060fb80,1);
      *(undefined8 *)(param_1 + 0x650) = uVar1;
    }
    iVar3 = FUN_00c0e4f0(param_1,param_2);
    if (iVar3 == -1) {
      uVar1 = *(undefined8 *)(param_1 + 0x650);
      uVar2 = FUN_00bf1800(&DAT_00bf1758,1,param_2,param_3);
      FUN_004ae7e0(uVar1,uVar2);
    }
  }
  return;
}

