/* Ghidra address: 0174f450 */
/* Ghidra symbol: FUN_0174f450 */


void FUN_0174f450(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  double dVar2;
  longlong lVar3;
  undefined8 local_30 [2];
  undefined8 local_20;
  
  local_30[0] = 0;
  local_20 = *param_3;
  dVar2 = (double)FUN_0040bcd0(param_2);
  uVar1 = FUN_0040c770(*(double *)(param_1 + 200) * dVar2);
  *(undefined4 *)(param_1 + 0xc4) = uVar1;
  *(int *)(param_1 + 0xc0) = (int)local_20 + *(int *)(param_1 + 0xc4);
  dVar2 = (double)FUN_0040bdd0(param_2);
  uVar1 = FUN_0040c770(*(double *)(param_1 + 200) * dVar2);
  *(undefined4 *)(param_1 + 0xbc) = uVar1;
  *(int *)(param_1 + 0xb8) = local_20._4_4_ + *(int *)(param_1 + 0xbc);
  *(int *)(param_1 + 0xc4) = (int)local_20;
  *(int *)(param_1 + 0xbc) = local_20._4_4_;
  FUN_01d048c0(*(undefined8 *)(*(longlong *)(param_1 + 0x120) + 0x28),
               *(undefined4 *)(param_1 + 0xc4),*(undefined4 *)(param_1 + 0xbc),param_1 + 0xdc,
               param_1 + 0xd8,*(longlong *)(param_1 + 0x130) == 0,1);
  lVar3 = param_1 + 0xd0;
  FUN_01d048c0(*(undefined8 *)(*(longlong *)(param_1 + 0x120) + 0x28),
               *(undefined4 *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 0xb8),param_1 + 0xd4,lVar3,
               *(longlong *)(param_1 + 0x130) == 0,1);
  uVar1 = (undefined4)((ulonglong)lVar3 >> 0x20);
  if (*(longlong *)(param_1 + 0x128) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x128) + 0x40))
              (*(longlong **)(param_1 + 0x128),*(undefined4 *)(param_1 + 0xdc),
               *(undefined4 *)(param_1 + 0xd8));
    (**(code **)(**(longlong **)(param_1 + 0x128) + 0x48))
              (*(longlong **)(param_1 + 0x128),*(undefined4 *)(param_1 + 0xd4),
               *(undefined4 *)(param_1 + 0xd0));
  }
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FUN_01243890(local_30,*(undefined8 *)(param_1 + 0x130),*(undefined8 *)(param_1 + 0x138),
                 *(undefined4 *)(param_1 + 0xdc),CONCAT44(uVar1,*(undefined4 *)(param_1 + 0xd8)),
                 *(undefined4 *)(param_1 + 0xd4),*(undefined4 *)(param_1 + 0xd0),1,0x8000);
  }
  FUN_0041b800(local_30);
  return;
}

