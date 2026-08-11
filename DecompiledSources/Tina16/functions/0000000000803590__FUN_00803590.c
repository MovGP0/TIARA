/* Ghidra address: 00803590 */
/* Ghidra symbol: FUN_00803590 */


void FUN_00803590(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  if (*(short *)(param_2 + 10) == 0x1800) {
    (**(code **)(*param_1 + 0x290))(param_1,*(undefined2 *)(param_2 + 8));
  }
  else {
    if (((*(longlong *)(param_2 + 0x10) == 0) && (param_1[0xa0] != 0)) &&
       (cVar1 = FUN_007e5c50(param_1[0xa0],*(undefined2 *)(param_2 + 8)), cVar1 != '\0')) {
      return;
    }
    FUN_006581e0(param_1,param_2);
  }
  return;
}

