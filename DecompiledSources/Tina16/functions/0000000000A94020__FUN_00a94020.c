/* Ghidra address: 00a94020 */
/* Ghidra symbol: FUN_00a94020 */


void FUN_00a94020(longlong param_1,undefined8 param_2,short *param_3,undefined2 param_4)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 local_20;
  
  local_20 = 0;
  lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18) + 0xb8);
  if (*param_3 == 0xd) {
    FUN_00414ad0(lVar1 + 0x940,*(undefined8 *)(*(longlong *)(param_1 + 8) + 8));
    FUN_00414ad0(lVar1 + 0x938,*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x10));
    (**(code **)(**(longlong **)(lVar1 + 0x8f0) + 0x60))
              (*(longlong **)(lVar1 + 0x8f0),*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x20));
    FUN_00af3740(lVar1,&local_20,*(undefined4 *)(*(longlong *)(param_1 + 8) + 0x28),
                 *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x2c));
    FUN_00414ad0(lVar1 + 0x900,local_20);
    FUN_00af2a50(lVar1);
  }
  else {
    pcVar2 = (code *)FUN_00411550(lVar1,0xffb7);
    (*pcVar2)(lVar1,param_3,param_4);
  }
  FUN_00414480(&local_20);
  return;
}

