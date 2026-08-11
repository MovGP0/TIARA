/* Ghidra address: 016baee0 */
/* Ghidra symbol: FUN_016baee0 */


undefined1 FUN_016baee0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_148 [40];
  undefined1 *local_120;
  undefined1 local_109 [256];
  undefined1 local_9;
  
  local_120 = auStack_148;
  local_9 = 1;
  FUN_016bad90(param_1,local_109);
  uVar1 = FUN_016a4200(local_109,*(undefined8 *)(param_1 + 0x10));
  *param_2 = uVar1;
  return local_9;
}

