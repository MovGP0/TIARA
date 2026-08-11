/* Ghidra address: 0055b7a0 */
/* Ghidra symbol: FUN_0055b7a0 */


undefined1 * FUN_0055b7a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 *local_30 [2];
  
  puVar1 = (undefined8 *)FUN_00534510();
  (**(code **)*puVar1)(puVar1,local_30,0x17);
  *local_30[0] = 0x48;
  local_30[0][1] = 0xb8;
  *(undefined8 *)(local_30[0] + 2) = param_2;
  local_30[0][10] = 0x49;
  local_30[0][0xb] = 0xba;
  *(undefined8 *)(local_30[0] + 0xc) = param_1;
  local_30[0][0x14] = 0x49;
  local_30[0][0x15] = 0xff;
  local_30[0][0x16] = 0xe2;
  return local_30[0];
}

