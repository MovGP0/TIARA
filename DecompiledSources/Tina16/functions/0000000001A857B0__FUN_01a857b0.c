/* Ghidra address: 01a857b0 */
/* Ghidra symbol: FUN_01a857b0 */


void FUN_01a857b0(longlong param_1,undefined8 param_2,undefined8 param_3,ushort param_4,int param_5,
                 int param_6)

{
  undefined8 local_10;
  
  local_10 = 0;
  FUN_01aee850(&local_10,0x41a,*(undefined4 *)(param_1 + 0x6b8),
               *(int *)(*(longlong *)(param_1 + 0xa70) + 0x90) +
               *(int *)(*(longlong *)(param_1 + 0xb10) + 0x90) + param_5,
               *(int *)(*(longlong *)(param_1 + 0xb10) + 0x94) + param_6);
  FUN_01aed640(*(undefined8 *)PTR_DAT_020041a8,local_10);
  if (*(longlong *)(param_1 + 0x798) == 0) {
    FUN_0082a6c0(*(undefined8 *)(param_1 + 0xa90),1);
    FUN_01a794b0(param_1,param_2);
  }
  else {
    if ((param_4 & 1) == 0) {
      FUN_01ae31b0(*(undefined8 *)(param_1 + 0x798));
      FUN_01ad1480(*(undefined8 *)(param_1 + 0x798));
    }
    else {
      FUN_01ad16a0(*(undefined8 *)(param_1 + 0x798));
    }
    FUN_01a89e80(param_1);
  }
  FUN_00414480(&local_10);
  return;
}

