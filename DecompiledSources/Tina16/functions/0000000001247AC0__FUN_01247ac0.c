/* Ghidra address: 01247ac0 */
/* Ghidra symbol: FUN_01247ac0 */


void FUN_01247ac0(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 param_5,int param_6)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined4 local_70;
  int local_68;
  int local_60;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 *local_30;
  char local_28;
  undefined2 uStack_27;
  undefined1 local_25;
  undefined2 uStack_24;
  undefined1 uStack_22;
  undefined8 local_20;
  
  local_40[0] = 0;
  local_30 = (undefined8 *)0x0;
  uVar1 = *param_1;
  local_28 = (char)uVar1;
  uStack_27 = (undefined2)((uint)uVar1 >> 8);
  local_25 = (undefined1)((uint)uVar1 >> 0x18);
  uStack_24 = *(undefined2 *)(param_1 + 1);
  uStack_22 = *(undefined1 *)((longlong)param_1 + 6);
  local_20 = *param_4;
  local_50 = param_2;
  local_48 = param_3;
  if (local_28 == '\x01') {
    FUN_00419260(&local_30,&DAT_01247a30,1,3);
    uVar2 = FUN_01247a70(auStack_98,0,0);
    *local_30 = uVar2;
    uVar2 = FUN_01247a70(auStack_98,0xfffffff8,4);
    local_30[1] = uVar2;
    uVar2 = FUN_01247a70(auStack_98,0xfffffff8,0xfffffffc);
    local_30[2] = uVar2;
  }
  else if (local_28 == '\x02') {
    FUN_00419260(&local_30,&DAT_01247a30,1,4);
    uVar2 = FUN_01247a70(auStack_98,0,0xfffffffc);
    *local_30 = uVar2;
    uVar2 = FUN_01247a70(auStack_98,0xfffffffe,0xfffffffc);
    local_30[1] = uVar2;
    uVar2 = FUN_01247a70(auStack_98,0xfffffffe,4);
    local_30[2] = uVar2;
    uVar2 = FUN_01247a70(auStack_98,0,4);
    local_30[3] = uVar2;
  }
  else if (local_28 == '\x03') {
    FUN_00419260(&local_30,&DAT_01247a30,1,4);
    uVar2 = FUN_01247a70(auStack_98,0,0);
    *local_30 = uVar2;
    uVar2 = FUN_01247a70(auStack_98,0xfffffff8,4);
    local_30[1] = uVar2;
    uVar2 = FUN_01247a70(auStack_98,0xfffffffd,0);
    local_30[2] = uVar2;
    uVar2 = FUN_01247a70(auStack_98,0xfffffff8,0xfffffffc);
    local_30[3] = uVar2;
  }
  if (local_28 != '\0') {
    local_68 = CONCAT13(uStack_22,CONCAT21(uStack_24,local_25));
    if (local_68 == -2) {
      local_68 = param_6;
    }
    local_78 = 0;
    if (local_30 != (undefined8 *)0x0) {
      local_78 = local_30[-1];
    }
    local_78 = local_78 + -1;
    local_70 = 1;
    local_60 = local_68;
    FUN_01244130(local_40,local_50,local_48,local_30);
    FUN_00419430(&local_30,&DAT_01247a30);
  }
  FUN_0041b800(local_40);
  FUN_00419430(&local_30,&DAT_01247a30);
  return;
}

