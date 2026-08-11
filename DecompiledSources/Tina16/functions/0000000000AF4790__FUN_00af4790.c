/* Ghidra address: 00af4790 */
/* Ghidra symbol: FUN_00af4790 */


undefined8 FUN_00af4790(longlong param_1,undefined4 param_2,int param_3)

{
  undefined8 uVar1;
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  undefined1 local_10 [7];
  char local_9;
  
  uVar1 = FUN_00a9bd50(*(longlong *)(param_1 + 0x8b0),
                       *(undefined8 *)(*(longlong *)(param_1 + 0x740) + 0x490),param_2,
                       param_3 + *(int *)(*(longlong *)(param_1 + 0x8b0) + 0x94),local_10,local_14,
                       local_18,&local_9);
  if (local_9 == '\0') {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

