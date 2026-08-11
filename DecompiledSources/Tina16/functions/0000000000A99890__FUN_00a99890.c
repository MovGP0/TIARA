/* Ghidra address: 00a99890 */
/* Ghidra symbol: FUN_00a99890 */


void FUN_00a99890(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 local_440 [2];
  undefined1 local_430 [40];
  int local_408;
  int local_404;
  int local_400;
  int local_3fc;
  undefined4 local_3e8;
  int local_3e4;
  undefined4 local_3e0;
  int local_3dc;
  int local_3b8;
  int local_3b4;
  undefined1 local_398 [720];
  undefined1 local_c8 [192];
  
  local_440[0] = 0;
  FUN_00417600(local_398,&DAT_004013d8,0x26);
  FUN_00a5c200(param_2,local_398);
  uVar3 = FUN_00a54390(param_2);
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  uVar3 = FUN_00a543b0(param_2);
  *(undefined4 *)(param_1 + 0x48) = uVar3;
  cVar1 = FUN_0046c390(local_c8);
  if (cVar1 != '\0') {
    FUN_00467e90(local_440,local_c8);
    iVar4 = FUN_004170c0(&LAB_00a99b84,local_440[0],1);
    if (0 < iVar4) {
      uVar2 = 1;
      goto LAB_00a99935;
    }
  }
  uVar2 = 0;
LAB_00a99935:
  *(undefined1 *)(param_1 + 0xbc) = uVar2;
  FUN_00a57610(local_398,100,200,*(undefined4 *)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x48),4,
               local_430);
  *(undefined4 *)(param_1 + 0xb4) = 1;
  *(undefined4 *)(param_1 + 0xb8) = 1;
  if (local_3fc != -0xbc614e) {
    *(int *)(param_1 + 0xac) = local_3fc;
  }
  if (local_404 != -0xbc614e) {
    *(int *)(param_1 + 0xb0) = local_404;
  }
  if (local_408 != -0xbc614e) {
    *(int *)(param_1 + 0xb4) = local_408;
  }
  if (local_400 != -0xbc614e) {
    *(int *)(param_1 + 0xb8) = local_400;
  }
  cVar1 = FUN_00a554f0(param_2);
  if (cVar1 != '\0') {
    *(int *)(param_1 + 0xac) = *(int *)(param_1 + 0xac) + local_3dc;
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + local_3e4;
    *(undefined4 *)(param_1 + 0x100) = local_3e8;
    *(undefined4 *)(param_1 + 0x104) = local_3e0;
    *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + *(int *)(param_1 + 0x100);
    *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + *(int *)(param_1 + 0x104);
  }
  if (0 < local_3b8) {
    if (*(char *)(param_1 + 0xbc) == '\0') {
      *(int *)(param_1 + 0x10c) = local_3b8;
    }
    else if (local_3b8 < 0x65) {
      *(int *)(param_1 + 0x10c) = local_3b8;
    }
    else {
      *(undefined1 *)(param_1 + 0xbc) = 0;
    }
  }
  if (0 < local_3b4) {
    *(int *)(param_1 + 0x108) = (local_3b4 - *(int *)(param_1 + 0x100)) - *(int *)(param_1 + 0x104);
  }
  FUN_00a53e80(param_2,param_1 + 0xa8);
  FUN_00a54150(param_2,param_1 + 0x60);
  uVar3 = FUN_00a55160(param_2);
  *(undefined4 *)(param_1 + 0x114) = uVar3;
  FUN_00414480(local_440);
  FUN_00417840(local_398,&DAT_004013d8,0x26);
  return;
}

