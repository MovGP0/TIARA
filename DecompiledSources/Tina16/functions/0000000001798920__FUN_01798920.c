/* Ghidra address: 01798920 */
/* Ghidra symbol: FUN_01798920 */


void FUN_01798920(longlong param_1,int param_2)

{
  short sVar1;
  longlong lVar2;
  
  *(int *)(param_1 + 0xcb0) = param_2;
  if (param_2 < 0) {
    FUN_017941c0(param_1);
  }
  else {
    sVar1 = FUN_00c3f0d0(*(undefined8 *)(param_1 + 0xca8),param_2);
    if (sVar1 == -1) {
      lVar2 = FUN_00c3c560(&PTR_FUN_00c39d20,1);
      *(int *)(lVar2 + 8) = param_2;
      FUN_004ae7e0(*(undefined8 *)(*(longlong *)(param_1 + 0xca8) + 0x38),lVar2);
    }
    else {
      lVar2 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 0xca8) + 0x38),(int)sVar1);
    }
    FUN_017941c0(param_1);
    FUN_017967b0(param_1,lVar2,0,0);
  }
  FUN_01798610(param_1);
  FUN_00c5c720(*(undefined8 *)(param_1 + 0xd50));
  FUN_017989e0(param_1);
  FUN_0064e770(*(undefined8 *)(param_1 + 0x948));
  return;
}

