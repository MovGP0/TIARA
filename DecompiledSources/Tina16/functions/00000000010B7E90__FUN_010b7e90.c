/* Ghidra address: 010b7e90 */
/* Ghidra symbol: FUN_010b7e90 */


void FUN_010b7e90(longlong param_1,longlong *param_2)

{
  byte bVar1;
  bool bVar2;
  undefined8 local_28;
  undefined8 local_20 [2];
  char local_a;
  char local_9;
  
  local_28 = 0;
  local_20[0] = 0;
  FUN_01cf0710(param_1,param_2);
  FUN_01d311c0(*param_2,param_1 + 0x58,8);
  FUN_01d311c0(*param_2,param_1 + 0x60,8);
  FUN_01d311c0(*param_2,param_1 + 0x68,4);
  local_9 = *(char *)(param_1 + 0x80);
  if (*(char *)(param_1 + 0x81) != '\0') {
    bVar1 = *(byte *)(*param_2 + 0x78);
    if (bVar1 < 8) {
      bVar2 = ((int)CONCAT71((int7)((ulonglong)*param_2 >> 8),1) << (bVar1 & 0x1f) & 0x39U) != 0;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      local_9 = -local_9;
    }
  }
  FUN_01d311c0(*param_2,&local_9,1);
  FUN_01d311c0(*param_2,param_1 + 0x6c,4);
  bVar1 = *(byte *)(*param_2 + 0x78);
  if (bVar1 < 8) {
    bVar2 = ((int)CONCAT71((int7)((ulonglong)*param_2 >> 8),1) << (bVar1 & 0x1f) & 0x39U) != 0;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    FUN_01d311c0(*param_2,param_1 + 0x182,1);
    FUN_01b240b0(local_20,*(undefined8 *)(param_1 + 0x188),*(undefined8 *)(param_1 + 400));
    FUN_01d313e0(*param_2,local_20[0]);
  }
  FUN_004169a0(&local_28,param_1 + 0x82);
  FUN_01d313e0(*param_2,local_28);
  local_a = *(char *)(*param_2 + 0x7b);
  bVar1 = *(byte *)(*param_2 + 0x78);
  if (bVar1 < 8) {
    bVar2 = ((int)CONCAT71((int7)((ulonglong)*param_2 >> 8),1) << (bVar1 & 0x1f) & 0x39U) != 0;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    FUN_01d311c0(*param_2,&local_a,1);
  }
  if (*(char *)(*param_2 + 0x78) == '\0') {
    FUN_01d31630(*param_2,*(undefined8 *)(param_1 + 0x1a0));
  }
  bVar1 = *(byte *)(*param_2 + 0x78);
  if (bVar1 < 8) {
    bVar2 = ((int)CONCAT71((int7)((ulonglong)*param_2 >> 8),1) << (bVar1 & 0x1f) & 0x39U) != 0;
  }
  else {
    bVar2 = false;
  }
  if ((bVar2) && (local_a != '\0')) {
    FUN_010b73b0(*param_2,*(undefined8 *)(param_1 + 0x198));
  }
  else {
    FUN_010b7230(param_2,*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x2c),
                 *(undefined4 *)(param_1 + 0x30),*(undefined2 *)(param_1 + 0x28));
  }
  FUN_00414560(&local_28,2);
  return;
}

