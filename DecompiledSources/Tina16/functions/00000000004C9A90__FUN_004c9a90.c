/* Ghidra address: 004c9a90 */
/* Ghidra symbol: FUN_004c9a90 */


bool FUN_004c9a90(longlong param_1,longlong param_2)

{
  int iVar1;
  bool bVar2;
  longlong local_10;
  
  local_10 = 0;
  if (*(short *)(param_1 + 0x56) == 1) {
    FUN_004c9990(param_1,&local_10);
    if (param_2 == local_10) {
      bVar2 = true;
    }
    else if ((param_2 == 0) || (local_10 == 0)) {
      bVar2 = false;
    }
    else {
      iVar1 = FUN_0043e420(param_2,local_10);
      bVar2 = iVar1 == 0;
    }
  }
  else {
    bVar2 = false;
  }
  FUN_00414480(&local_10);
  return bVar2;
}

