/* Ghidra address: 0088eed0 */
/* Ghidra symbol: FUN_0088eed0 */


longlong FUN_0088eed0(longlong param_1)

{
  FUN_0040d200(param_1,0x10,0);
  *(undefined1 *)(param_1 + 10) = 0xff;
  *(undefined1 *)(param_1 + 0xb) = 0xff;
  return param_1;
}

