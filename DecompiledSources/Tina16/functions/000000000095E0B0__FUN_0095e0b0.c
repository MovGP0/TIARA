/* Ghidra address: 0095e0b0 */
/* Ghidra symbol: FUN_0095e0b0 */


bool FUN_0095e0b0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x20))
                    (*(longlong **)(param_1 + 0x28),param_2);
  if (lVar1 != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x28) + 8))(*(longlong **)(param_1 + 0x28),param_2);
    FUN_00410f20(lVar1);
  }
  return lVar1 != 0;
}

