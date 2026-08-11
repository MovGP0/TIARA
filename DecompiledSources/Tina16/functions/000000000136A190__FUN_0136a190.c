/* Ghidra address: 0136a190 */
/* Ghidra symbol: FUN_0136a190 */


undefined8 FUN_0136a190(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined4 local_30;
  undefined4 local_2c [3];
  
  if (*(char *)(param_1 + 0x2c) == '\0') {
    uVar1 = FUN_0198d430(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x27a8));
    FUN_01a982d0(uVar1,param_2,param_3,local_2c,&local_30);
    *(undefined4 *)(param_1 + 0x1c) = local_2c[0];
    *(undefined4 *)(param_1 + 0x20) = local_30;
  }
  *(undefined1 *)(param_1 + 0x2c) = 1;
  return 0;
}

