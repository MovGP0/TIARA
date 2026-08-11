/* Ghidra address: 012ae910 */
/* Ghidra symbol: FUN_012ae910 */


void FUN_012ae910(longlong param_1,char param_2,char param_3,undefined1 param_4)

{
  int iVar1;
  undefined8 uVar2;
  double dVar3;
  undefined1 local_91;
  undefined8 local_90;
  undefined1 local_88 [24];
  undefined1 local_70 [16];
  undefined1 local_60 [30];
  char local_42;
  char local_41;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  double local_20 [2];
  
  local_90 = 0;
  local_20[0] = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0xd40));
  (**(code **)(**(longlong **)(param_1 + 0xdb8) + 0xe0))
            (*(longlong **)(param_1 + 0xdb8),&local_28,&local_30,&local_38,&local_40,&local_41,
             &local_42);
  if (param_2 == '\0') {
    local_20[0] = local_20[0] - local_38;
  }
  else if (param_2 == '\x01') {
    local_20[0] = local_20[0] + local_38;
  }
  if (local_38 <= 1e-09) {
    iVar1 = 2;
  }
  else {
    FUN_00c43d10(local_38);
    iVar1 = FUN_010bf8e0();
    iVar1 = 1 - iVar1;
  }
  uVar2 = FUN_010bfdb0(local_20,iVar1);
  local_20[0] = (double)FUN_00b90660(uVar2,local_28,local_30);
  dVar3 = (double)FUN_0040c850(local_20[0]);
  if (dVar3 < local_38 / 2.0) {
    local_20[0] = 0.0;
  }
  if (param_3 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0xdb8) + 0xd0))
              (*(longlong **)(param_1 + 0xdb8),local_20[0]);
    (**(code **)(**(longlong **)(param_1 + 0xdb8) + 0xd8))(*(longlong **)(param_1 + 0xdb8),local_20)
    ;
  }
  FUN_00b90440(*(undefined8 *)(param_1 + 0xd40),local_20[0]);
  uVar2 = FUN_004113f0(*(undefined8 *)(param_1 + 0x9b0),&PTR_FUN_010e62f0);
  if (local_28 - local_30 <= 1e-12) {
    dVar3 = 0.0;
  }
  else {
    dVar3 = ((local_20[0] + local_40) * (double)*(byte *)(param_1 + 0xd88)) / (local_28 - local_30);
  }
  local_91 = param_4;
  if (local_42 != '\x02') {
    local_91 = 0;
  }
  FUN_010ec9f0(uVar2,dVar3,*(undefined1 *)(param_1 + 0xd90),local_91,1,1);
  if (local_41 == '\0') {
    FUN_0064de00(*(undefined8 *)(param_1 + 0xba0),L"Level");
  }
  else {
    FUN_00414ff0(local_60,&DAT_012aec68);
    FUN_00b909e0(local_70,local_41);
    FUN_00415110(local_60,local_70,0x11);
    FUN_00414ff0(local_88,local_60);
    FUN_00415110(local_88,&DAT_012aec70,0x12);
    FUN_004169a0(&local_90,local_88);
    FUN_0064de00(*(undefined8 *)(param_1 + 0xba0),local_90);
  }
  FUN_00414480(&local_90);
  return;
}

