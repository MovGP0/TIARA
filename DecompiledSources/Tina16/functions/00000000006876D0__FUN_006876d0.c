/* Ghidra address: 006876d0 */
/* Ghidra symbol: FUN_006876d0 */


void FUN_006876d0(longlong *param_1,undefined1 param_2)

{
  char cVar1;
  undefined1 auStack_48 [32];
  longlong *local_28;
  undefined1 *local_20;
  
  local_20 = auStack_48;
  cVar1 = (**(code **)(*param_1 + 0x50))(param_1);
  if (cVar1 != '\0') {
    local_28 = (longlong *)param_1[6];
    *(undefined1 *)(local_28 + 0x92) = 1;
    (**(code **)(*local_28 + 0x268))(local_28,param_2);
    *(undefined1 *)(param_1[6] + 0x490) = 0;
  }
  return;
}

