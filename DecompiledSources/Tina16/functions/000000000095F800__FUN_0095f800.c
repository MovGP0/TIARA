/* Ghidra address: 0095f800 */
/* Ghidra symbol: FUN_0095f800 */


bool FUN_0095f800(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x20))
                    (*(longlong **)(param_1 + 0x40),param_2);
  if (lVar1 != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x40) + 8))(*(longlong **)(param_1 + 0x40),param_2);
    FUN_00410f20(lVar1);
  }
  return lVar1 != 0;
}

