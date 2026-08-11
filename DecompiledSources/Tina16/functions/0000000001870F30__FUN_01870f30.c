/* Ghidra address: 01870f30 */
/* Ghidra symbol: FUN_01870f30 */


void FUN_01870f30(longlong param_1,undefined8 param_2,undefined4 param_3,ulonglong *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong uStack_30;
  
  local_40 = 0;
  local_38 = *param_4;
  uStack_30 = param_4[1];
  lVar1 = *(longlong *)(param_1 + 0x78);
  (**(code **)(**(longlong **)(lVar1 + 0x4b8) + 0xa8))(*(longlong **)(lVar1 + 0x4b8),&local_38);
  uVar2 = FUN_0180bfb0();
  uVar2 = FUN_01809e30(uVar2);
  FUN_007d6c70(uVar2,*(undefined8 *)(lVar1 + 0x4b8),local_38 & 0xffffffff,local_38._4_4_,0x36,1);
  uVar2 = FUN_0180bfb0();
  lVar3 = FUN_01809e30(uVar2);
  (**(code **)(**(longlong **)(lVar1 + 0x4a0) + 0x18))
            (*(longlong **)(lVar1 + 0x4a0),&local_40,param_3);
  (**(code **)(**(longlong **)(lVar1 + 0x4b8) + 0x120))
            (*(longlong **)(lVar1 + 0x4b8),(int)local_38 + *(int *)(lVar3 + 0x94) + 2,
             local_38._4_4_ + 1,local_40);
  FUN_00414480(&local_40);
  return;
}

