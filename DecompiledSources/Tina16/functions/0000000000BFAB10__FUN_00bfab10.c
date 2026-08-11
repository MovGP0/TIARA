/* Ghidra address: 00bfab10 */
/* Ghidra symbol: FUN_00bfab10 */


void FUN_00bfab10(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  FUN_00bf3750(param_1);
  *(ushort *)((longlong)param_1 + 0x63e) = *(ushort *)((longlong)param_1 + 0x63e) | 0x80;
  (**(code **)(*param_1 + 0x2b8))(param_1,1,param_2);
  cVar1 = FUN_00bf2c80(param_1);
  if (cVar1 != '\0') {
    FUN_00bf3bb0(param_1);
  }
  *(undefined4 *)((longlong)param_1 + 0x4b4) = *(undefined4 *)((longlong)param_1 + 0x4c4);
  *(undefined4 *)(param_1 + 0x97) = *(undefined4 *)((longlong)param_1 + 0x4cc);
  *(undefined8 *)((longlong)param_1 + 0x4bc) = *(undefined8 *)((longlong)param_1 + 0x4b4);
  FUN_00bf28a0(param_1);
  return;
}

