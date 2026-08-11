/* Ghidra address: 00d418e0 */
/* Ghidra symbol: FUN_00d418e0 */


void FUN_00d418e0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  char cVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined8 local_res18 [2];
  undefined8 local_50;
  undefined8 local_44;
  undefined8 uStack_3c;
  undefined8 local_34;
  undefined4 uStack_2c;
  
  local_50 = 0;
  local_34 = *param_4;
  uStack_2c = *(undefined4 *)(param_4 + 1);
  local_44 = *param_5;
  uStack_3c = param_5[1];
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  cVar1 = FUN_00d41a80(param_1);
  if (cVar1 != '\0') {
    uVar2 = FUN_00787d50(*(undefined8 *)(param_1 + 0x18));
    if ((uVar2 & 0x2000) == 0x2000) {
      uVar3 = 0x70000;
    }
    else {
      uVar3 = 0x54000;
    }
    uVar2 = FUN_00787d50(*(undefined8 *)(param_1 + 0x18));
    if ((uVar2 & 0x100) == 0x100) {
      uVar3 = uVar3 | 0x100;
    }
    else {
      uVar2 = FUN_00787d50(*(undefined8 *)(param_1 + 0x18));
      if ((uVar2 & 0x200) == 0x200) {
        uVar3 = uVar3 | 0x1000;
      }
      else {
        uVar2 = FUN_00787d50(*(undefined8 *)(param_1 + 0x18));
        if ((uVar2 & 0x300) == 0x300) {
          uVar3 = uVar3 | 4;
        }
      }
    }
    FUN_00787f40(*(undefined8 *)(param_1 + 0x18),&local_50);
    FUN_00788830(param_1,param_2,&local_34,local_50,&local_44,uVar3);
  }
  FUN_00414480(&local_50);
  FUN_00414480(local_res18);
  return;
}

