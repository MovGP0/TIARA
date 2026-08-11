/* Ghidra address: 01697b10 */
/* Ghidra symbol: FUN_01697b10 */


void FUN_01697b10(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x38) + 0x10);
  if (iVar1 < 1) {
    *(undefined4 *)param_2 = 0xfffffffe;
  }
  else {
    puVar2 = (undefined8 *)FUN_00b94e60(*(longlong *)(param_1 + 0x38),iVar1 + -1);
    for (lVar3 = 0x47; puVar2 = puVar2 + 1, lVar3 != 0; lVar3 = lVar3 + -1) {
      *param_2 = *puVar2;
      param_2 = param_2 + 1;
    }
  }
  return;
}

