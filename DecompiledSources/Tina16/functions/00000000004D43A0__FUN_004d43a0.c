/* Ghidra address: 004d43a0 */
/* Ghidra symbol: FUN_004d43a0 */


void FUN_004d43a0(longlong param_1,char param_2)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    if (DAT_02011638 == 0) {
      FUN_004aa220();
    }
    plVar1 = (longlong *)
             FUN_004aa8e0(DAT_02011638,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10))
    ;
    if (plVar1 != (longlong *)0x0) {
      if (param_2 == '\0') {
        *plVar1 = 0;
      }
      else {
        *plVar1 = param_1;
      }
    }
  }
  return;
}

