/* Ghidra address: 006071f0 */
/* Ghidra symbol: FUN_006071f0 */


void FUN_006071f0(longlong param_1,undefined2 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (lVar1 != 0) {
    *param_2 = 0xe;
    *param_4 = 0;
    uVar2 = thunk_FUN_04130c1a(*(undefined8 *)(lVar1 + 0x10),0);
    *param_3 = uVar2;
  }
  return;
}

