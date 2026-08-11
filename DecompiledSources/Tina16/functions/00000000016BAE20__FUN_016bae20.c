/* Ghidra address: 016bae20 */
/* Ghidra symbol: FUN_016bae20 */


undefined1 FUN_016bae20(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_148 [40];
  undefined1 local_120 [256];
  undefined1 *local_20;
  undefined1 local_9;
  
  local_20 = auStack_148;
  local_9 = 1;
  FUN_016bad90(param_1,local_120);
  FUN_004154b0(param_2,local_120,0);
  FUN_00415560(local_120,*param_2,0xff);
  FUN_016a4200(local_120,*(undefined8 *)(param_1 + 0x10));
  return local_9;
}

