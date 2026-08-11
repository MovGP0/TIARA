/* Ghidra address: 0049f2b0 */
/* Ghidra symbol: FUN_0049f2b0 */


void FUN_0049f2b0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  FUN_0049f1b0(param_1,param_2);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    if (DAT_02011620 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = DAT_02011620 + 0x10;
    }
    uVar1 = FUN_004e5fc0(&PTR_FUN_0049ad90,1,lVar2);
    *(undefined8 *)(param_1 + 0x10) = uVar1;
  }
  FUN_004e6500(*(undefined8 *)(param_1 + 0x10),param_3,param_2);
  return;
}

