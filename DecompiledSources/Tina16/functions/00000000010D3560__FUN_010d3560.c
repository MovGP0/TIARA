/* Ghidra address: 010d3560 */
/* Ghidra symbol: FUN_010d3560 */


void FUN_010d3560(longlong *param_1)

{
  undefined8 uVar1;
  undefined4 local_50 [2];
  ulonglong local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30;
  
  if ((char)param_1[4] == '\0') {
    local_50[0] = 0x105;
    local_40 = 0;
    local_38 = 0;
    local_48 = local_48 & 0xffffffffffffff00;
    local_30 = 0;
  }
  else {
    local_50[0] = 0x124;
    local_48 = FUN_013b2dc0(0,&PTR_FUN_010d12e8,1,1);
  }
  uVar1 = FUN_010d34b0(0,&PTR_FUN_010d1338,local_50);
  (**(code **)(*param_1 + 0x20))(param_1,uVar1);
  return;
}

