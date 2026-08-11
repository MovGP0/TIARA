/* Ghidra address: 00bb3a10 */
/* Ghidra symbol: FUN_00bb3a10 */


undefined8 FUN_00bb3a10(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong *local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  local_30 = (longlong *)0x0;
  FUN_00414480(param_2);
  while( true ) {
    iVar1 = FUN_004b0420(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0xb8));
    if (iVar1 < 1) break;
    FUN_004b0260(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0xb8),&local_28,0);
    FUN_0041b890(&local_30,local_28);
    (**(code **)(*local_30 + 0x40))(local_30,local_20);
    FUN_00416ad0(param_2,local_20[0]);
    FUN_004b00d0(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0xb8),0);
    iVar1 = FUN_004b0420(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0xb8));
    if (0 < iVar1) {
      FUN_00416ad0(param_2,&LAB_00bb3b7c);
    }
  }
  FUN_0041b800(&local_30);
  FUN_0041b800(&local_28);
  FUN_00414480(local_20);
  return param_2;
}

