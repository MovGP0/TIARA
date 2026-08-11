/* Ghidra address: 00f31770 */
/* Ghidra symbol: FUN_00f31770 */


void FUN_00f31770(longlong param_1,longlong *param_2,undefined4 param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  int local_38 [2];
  undefined1 local_30;
  
  lVar1 = param_1;
  if (DAT_01efb79c <= *(int *)(param_1 + 0x54)) {
    uVar2 = *(longlong *)(param_1 + 8) - *(longlong *)(param_1 + 0x10);
    uVar3 = 0xffffffff;
    if (0xffffffff < uVar2 + 0x80000000) {
      lVar1 = FUN_00410a90();
    }
    local_38[0] = DAT_01efb79c;
    local_30 = 0;
    uVar3 = FUN_00f2c2b0(&PTR_FUN_00f21720,CONCAT71((int7)((ulonglong)uVar3 >> 8),1) & 0xffffffff,
                         uVar2 & 0xffffffff,lVar1,0,PTR_PTR_020029e8,local_38,0);
    lVar1 = FUN_004134c0(uVar3);
  }
  *(int *)(lVar1 + 0x54) = *(int *)(lVar1 + 0x54) + 1;
  uVar3 = FUN_00f309b0(&LAB_00f23b78,1);
  (**(code **)(*param_2 + 8))(param_2,uVar3);
  FUN_00f314e0(uVar3,param_1,param_3);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -1;
  return;
}

