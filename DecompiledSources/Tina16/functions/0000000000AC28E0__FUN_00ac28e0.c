/* Ghidra address: 00ac28e0 */
/* Ghidra symbol: FUN_00ac28e0 */


void FUN_00ac28e0(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 local_3b8;
  undefined8 local_3b0 [2];
  char local_399;
  undefined1 local_398 [720];
  undefined1 local_c8 [24];
  undefined1 local_b0 [168];
  
  local_3b8 = 0;
  local_3b0[0] = 0;
  FUN_00417600(local_398,&DAT_004013d8,0x26);
  cVar1 = FUN_00a53e80(param_2,&local_399);
  if (cVar1 != '\0') {
    *(char *)(param_1 + 0xa8) = local_399;
  }
  cVar1 = FUN_00a54150(param_2,&local_399);
  if ((cVar1 != '\0') && (local_399 != '\0')) {
    *(undefined1 *)(param_1 + 0xa8) = 0;
    *(char *)(param_1 + 0x60) = local_399;
  }
  if (*(longlong *)(param_1 + 0xe8) == 0) {
    FUN_00414ad0(param_1 + 0xe8,*(undefined8 *)(param_2 + 0x58));
  }
  FUN_00a5c200(param_2,local_398);
  uVar2 = FUN_00a54390(param_2);
  *(undefined4 *)(param_1 + 0x44) = uVar2;
  uVar2 = FUN_00a543b0(param_2);
  *(undefined4 *)(param_1 + 0x48) = uVar2;
  FUN_00a57610(local_398,200,200,*(undefined4 *)(param_1 + 0x44),uVar2,
               *(undefined4 *)(param_1 + 0xf4),param_1 + 0xf8);
  if (*(int *)(param_1 + 300) != -0xbc614e) {
    *(int *)(param_1 + 0xac) = *(int *)(param_1 + 300);
  }
  if (*(int *)(param_1 + 0x124) != -0xbc614e) {
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0x124);
  }
  if (*(int *)(param_1 + 0x120) != -0xbc614e) {
    *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0x120);
  }
  if (*(int *)(param_1 + 0x128) != -0xbc614e) {
    *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0x128);
  }
  if ((*(int *)(param_1 + 0x170) != -0xbc614e) &&
     (*(undefined1 *)(param_1 + 0xbc) = 0, *(int *)(param_1 + 0x170) != -0xbc6d5d)) {
    cVar1 = FUN_0046c390(local_c8);
    if (cVar1 != '\0') {
      FUN_00467e90(local_3b0,local_c8);
      iVar3 = FUN_004170c0(&LAB_00ac2d04,local_3b0[0],1);
      if (0 < iVar3) {
        *(undefined1 *)(param_1 + 0xbc) = 1;
        uVar2 = thunk_FUN_03f3ed25(*(undefined4 *)(param_1 + 0x170),100,200);
        *(undefined4 *)(param_1 + 0xdc) = uVar2;
        goto LAB_00ac2b0f;
      }
    }
    *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_1 + 0x170);
  }
LAB_00ac2b0f:
  if ((*(int *)(param_1 + 0x174) != -0xbc614e) &&
     (*(undefined1 *)(param_1 + 0xbd) = 0, *(int *)(param_1 + 0x174) != -0xbc6d5d)) {
    cVar1 = FUN_0046c390(local_b0);
    if (cVar1 != '\0') {
      FUN_00467e90(&local_3b8,local_b0);
      iVar3 = FUN_004170c0(&LAB_00ac2d04,local_3b8,1);
      if (0 < iVar3) {
        *(undefined1 *)(param_1 + 0xbd) = 1;
        uVar2 = thunk_FUN_03f3ed25(*(undefined4 *)(param_1 + 0x174),100,200);
        *(undefined4 *)(param_1 + 0xe0) = uVar2;
        goto LAB_00ac2bb5;
      }
    }
    *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_1 + 0x174);
  }
LAB_00ac2bb5:
  cVar1 = FUN_00a53e80(param_2,&local_399);
  if (cVar1 != '\0') {
    *(char *)(param_1 + 0xa8) = local_399;
  }
  cVar1 = FUN_00a54150(param_2,&local_399);
  if ((cVar1 != '\0') && (local_399 != '\0')) {
    *(char *)(param_1 + 0x60) = local_399;
  }
  cVar1 = FUN_00a55480(param_2);
  if (cVar1 == '\0') {
    cVar1 = FUN_00a554f0(param_2);
    if (cVar1 != '\0') {
      *(int *)(param_1 + 0xac) = *(int *)(param_1 + 0xac) + *(int *)(param_1 + 0x14c);
      *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + *(int *)(param_1 + 0x144);
      *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + *(int *)(param_1 + 0x140);
      *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + *(int *)(param_1 + 0x148);
    }
  }
  else {
    *(undefined1 *)(param_1 + 0xf0) = 1;
    *(undefined4 *)(param_1 + 0xf4) = 0;
  }
  FUN_00414560(&local_3b8,2);
  FUN_00417840(local_398,&DAT_004013d8,0x26);
  return;
}

