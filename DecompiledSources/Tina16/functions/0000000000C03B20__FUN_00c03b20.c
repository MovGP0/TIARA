/* Ghidra address: 00c03b20 */
/* Ghidra symbol: FUN_00c03b20 */


void FUN_00c03b20(longlong param_1)

{
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = *(undefined8 *)(*(longlong *)(param_1 + 0x2d0) + 0x4b4);
  local_20 = *(undefined8 *)(*(longlong *)(param_1 + 0x2d0) + 0x4bc);
  FUN_00bf2ed0(*(undefined8 *)(param_1 + 0x2d0),&local_10);
  FUN_00bfb540(*(undefined8 *)(param_1 + 0x2d0),0);
  if ((local_18._4_4_ < local_20._4_4_) ||
     ((local_18._4_4_ == local_20._4_4_ && ((int)local_18 < (int)local_20)))) {
    FUN_00bd0e70(*(undefined8 *)(*(longlong *)(param_1 + 0x2d0) + 0x550),4,&local_18,&local_20,
                 local_10,*(undefined1 *)(*(longlong *)(param_1 + 0x2d0) + 0x5f5));
  }
  else {
    FUN_00bd0e70(*(undefined8 *)(*(longlong *)(param_1 + 0x2d0) + 0x550),3,&local_18,&local_20,
                 local_10,*(undefined1 *)(*(longlong *)(param_1 + 0x2d0) + 0x5f5));
  }
  FUN_00414480(&local_10);
  return;
}

