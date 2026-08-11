/* Ghidra address: 00601790 */
/* Ghidra symbol: FUN_00601790 */


void FUN_00601790(undefined8 param_1,int *param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined1 local_40 [14];
  ushort local_32;
  uint local_30;
  undefined4 local_2c;
  int local_20;
  
  FUN_00601680(param_1,local_40,param_4);
  if (local_32 < 9) {
    if (local_20 == 0) {
      *param_2 = (1 << ((byte)local_32 & 0x1f)) * 4 + 0x28;
    }
    else {
      *param_2 = local_20 * 4 + 0x28;
    }
  }
  else {
    *param_2 = 0x28;
    if ((local_30 & 3) != 0) {
      *param_2 = *param_2 + 0xc;
    }
  }
  *param_3 = local_2c;
  return;
}

