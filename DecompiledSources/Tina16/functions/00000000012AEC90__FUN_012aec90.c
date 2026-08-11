/* Ghidra address: 012aec90 */
/* Ghidra symbol: FUN_012aec90 */


void FUN_012aec90(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  double dVar3;
  double local_30 [2];
  
  lVar1 = FUN_004113f0(*(undefined8 *)(param_1 + 0x9b0),&PTR_FUN_010e62f0);
  *(uint *)(lVar1 + 0x14c) = (uint)*(byte *)(param_1 + 0xd91);
  *(uint *)(lVar1 + 0x150) = (uint)*(byte *)(param_1 + 0xd88);
  (**(code **)(**(longlong **)(param_1 + 0xdb8) + 0xf8))
            (*(longlong **)(param_1 + 0xdb8),param_1 + 0xd93,local_30,1);
  uVar2 = FUN_00b90090(*(undefined8 *)(param_1 + 0xd10));
  FUN_010eae00(lVar1,uVar2,0,0,0);
  dVar3 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0xd10));
  FUN_010eae00(lVar1,dVar3 + (double)*(byte *)(param_1 + 0xd91) * local_30[0],1,0,0);
  FUN_010eb220(lVar1,(double)(int)-(uint)*(byte *)(param_1 + 0xd88) / 2.0,0,0,0,0);
  FUN_010eb220(lVar1,(double)*(byte *)(param_1 + 0xd88) / 2.0,1,0,0,0);
  return;
}

