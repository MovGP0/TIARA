/* Ghidra address: 01ca0cf0 */
/* Ghidra symbol: FUN_01ca0cf0 */


void FUN_01ca0cf0(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = FUN_01ca0d90(param_1,param_2);
  if (iVar1 == -1) {
    lVar2 = (**(code **)(*param_2 + 0x2e0))(param_2);
    if (lVar2 != 0) {
      FUN_004ae7e0(*(undefined8 *)(param_1 + 0x2500),param_2);
    }
  }
  return;
}

