/* Ghidra address: 006e5e00 */
/* Ghidra symbol: FUN_006e5e00 */


bool FUN_006e5e00(longlong param_1,longlong param_2)

{
  int iVar1;
  
  while ((param_2 != 0 &&
         (iVar1 = FUN_004aeba0(*(undefined8 *)(param_1 + 0x48),param_2), iVar1 == -1))) {
    param_2 = FUN_006dd390(param_2);
  }
  return param_2 != 0;
}

