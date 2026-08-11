/* Ghidra address: 00d8aad0 */
/* Ghidra symbol: FUN_00d8aad0 */


bool FUN_00d8aad0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = FUN_00416db0(param_3,L"default");
  if (iVar1 == 0) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0xc0);
  }
  else {
    lVar2 = FUN_00d74650(*(undefined8 *)(param_1 + 0x48),param_3);
  }
  return lVar2 != 0;
}

