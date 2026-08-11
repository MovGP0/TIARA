/* Ghidra address: 00461fb0 */
/* Ghidra symbol: FUN_00461fb0 */


void FUN_00461fb0(undefined8 param_1,ushort *param_2,undefined4 param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  ushort uVar3;
  
  uVar1 = *param_2;
  uVar3 = (ushort)param_3;
  if ((uVar1 & 0xfff) < 0x14) {
    if ((uVar3 & 0xfff) < 0x14) {
      uVar2 = (**(code **)PTR_DAT_02004be8)(param_1,param_2,0x400,0,uVar3);
      FUN_00460800(uVar2,uVar1,param_3);
    }
    else {
      FUN_00460110(uVar1,param_3);
    }
  }
  else {
    FUN_004620f0(param_1,param_2,8);
    uVar2 = (**(code **)PTR_DAT_02004be8)(param_1,param_1,0x400,0,uVar3);
    FUN_00460800(uVar2,uVar1,param_3);
  }
  return;
}

