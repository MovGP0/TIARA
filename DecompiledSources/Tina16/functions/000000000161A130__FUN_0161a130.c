/* Ghidra address: 0161a130 */
/* Ghidra symbol: FUN_0161a130 */


void FUN_0161a130(longlong param_1,undefined8 param_2,double param_3)

{
  bool bVar1;
  
  if (*(int *)(param_1 + 0x14) < 1) {
    bVar1 = true;
  }
  else {
    bVar1 = param_3 !=
            *(double *)
             (*(longlong *)(param_1 + 0x20) + 8 + (longlong)(*(int *)(param_1 + 0x14) + -1) * 0x10);
  }
  if (bVar1) {
    FUN_0161a0c0();
  }
  return;
}

