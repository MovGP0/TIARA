/* Ghidra address: 0123b940 */
/* Ghidra symbol: FUN_0123b940 */


void FUN_0123b940(longlong param_1)

{
  undefined8 *puVar1;
  
  FUN_0040d200(*(undefined8 *)(param_1 + 0x600),8,0);
  puVar1 = *(undefined8 **)(param_1 + 0x600);
  *puVar1 = 0xc008000000000000;
  puVar1[2] = 0xc066400000000000;
  puVar1[4] = 0x408f400000000000;
  puVar1[6] = 0x40c3880000000000;
  *(undefined2 *)((longlong)puVar1 + 0x1fa4) = 0x4c;
  *(undefined2 *)((longlong)puVar1 + 0x1fa6) = 0x42;
  *(undefined2 *)(puVar1 + 0x3f5) = 0x41;
  puVar1[9] = 0x3ff0000000000000;
  *(undefined4 *)((longlong)puVar1 + 0x1fac) = 100;
  puVar1[0x3f6] = 0x3e45798ee2308c3a;
  puVar1[0x3f7] = 0x40c3880000000000;
  puVar1[0x3f8] = 0x408f400000000000;
  *(undefined1 *)(puVar1 + 0x3f9) = 1;
  *(undefined1 *)((longlong)puVar1 + 0x1fc9) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x1fcc) = 0;
  *(bool *)((longlong)puVar1 + 0x1fca) = *(char *)((longlong)puVar1 + 0x1fc9) == '\0';
  *(undefined1 *)(puVar1 + 0x3fa) = 1;
  return;
}

