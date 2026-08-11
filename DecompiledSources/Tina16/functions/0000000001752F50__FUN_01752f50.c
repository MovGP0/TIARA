/* Ghidra address: 01752f50 */
/* Ghidra symbol: FUN_01752f50 */


void FUN_01752f50(longlong param_1,byte param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 uVar4;
  
  local_40 = 0;
  uVar1 = (&DAT_01f9b1cc)[(ulonglong)param_2 * 2];
  local_30 = *(ulonglong *)(&DAT_01f9b1d4 + (ulonglong)param_2 * 0x10);
  local_38._4_4_ = (undefined4)(uVar1 >> 0x20);
  uVar4 = local_38._4_4_;
  local_38 = uVar1;
  FUN_01d048c0(*(undefined8 *)(*(longlong *)(param_1 + 0x180) + 0x28),uVar1 & 0xffffffff,uVar4,
               &local_38,(longlong)&local_38 + 4,*(longlong *)(param_1 + 400) == 0,1);
  lVar2 = (longlong)&local_30 + 4;
  FUN_01d048c0(*(undefined8 *)(*(longlong *)(param_1 + 0x180) + 0x28),local_30 & 0xffffffff,
               local_30._4_4_,&local_30,lVar2,*(longlong *)(param_1 + 400) == 0,1);
  uVar4 = (undefined4)((ulonglong)lVar2 >> 0x20);
  if (*(longlong *)(param_1 + 0x188) != 0) {
    uVar3 = CONCAT44(uVar4,local_30._4_4_);
    (**(code **)(**(longlong **)(param_1 + 0x188) + 0x58))
              (*(longlong **)(param_1 + 0x188),local_38 & 0xffffffff,local_38._4_4_,
               local_30 & 0xffffffff,uVar3);
    uVar4 = (undefined4)((ulonglong)uVar3 >> 0x20);
  }
  if (*(longlong *)(param_1 + 400) != 0) {
    FUN_01243a40(&local_40,*(undefined8 *)(param_1 + 400),*(undefined8 *)(param_1 + 0x198),
                 local_38 & 0xffffffff,CONCAT44(uVar4,local_38._4_4_),(undefined4)local_30,
                 local_30._4_4_,1,0x8000,0xfffffffe);
  }
  FUN_0041b800(&local_40);
  return;
}

