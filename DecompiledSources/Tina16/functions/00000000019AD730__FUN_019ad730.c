/* Ghidra address: 019ad730 */
/* Ghidra symbol: FUN_019ad730 */


void FUN_019ad730(longlong *param_1,longlong *param_2,undefined1 param_3)

{
  longlong lVar1;
  undefined1 auStack_38 [44];
  undefined4 local_c;
  
  (**(code **)(*param_1 + 0x78))(param_1,0,0,0);
  FUN_01995600(param_1,0,0);
  FUN_01993f30(param_1,param_2,param_3,0);
  local_c = (**(code **)(*param_2 + 0x210))(param_2,0);
  FUN_01995c70(param_1);
  lVar1 = FUN_019959b0(param_1,0);
  while (lVar1 != 0) {
    FUN_019ad6d0(auStack_38,lVar1);
    FUN_01995cb0(param_1,0);
    lVar1 = FUN_019959b0(param_1,0);
  }
  return;
}

