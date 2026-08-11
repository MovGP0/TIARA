/* Ghidra address: 00695cb0 */
/* Ghidra symbol: FUN_00695cb0 */


void FUN_00695cb0(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 local_20;
  
  cVar1 = FUN_006927d0(*(undefined8 *)(param_1 + 0x70));
  if (cVar1 != '\x01') {
    thunk_FUN_0416f4fc(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x68));
  }
  local_20 = CONCAT44((int)*(short *)(param_2 + 0x12),(int)*(short *)(param_2 + 0x10));
  thunk_FUN_0417e313(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x68),&local_20);
  *(undefined2 *)(param_2 + 0x10) = (undefined2)local_20;
  *(undefined2 *)(param_2 + 0x12) = local_20._4_2_;
  FUN_00694d40(param_1,param_2);
  *(undefined1 *)(param_1 + 0x4f) = 1;
  return;
}

