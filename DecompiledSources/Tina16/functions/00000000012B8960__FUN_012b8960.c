/* Ghidra address: 012b8960 */
/* Ghidra symbol: FUN_012b8960 */


void FUN_012b8960(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4,
                 undefined4 param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 local_58;
  undefined8 local_50 [2];
  undefined4 local_40;
  int iStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_58 = 0;
  local_50[0] = 0;
  local_38 = *param_4;
  uStack_30 = param_4[1];
  lVar1 = *(longlong *)(param_1 + 0x6d0);
  FUN_005fc860(*(undefined8 *)(*(longlong *)(lVar1 + 0x490) + 0x70),param_5);
  FUN_0084e320(lVar1,local_50,param_2,param_3);
  uVar2 = (**(code **)(**(longlong **)(lVar1 + 0x490) + 0x118))
                    (*(longlong **)(lVar1 + 0x490),local_50[0]);
  iStack_3c = (int)((ulonglong)uVar2 >> 0x20);
  iVar3 = ((uStack_30._4_4_ - local_38._4_4_) - iStack_3c) / 2;
  _local_40 = CONCAT44(iVar3,(int)uVar2);
  FUN_005fdab0(*(undefined8 *)(*(longlong *)(lVar1 + 0x490) + 0x80),*(undefined4 *)(lVar1 + 200));
  (**(code **)(**(longlong **)(lVar1 + 0x490) + 0xa8))(*(longlong **)(lVar1 + 0x490),&local_38);
  FUN_0084e320(lVar1,&local_58,param_2,param_3);
  (**(code **)(**(longlong **)(lVar1 + 0x490) + 0x130))
            (*(longlong **)(lVar1 + 0x490),&local_38,(int)local_38 + 2,local_38._4_4_ + iVar3,
             local_58);
  FUN_00414560(&local_58,2);
  return;
}

