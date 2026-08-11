/* Ghidra address: 01155220 */
/* Ghidra symbol: FUN_01155220 */


void FUN_01155220(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x7cc) = *(undefined4 *)(*(longlong *)(param_1 + 0x6d8) + 0x9c);
  FUN_00b90440(*(undefined8 *)(param_1 + 0x720),*(undefined8 *)(PTR_DAT_02004010 + 0x418));
  FUN_00b90440(*(undefined8 *)(param_1 + 0x728),*(undefined8 *)(PTR_DAT_02004010 + 0x420));
  FUN_00f04fa0(*(undefined8 *)(param_1 + 0x730),(longlong)*(short *)(PTR_DAT_02004010 + 0x416));
  (**(code **)(**(longlong **)(param_1 + 0x7a8) + 0x268))
            (*(longlong **)(param_1 + 0x7a8),PTR_DAT_02004010[0xc6]);
  FUN_0074b490(*(undefined8 *)(param_1 + 0x7b8),PTR_DAT_02004010[0x430]);
  (**(code **)(**(longlong **)(param_1 + 0x7b0) + 0x268))
            (*(longlong **)(param_1 + 0x7b0),PTR_DAT_02004010[199]);
  FUN_00f04fa0(*(undefined8 *)(param_1 + 0x750),(longlong)*(short *)(PTR_DAT_02004010 + 0x59d));
  (**(code **)(**(longlong **)(param_1 + 0x748) + 0x268))
            (*(longlong **)(param_1 + 0x748),PTR_DAT_02004010[0x59c]);
  FUN_0074b490(*(undefined8 *)(param_1 + 0x758),PTR_DAT_02004010[0x59b]);
  FUN_00b90440(*(undefined8 *)(param_1 + 0x780),(double)*(float *)(PTR_DAT_02004010 + 0x5a1));
  FUN_00f04fa0(*(undefined8 *)(param_1 + 0x778),(longlong)*(short *)(PTR_DAT_02004010 + 0x59f));
  (**(code **)(**(longlong **)(param_1 + 0x788) + 0x268))
            (*(longlong **)(param_1 + 0x788),PTR_DAT_02004010[0x59c]);
  (**(code **)(**(longlong **)(param_1 + 0x7a0) + 0x268))
            (*(longlong **)(param_1 + 0x7a0),PTR_DAT_02004010[0xc5]);
  FUN_00417c40(param_1 + 2000,PTR_DAT_02004010,&DAT_01d0d0b8);
  FUN_0074b490(*(undefined8 *)(param_1 + 0x6d0),*(undefined1 *)(param_1 + 0x7d3));
  return;
}

