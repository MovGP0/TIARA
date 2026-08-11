/* Ghidra address: 00a0b760 */
/* Ghidra symbol: FUN_00a0b760 */


undefined1 FUN_00a0b760(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  ushort local_16;
  short local_14;
  undefined1 local_11;
  undefined8 local_10;
  
  local_20 = auStack_48;
  local_10 = FUN_004b6da0(param_2);
  iVar1 = (**(code **)(*param_2 + 0x18))(param_2,&local_14,2);
  if ((iVar1 == 2) && (local_14 == -0x2701)) {
    iVar1 = (**(code **)(*param_2 + 0x18))(param_2,&local_16,2);
    if ((iVar1 == 2) && ((local_16 & 0xe0ff) == 0xe0ff)) {
      local_11 = 1;
      goto LAB_00a0b7db;
    }
  }
  local_11 = 0;
LAB_00a0b7db:
  FUN_004b6dc0(param_2,local_10);
  return local_11;
}

