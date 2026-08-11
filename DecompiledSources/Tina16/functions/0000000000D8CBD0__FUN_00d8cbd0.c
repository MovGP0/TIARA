/* Ghidra address: 00d8cbd0 */
/* Ghidra symbol: FUN_00d8cbd0 */


void FUN_00d8cbd0(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined8 param_6)

{
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_2c;
  undefined8 uStack_24;
  undefined4 local_1c;
  
  local_2c = *param_4;
  uStack_24 = param_4[1];
  local_1c = *(undefined4 *)(param_4 + 2);
  local_50 = *param_5;
  uStack_48 = param_5[1];
  uStack_40 = param_5[2];
  uStack_38 = param_5[3];
  puVar2 = &DAT_00d623c8;
  FUN_004179d0(&local_50,&DAT_00d623c8);
  if ((byte)local_1c < 8) {
    uVar1 = (int)CONCAT71((int7)((ulonglong)puVar2 >> 8),1) << ((byte)local_1c & 0x1f);
    puVar2 = (undefined *)(ulonglong)uVar1;
    bVar3 = (uVar1 & 0x38) != 0;
  }
  else {
    bVar3 = false;
  }
  if (bVar3) {
    uStack_38._0_3_ = CONCAT12(2,(undefined2)uStack_38);
  }
  if ((byte)local_1c < 0x10) {
    bVar3 = ((int)CONCAT62((int6)((ulonglong)puVar2 >> 0x10),1) << ((byte)local_1c & 0x1f) & 0x1c0U)
            != 0;
  }
  else {
    bVar3 = false;
  }
  if (bVar3) {
    uStack_38._0_3_ = CONCAT12(1,(undefined2)uStack_38);
  }
  FUN_00d81f50(param_1,param_2,param_3,&local_2c,&local_50,param_6);
  FUN_00417740(&local_50,&DAT_00d623c8);
  return;
}

