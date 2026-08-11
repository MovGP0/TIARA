/* Ghidra address: 012ae470 */
/* Ghidra symbol: FUN_012ae470 */


void FUN_012ae470(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  double dVar3;
  undefined8 uVar4;
  double unaff_XMM6_Qa;
  double unaff_XMM7_Qa;
  double local_50 [5];
  
  uVar2 = FUN_004113f0(*(undefined8 *)(param_1 + 0x9b0),&PTR_FUN_010e62f0);
  if (*(char *)(param_1 + 0xdd0) == '\0') {
    (**(code **)(**(longlong **)(param_1 + 0xdb8) + 0xf8))
              (*(longlong **)(param_1 + 0xdb8),param_1 + 0xd93,local_50,1);
    dVar3 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0xd10));
    unaff_XMM6_Qa = -dVar3 + *(double *)(param_1 + 0xda8);
    dVar3 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0xd10));
    unaff_XMM7_Qa =
         -dVar3 + (double)*(byte *)(param_1 + 0xd91) * local_50[0] + *(double *)(param_1 + 0xda8);
    uVar4 = FUN_00b90090(*(undefined8 *)(param_1 + 0xd10));
    (**(code **)(**(longlong **)(param_1 + 0xdb8) + 0x108))(*(longlong **)(param_1 + 0xdb8),uVar4);
  }
  else if (*(longlong *)(param_1 + 0xdd8) != 0) {
    lVar1 = *(longlong *)(param_1 + 0xdd8);
    unaff_XMM6_Qa =
         ((double)(int)-(uint)*(byte *)(param_1 + 0xd91) / 2.0) * *(double *)(lVar1 + 0x118) -
         *(double *)(lVar1 + 0x110);
    unaff_XMM7_Qa =
         ((double)*(byte *)(param_1 + 0xd91) / 2.0) * *(double *)(lVar1 + 0x118) -
         *(double *)(lVar1 + 0x110);
  }
  FUN_010eae00(uVar2,unaff_XMM6_Qa,0,0,0);
  FUN_010eae00(uVar2,unaff_XMM7_Qa,1,0,0);
  uVar4 = FUN_00b90090(*(undefined8 *)(param_1 + 0xd10));
  FUN_010ecb30(uVar2,uVar4,param_3,1,1);
  FUN_010e8e30(*(undefined8 *)(param_1 + 0x9b0),param_2);
  return;
}

