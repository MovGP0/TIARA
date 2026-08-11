/* Ghidra address: 0080c730 */
/* Ghidra symbol: FUN_0080c730 */


bool FUN_0080c730(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = false;
  if (*(longlong *)(param_1 + 0x170) != 0) {
    iVar1 = thunk_FUN_039bb6fb(*param_2);
    if (iVar1 == 0) {
      iVar1 = thunk_FUN_04118e64(*(undefined8 *)(param_1 + 0x170),param_2);
      bVar2 = iVar1 != 0;
    }
    else {
      iVar1 = thunk_FUN_039a049c(*(undefined8 *)(param_1 + 0x170),param_2);
      bVar2 = iVar1 != 0;
    }
  }
  return bVar2;
}

