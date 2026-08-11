/* Ghidra address: 00ccde70 */
/* Ghidra symbol: FUN_00ccde70 */


void FUN_00ccde70(longlong param_1,char param_2)

{
  undefined1 local_20 [16];
  
  *(char *)(param_1 + 0x28) = param_2;
  if (param_2 == '\x01') {
    *(undefined1 *)(param_1 + 0x29) = 0x3d;
  }
  else {
    FUN_0040f630(local_20,param_2,1);
    *(undefined1 *)(param_1 + 0x29) = local_20[0];
  }
  return;
}

