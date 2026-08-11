/* Ghidra address: 00d49840 */
/* Ghidra symbol: FUN_00d49840 */


void FUN_00d49840(longlong param_1)

{
  undefined4 local_268;
  undefined4 local_264;
  undefined4 local_25c;
  byte local_258;
  byte local_257;
  undefined1 *local_248;
  undefined4 local_240;
  undefined1 local_236 [510];
  undefined1 local_38 [4];
  int local_34;
  byte local_2f;
  
  FUN_0040d200(local_236,0xff,0);
  FUN_0040d200(local_38,0x20,0);
  thunk_FUN_041b2403(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x18),0x417,
                     (longlong)*(int *)(param_1 + 0x10),local_38);
  FUN_0040d200(&local_268,0x30,0);
  local_268 = 0x30;
  local_264 = 0xf;
  local_240 = 0xff;
  local_248 = local_236;
  thunk_FUN_041b2403(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x18),0x43f,(longlong)local_34,
                     &local_268);
  local_257 = local_2f;
  thunk_FUN_041b2403(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x18),1099,(longlong)local_34,
                     local_248);
  FUN_00416830(param_1 + 0x18,local_236,0xff);
  *(undefined4 *)(param_1 + 0x20) = local_25c;
  if ((local_258 & 4) == 4) {
    *(byte *)(param_1 + 0x24) = *(byte *)(param_1 + 0x24) | 1;
  }
  if ((local_258 & 2) == 2) {
    *(byte *)(param_1 + 0x24) = *(byte *)(param_1 + 0x24) | 2;
  }
  if ((local_258 & 1) == 1) {
    *(byte *)(param_1 + 0x24) = *(byte *)(param_1 + 0x24) | 4;
  }
  if ((local_258 & 8) == 8) {
    *(byte *)(param_1 + 0x24) = *(byte *)(param_1 + 0x24) | 8;
  }
  *(byte *)(param_1 + 0x25) = *(byte *)(param_1 + 0x25) | 1;
  if ((local_257 & 1) == 1) {
    *(byte *)(param_1 + 0x25) = *(byte *)(param_1 + 0x25) | 2;
  }
  if ((local_257 & 2) == 2) {
    *(byte *)(param_1 + 0x25) = *(byte *)(param_1 + 0x25) | 4;
  }
  if ((local_257 & 4) == 4) {
    *(byte *)(param_1 + 0x25) = *(byte *)(param_1 + 0x25) | 8;
  }
  if ((local_257 & 6) == 6) {
    *(byte *)(param_1 + 0x25) = *(byte *)(param_1 + 0x25) | 0x10;
  }
  if (((local_257 & 8) == 8) || ((local_257 & 0x80) == 0x80)) {
    *(byte *)(param_1 + 0x25) = *(byte *)(param_1 + 0x25) | 0x20;
  }
  return;
}

