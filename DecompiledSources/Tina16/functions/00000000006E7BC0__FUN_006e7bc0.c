/* Ghidra address: 006e7bc0 */
/* Ghidra symbol: FUN_006e7bc0 */


ulonglong FUN_006e7bc0(undefined8 param_1,uint param_2)

{
  undefined1 local_d4 [28];
  int aiStack_b8 [42];
  
  FUN_006e7840(param_1,local_d4);
  return (longlong)aiStack_b8[(ulonglong)param_2 & 0xff] / 0x14 & 0xffffffff;
}

