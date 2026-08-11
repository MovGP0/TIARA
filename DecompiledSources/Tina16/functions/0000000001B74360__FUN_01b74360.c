/* Ghidra address: 01b74360 */
/* Ghidra symbol: FUN_01b74360 */


void FUN_01b74360(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 *param_5,byte param_6)

{
  int iVar1;
  longlong lVar2;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_48 = 0;
  local_40 = 0;
  local_38 = *param_5;
  uStack_30 = param_5[1];
  if (*(longlong *)(param_1 + 0x748) != 0) {
    lVar2 = FUN_004113f0(param_2,&PTR_FUN_0083c350);
    iVar1 = FUN_0084e390(lVar2,param_3,param_4);
    iVar1 = iVar1 / 1000;
    if (iVar1 == 0) {
      FUN_005fdab0(*(undefined8 *)(*(longlong *)(lVar2 + 0x490) + 0x80),*(undefined4 *)(lVar2 + 200)
                  );
    }
    else if (iVar1 == 1) {
      iVar1 = FUN_0084e390(lVar2,param_3,param_4);
      FUN_005fdab0(*(undefined8 *)(*(longlong *)(lVar2 + 0x490) + 0x80),
                   *(undefined4 *)
                    (*(longlong *)(param_1 + 0x748) + 0x104 + (longlong)(iVar1 + -1000) * 4));
    }
    else if (iVar1 == 2) {
      iVar1 = FUN_0084e390(lVar2,param_3,param_4);
      FUN_005fdab0(*(undefined8 *)(*(longlong *)(lVar2 + 0x490) + 0x80),
                   *(undefined4 *)
                    (*(longlong *)(param_1 + 0x748) + 0x170 + (longlong)(iVar1 + -2000) * 8));
    }
    else if (iVar1 == 3) {
      iVar1 = FUN_0084e390(lVar2,param_3,param_4);
      FUN_005fdab0(*(undefined8 *)(*(longlong *)(lVar2 + 0x490) + 0x80),
                   *(undefined4 *)
                    (*(longlong *)(param_1 + 0x748) + 0x174 + (longlong)(iVar1 + -3000) * 8));
    }
    (**(code **)(**(longlong **)(lVar2 + 0x490) + 0xa8))(*(longlong **)(lVar2 + 0x490),&local_38);
    FUN_005fc860(*(undefined8 *)(*(longlong *)(lVar2 + 0x490) + 0x70),
                 *(undefined4 *)(*(longlong *)(lVar2 + 0xb8) + 0x28));
    FUN_0084e320(lVar2,&local_40,param_3,param_4);
    if (local_40 != 0) {
      FUN_0084e320(lVar2,&local_48,param_3,param_4);
      (**(code **)(**(longlong **)(lVar2 + 0x490) + 0x130))
                (*(longlong **)(lVar2 + 0x490),&local_38,(int)local_38 + 2,local_38._4_4_ + 2,
                 local_48);
    }
    if ((param_6 & 2) != 0) {
      FUN_005fdab0(*(undefined8 *)(*(longlong *)(lVar2 + 0x490) + 0x80),0x800000);
      (**(code **)(**(longlong **)(lVar2 + 0x490) + 0xb8))(*(longlong **)(lVar2 + 0x490),&local_38);
    }
  }
  FUN_00414560(&local_48,2);
  return;
}

