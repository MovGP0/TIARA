/* Ghidra address: 00446f40 */
/* Ghidra symbol: FUN_00446f40 */


undefined4
FUN_00446f40(undefined8 param_1,double *param_2,char param_3,undefined8 param_4,longlong param_5,
            char param_6)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  double dVar4;
  undefined1 auStack_b8 [32];
  int local_98;
  undefined4 local_90;
  longlong local_88;
  double *local_78;
  char local_69;
  undefined8 local_68;
  undefined8 local_60 [2];
  undefined4 local_4c;
  undefined2 local_48;
  undefined2 local_46;
  short local_44 [14];
  int local_28;
  char local_1d;
  int local_1c;
  int local_18;
  undefined4 local_14;
  longlong local_10;
  
  local_68 = 0;
  local_60[0] = 0;
  local_10 = 0;
  local_14 = 0;
  local_46 = *(undefined2 *)(param_5 + 0x17a);
  local_48 = *(undefined2 *)(param_5 + 0x178);
  if (param_3 == '\x01') {
    dVar4 = (double)(longlong)*param_2 / 10000.0;
  }
  else {
    dVar4 = *param_2;
  }
  if (dVar4 <= 0.0) {
    if (0.0 <= dVar4) {
      uVar2 = 2;
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  local_78 = param_2;
  local_69 = param_3;
  local_4c = FUN_004464b0(auStack_b8,uVar2);
  FUN_004465c0(auStack_b8,local_60,local_4c);
  FUN_00414b50(&local_10,local_60[0]);
  if (local_10 == 0) {
    local_4c = FUN_004464b0(auStack_b8,0);
    FUN_004465c0(auStack_b8,&local_68,local_4c);
    FUN_00414b50(&local_10,local_68);
  }
  if (local_1d == '\0') {
    iVar3 = 0x11;
    local_98 = local_28 - local_1c;
  }
  else {
    local_98 = 9999;
    iVar3 = local_28;
  }
  FUN_00447930(local_44,local_78,local_69,iVar3);
  if (local_18 != 0) {
    sVar1 = FUN_004463c0(auStack_b8,param_4,0);
    if (((sVar1 != 0x3b) && (((local_44[0] < 0x12 || (local_1d != '\0')) && (local_44[0] != 0x7ff)))
        ) && (local_44[0] != 0x800)) {
      FUN_00446c90(auStack_b8);
      goto code_r0x00447184;
    }
  }
  if (param_6 == '\0') {
    local_98 = 0xf;
    local_90 = 0;
    local_88 = param_5;
    local_14 = FUN_004462f0(param_1,local_78,local_69,0);
  }
  else {
    local_98 = 0xf;
    local_90 = 0;
    local_88 = param_5;
    local_14 = FUN_004462b0(param_1,local_78,local_69,0);
  }
code_r0x00447184:
  FUN_00414560(&local_68,2);
  FUN_00414480(&local_10);
  return local_14;
}

