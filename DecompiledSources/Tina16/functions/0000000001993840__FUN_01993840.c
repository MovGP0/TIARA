/* Ghidra address: 01993840 */
/* Ghidra symbol: FUN_01993840 */


void FUN_01993840(longlong param_1,longlong *param_2)

{
  char cVar1;
  
  if ((param_2 != (longlong *)0x0) && ((undefined **)*param_2 == &PTR_FUN_017c0190)) {
    cVar1 = FUN_017c25f0(param_2);
    if (cVar1 != '\0') {
      FUN_0198b6d0(*(undefined8 *)(param_1 + 0xe0),param_2);
    }
  }
  return;
}

