/* Ghidra address: 0065f000 */
/* Ghidra symbol: FUN_0065f000 */


void FUN_0065f000(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  char local_9;
  
  local_20 = auStack_48;
  cVar1 = FUN_0065be20(param_1);
  if ((cVar1 == '\0') || ((*(uint *)(param_1 + 0xa4) & 0x2000) != 0)) {
    local_9 = '\0';
  }
  else {
    local_9 = '\x01';
  }
  if (local_9 != '\0') {
    FUN_0065ed10(param_1,1);
  }
  FUN_0064db10(param_1,param_2);
  *(undefined1 *)(param_1 + 0x448) = 0;
  if (local_9 != '\0') {
    FUN_0065ed10(param_1,0);
  }
  return;
}

