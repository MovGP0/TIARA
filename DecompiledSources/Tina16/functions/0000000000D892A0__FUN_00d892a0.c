/* Ghidra address: 00d892a0 */
/* Ghidra symbol: FUN_00d892a0 */


void FUN_00d892a0(longlong param_1,undefined1 param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined8 param_6)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_2c;
  undefined8 uStack_24;
  undefined4 uStack_1c;
  
  local_2c = *param_4;
  uStack_24 = param_4[1];
  uStack_1c = *(undefined4 *)(param_4 + 2);
  local_50 = *param_5;
  local_48 = param_5[1];
  uStack_40 = param_5[2];
  uStack_38 = param_5[3];
  FUN_004179d0(&local_50,&DAT_00d623c8);
  iVar1 = FUN_00416db0(param_6,L"default");
  if (iVar1 == 0) {
    lVar3 = FUN_00d77610(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x88),L"Panel");
  }
  else {
    lVar2 = FUN_00d74650(*(undefined8 *)(param_1 + 0x48),param_6);
    lVar3 = 0;
    if (lVar2 != 0) {
      lVar3 = FUN_00d77610(lVar2,L"Panel");
    }
  }
  if (lVar3 != 0) {
    local_48 = CONCAT44(local_48._4_4_,(int)local_48 - *(int *)(lVar3 + 0xc4));
    local_50 = CONCAT44(local_50._4_4_ + *(int *)(lVar3 + 0xcc),
                        (int)local_50 + *(int *)(lVar3 + 200));
  }
  FUN_00d81dd0(param_1,param_2,param_3,&local_2c,&local_50,param_6);
  FUN_00417740(&local_50,&DAT_00d623c8);
  return;
}

