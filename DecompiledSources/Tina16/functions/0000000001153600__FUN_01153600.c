/* Ghidra address: 01153600 */
/* Ghidra symbol: FUN_01153600 */


void FUN_01153600(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined1 *local_10;
  
  local_10 = auStack_38;
  if (*(longlong *)(param_1 + 0x8d0) == 0) {
    local_10 = auStack_38;
    FUN_01153680(param_1,param_2);
  }
  else {
    FUN_01153160(param_1,param_2);
    FUN_014ae370(*(undefined8 *)(param_1 + 0x8d0),0,0);
  }
  return;
}

