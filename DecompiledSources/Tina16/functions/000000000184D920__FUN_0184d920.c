/* Ghidra address: 0184d920 */
/* Ghidra symbol: FUN_0184d920 */


void FUN_0184d920(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                 longlong param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar1 = *param_3;
  uVar2 = param_3[1];
  lVar3 = FUN_018490f0(&PTR_FUN_01844e48,1,param_2,param_1);
  *(undefined8 *)(lVar3 + 0xe0) = uVar1;
  *(undefined8 *)(lVar3 + 0xe8) = uVar2;
  if (param_5 == 0) {
    FUN_00414ad0(lVar3 + 0xc0,*(undefined8 *)(lVar3 + 0x20));
  }
  else {
    FUN_00414ad0(lVar3 + 0xc0,param_5);
  }
  FUN_00414ad0(lVar3 + 0xb0,param_4);
  FUN_0184caa0(param_1,*(undefined8 *)(lVar3 + 0x20),lVar3);
  return;
}

