/* Ghidra address: 00621540 */
/* Ghidra symbol: FUN_00621540 */


longlong FUN_00621540(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  longlong local_10;
  
  local_20 = auStack_48;
  FUN_00452200(*(undefined8 *)(param_1 + 0x10));
  local_10 = *(longlong *)(param_1 + 8);
  while( true ) {
    if (local_10 == 0) {
      FUN_00452290(*(undefined8 *)(param_1 + 0x10));
      return local_10;
    }
    cVar1 = FUN_0043e030(local_10 + 0x20,param_2);
    if (cVar1 != '\0') break;
    local_10 = *(longlong *)(local_10 + 8);
  }
  FUN_006215d0(0,local_20);
  return local_10;
}

