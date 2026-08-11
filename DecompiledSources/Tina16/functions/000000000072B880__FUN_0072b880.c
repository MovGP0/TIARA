/* Ghidra address: 0072b880 */
/* Ghidra symbol: FUN_0072b880 */


void FUN_0072b880(longlong param_1,uint param_2)

{
  bool bVar1;
  bool bVar2;
  
  if (param_2 != *(uint *)(param_1 + 200)) {
    bVar2 = (param_2 & 0x100) != 0;
    if ((bVar2) && (*(longlong *)(param_1 + 0xd8) != 0)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (((*(uint *)(param_1 + 200) & 0x100) != 0) != bVar1) {
      thunk_FUN_041b2403(*(undefined8 *)(param_1 + 0xd8),0x471,bVar2,0);
    }
    *(uint *)(param_1 + 200) = param_2;
  }
  return;
}

