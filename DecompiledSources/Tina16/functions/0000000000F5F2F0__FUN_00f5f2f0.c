/* Ghidra address: 00f5f2f0 */
/* Ghidra symbol: FUN_00f5f2f0 */


void FUN_00f5f2f0(longlong param_1)

{
  undefined8 local_46;
  undefined8 local_3e;
  undefined2 local_1e;
  undefined1 local_18;
  undefined2 local_b;
  
  FUN_00417580(&local_46,&DAT_01d0ba10);
  if (*(longlong *)(param_1 + 0x770) == 0) {
    FUN_00417c40(&local_46,PTR_DAT_02004010 + 0x8c0,&DAT_01d0ba10);
  }
  else {
    FUN_00417c40(&local_46,*(longlong *)(param_1 + 0x770) + 0xe98,&DAT_01d0ba10);
  }
  FUN_00f07ca0(*(undefined8 *)(param_1 + 0x6b0),local_46,local_3e,local_1e,local_18,local_b);
  FUN_0064cf60(param_1,0x4b3);
  FUN_00417740(&local_46,&DAT_01d0ba10);
  return;
}

