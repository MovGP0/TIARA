/* Ghidra address: 01a79ac0 */
/* Ghidra symbol: FUN_01a79ac0 */


void FUN_01a79ac0(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  FUN_01aee720(local_20,0x406,*(undefined4 *)(param_1 + 0x6b8),L"DeletePageMnu");
  FUN_01aed550(*(undefined8 *)PTR_DAT_020041a8,local_20[0]);
  uVar1 = FUN_006d5120(*(undefined8 *)(param_1 + 0xa68));
  uVar4 = *(undefined8 *)(param_1 + 0xa68);
  FUN_01cec240(*(undefined8 *)(param_1 + 0x7a0),uVar1,param_1 + 0x798,param_1 + 0x788,uVar4);
  uVar1 = (undefined4)((ulonglong)uVar4 >> 0x20);
  if (*(longlong *)(param_1 + 0x798) == 0) {
    uVar2 = FUN_0064d0b0(param_1);
    uVar3 = FUN_0064d120(param_1);
    FUN_01d2dc30(*(undefined8 *)(param_1 + 0x780),0,0,uVar2,CONCAT44(uVar1,uVar3),0xffffff);
  }
  else {
    FUN_01a77f90(param_1,param_2);
  }
  FUN_00414480(local_20);
  return;
}

