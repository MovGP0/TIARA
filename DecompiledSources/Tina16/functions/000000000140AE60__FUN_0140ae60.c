/* Ghidra address: 0140ae60 */
/* Ghidra symbol: FUN_0140ae60 */


void FUN_0140ae60(longlong *param_1)

{
  short sVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 local_78;
  undefined8 *local_30;
  
  (**(code **)(*param_1 + 0x2d0))(param_1,0,&local_30);
  sVar1 = FUN_01d03160(param_1);
  puVar6 = local_30;
  puVar7 = &local_78;
  for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  if (sVar1 == 0x28fd) {
    uVar5 = 3;
  }
  else {
    uVar5 = (uint)local_78._2_2_;
  }
  lVar3 = FUN_004095c0(uVar5 * 8);
  iVar2 = 1;
  for (uVar4 = uVar5; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined8 *)(lVar3 + -8 + (longlong)iVar2 * 8) =
         *(undefined8 *)(param_1[0x2d] + 0x5b + (longlong)iVar2 * 99);
    iVar2 = iVar2 + 1;
  }
  if (sVar1 == 0x28fd) {
    FUN_0140a890(local_30,lVar3);
  }
  else {
    FUN_0140acd0(&local_78,lVar3);
  }
  FUN_004095f0(lVar3,uVar5 << 3);
  return;
}

