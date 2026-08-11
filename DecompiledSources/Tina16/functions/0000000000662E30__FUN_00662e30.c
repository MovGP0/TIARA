/* Ghidra address: 00662e30 */
/* Ghidra symbol: FUN_00662e30 */


void FUN_00662e30(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_00661230(param_1,param_2);
  if (lVar1 != 0) {
    if (lVar1 == *(longlong *)(param_1 + 0x58)) {
      *(undefined8 *)(lVar1 + 8) = 0;
    }
    else {
      FUN_00662e90(param_1,lVar1);
    }
    *(undefined1 *)(param_2 + 0x100) = 0;
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x180))(*(longlong **)(param_1 + 0x28));
  }
  return;
}

