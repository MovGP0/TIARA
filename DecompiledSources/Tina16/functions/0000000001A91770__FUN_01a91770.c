/* Ghidra address: 01a91770 */
/* Ghidra symbol: FUN_01a91770 */


void FUN_01a91770(longlong *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1[1] + 8 + (longlong)param_2 * 0xc);
  *(undefined4 *)(param_1[1] + 8 + (longlong)param_2 * 0xc) = param_3;
  (**(code **)(*param_1 + 0x18))(param_1,uVar1,5);
  (**(code **)(*param_1 + 0x18))(param_1,param_3,1);
  return;
}

