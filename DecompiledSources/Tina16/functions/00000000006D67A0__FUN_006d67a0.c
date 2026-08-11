/* Ghidra address: 006d67a0 */
/* Ghidra symbol: FUN_006d67a0 */


void FUN_006d67a0(longlong param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int local_48 [2];
  undefined1 local_40;
  int local_38;
  undefined1 local_30;
  
  if (*(longlong *)(param_1 + 0x498) != 0) {
    iVar1 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x498) + 0x528) + 0x10) + -1;
    if (iVar1 < param_2) {
      local_40 = 0;
      local_30 = 0;
      local_48[0] = param_2;
      local_38 = iVar1;
      uVar3 = FUN_0044d8d0(&PTR_FUN_004347c0,1,PTR_PTR_02001e08,local_48,1);
      FUN_004134c0(uVar3);
    }
    iVar1 = FUN_006d6630(param_1);
    uVar2 = FUN_006d6600(param_1);
    FUN_004aed30(*(undefined8 *)(*(longlong *)(param_1 + 0x498) + 0x528),uVar2,param_2);
    if (-1 < iVar1) {
      uVar2 = FUN_006d6630(param_1);
      FUN_006d7780(*(undefined8 *)(param_1 + 0x498),iVar1,uVar2);
    }
  }
  return;
}

