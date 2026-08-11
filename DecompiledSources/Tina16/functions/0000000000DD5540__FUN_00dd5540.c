/* Ghidra address: 00dd5540 */
/* Ghidra symbol: FUN_00dd5540 */


undefined1 *
FUN_00dd5540(undefined1 *param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  undefined1 *puVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  puVar1 = (undefined1 *)FUN_00410920(param_1,local_res10);
  if (puVar1 != (undefined1 *)0xffffffffffffffff) {
    *(undefined8 *)(puVar1 + 8) = 0;
    *(undefined8 *)(puVar1 + 0x10) = 0x41dfffffffc00000;
    *(undefined8 *)(puVar1 + 0x18) = 0;
    *(undefined8 *)(puVar1 + 0x20) = 0;
    puVar1[0x28] = 0;
    puVar1[0x29] = 0;
    puVar1[0x2a] = 0;
    puVar1[0x2b] = 0;
    *puVar1 = param_3;
    puVar1[1] = param_4;
    param_1 = puVar1;
  }
  return param_1;
}

