/* Ghidra address: 012c28a0 */
/* Ghidra symbol: FUN_012c28a0 */


longlong FUN_012c28a0(undefined4 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_004095c0(0x630);
  FUN_0040d200(lVar1,0x630,0);
  *(undefined4 *)(lVar1 + 0x62c) = param_1;
  *(undefined8 *)(lVar1 + 0x610) = 0x4014000000000000;
  *(undefined8 *)(lVar1 + 0x618) = 0x4014000000000000;
  *(undefined8 *)(lVar1 + 0x620) = 0x4014000000000000;
  *(undefined4 *)(lVar1 + 0x628) = 0x400;
  *(undefined1 *)(lVar1 + 0xc) = 0;
  *(undefined1 *)(lVar1 + 0x10c) = 0;
  *(undefined1 *)(lVar1 + 0x20c) = 0;
  *(undefined1 *)(lVar1 + 0x30c) = 0;
  *(undefined1 *)(lVar1 + 0x40c) = 0;
  *(undefined1 *)(lVar1 + 0x50c) = 0;
  return lVar1;
}

