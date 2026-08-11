/* Ghidra address: 017529b0 */
/* Ghidra symbol: FUN_017529b0 */


void FUN_017529b0(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x78))(param_1);
  (**(code **)(*param_1 + 0x70))(param_1,uVar1);
  FUN_0173d100(param_1,param_2,*PTR_DAT_02002480,*PTR_DAT_02001560);
  return;
}

