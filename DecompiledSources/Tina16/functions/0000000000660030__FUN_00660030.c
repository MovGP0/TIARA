/* Ghidra address: 00660030 */
/* Ghidra symbol: FUN_00660030 */


undefined4 FUN_00660030(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    if (*(char *)(param_1 + 0xea) == '\0') {
      FUN_0065ff40(param_1,*(undefined4 *)(param_1 + 0x100),*(undefined4 *)(param_1 + 0xf8),
                   *(undefined4 *)(param_1 + 0xfc));
    }
    uVar1 = FUN_006600e0(param_1,param_2,param_3,param_4);
    if ((char)uVar1 != '\0') {
      *(undefined2 *)(param_1 + 0x104) = *(undefined2 *)(*(longlong *)PTR_DAT_02005950 + 0x9c);
      FUN_008088b0(*(undefined8 *)PTR_DAT_02005950,*(undefined2 *)(param_1 + 0xe8));
    }
  }
  return uVar1;
}

