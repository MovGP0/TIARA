/* Ghidra address: 0046a320 */
/* Ghidra symbol: FUN_0046a320 */


void FUN_0046a320(ushort *param_1,ushort *param_2,undefined4 param_3)

{
  ushort uVar1;
  ushort uVar2;
  
  uVar1 = *param_1;
  uVar2 = *param_2;
  if ((uVar1 < 0x10f) && (uVar2 < 0x10f)) {
    FUN_00469f40(param_1,param_2,param_3);
  }
  else if (uVar1 == 0x400c) {
    FUN_00461c70(param_1,param_1);
    FUN_0046a320(param_1,param_2,param_3);
  }
  else if (uVar2 == 0x400c) {
    FUN_0046a320(param_1,*(undefined8 *)(param_2 + 4),param_3);
  }
  else if (((uVar1 & 0xfff) < 0x10f) && ((uVar2 & 0xfff) < 0x10f)) {
    FUN_00469f40(param_1,param_2,param_3);
  }
  else {
    FUN_00469010(param_1,param_2,param_3);
  }
  return;
}

