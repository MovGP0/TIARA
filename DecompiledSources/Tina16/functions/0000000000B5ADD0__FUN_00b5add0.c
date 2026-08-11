/* Ghidra address: 00b5add0 */
/* Ghidra symbol: FUN_00b5add0 */


undefined4 FUN_00b5add0(longlong param_1)

{
  undefined4 uVar1;
  
  FUN_0040d200(param_1 + 0x134,0x400,0);
  uVar1 = FUN_00b17450(*(undefined8 *)(param_1 + 8),param_1 + 0x134,0x400);
  if ((char)uVar1 != '\0') {
    *(int *)(param_1 + 0xd34) = *(int *)(param_1 + 0xd34) + 1;
    *(undefined4 *)(param_1 + 0xd38) = 0;
    if (*(char *)(param_1 + 0x18) != '\0') {
      FUN_00b5af20(param_1);
    }
  }
  return uVar1;
}

