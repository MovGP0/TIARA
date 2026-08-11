/* Ghidra address: 0095f740 */
/* Ghidra symbol: FUN_0095f740 */


bool FUN_0095f740(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x20))
                    (*(longlong **)(param_1 + 0x30),param_2);
  if (lVar1 != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x30) + 8))(*(longlong **)(param_1 + 0x30),param_2);
    FUN_00410f20(lVar1);
  }
  return lVar1 != 0;
}

