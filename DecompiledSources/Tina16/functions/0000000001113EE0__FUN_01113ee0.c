/* Ghidra address: 01113ee0 */
/* Ghidra symbol: FUN_01113ee0 */


undefined8 * FUN_01113ee0(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined8 uStack_30;
  
  if ((*(char *)(param_1 + 0x611) != '\0') && (*(char *)(param_1 + 0x617) != '\0')) {
    *(undefined4 *)(param_1 + 0x618) = 0x40000;
    uVar1 = thunk_FUN_0418b35e(*(undefined2 *)(param_1 + 0x622),0x843,0x40000,local_40);
    *(undefined4 *)(param_1 + 0x634) = uVar1;
    *param_2 = local_38;
    param_2[1] = uStack_30;
  }
  return param_2;
}

