/* Ghidra address: 0064d420 */
/* Ghidra symbol: FUN_0064d420 */


void FUN_0064d420(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 local_20 [2];
  undefined8 local_18;
  undefined8 local_10;
  
  if (((*(longlong *)(param_1 + 0x108) != 0) && (DAT_02012300 == 0)) &&
     ((*(ushort *)(param_1 + 0x34) & 9) == 0)) {
    local_20[0] = param_2;
    local_18 = param_3;
    local_10 = param_4;
    FUN_0064fca0(*(longlong *)(param_1 + 0x108),0xb042,param_1,local_20);
  }
  return;
}

