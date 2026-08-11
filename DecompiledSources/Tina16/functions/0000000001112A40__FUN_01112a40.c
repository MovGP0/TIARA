/* Ghidra address: 01112a40 */
/* Ghidra symbol: FUN_01112a40 */


void FUN_01112a40(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 local_60 [2];
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  undefined8 local_3c;
  undefined2 local_34;
  undefined *local_30;
  undefined8 local_28;
  
  local_60[0] = 0;
  FUN_0040d200(&local_3c,0x24,0);
  if (*(char *)(param_1 + 0x611) != '\0') {
    FUN_01112db0(param_1);
  }
  local_3c = 0;
  local_30 = (&PTR_DAT_01f226e8)[*(byte *)(param_1 + 0x624)];
  local_28 = FUN_00416740(*(undefined8 *)(param_1 + 0x650));
  *(undefined4 *)(param_1 + 0x618) = 0;
  if (*(char *)(param_1 + 0x61e) == '\0') {
    *(undefined4 *)(param_1 + 0x618) = 2;
  }
  else {
    if (*(char *)(param_1 + 0x61c) != '\0') {
      *(undefined4 *)(param_1 + 0x618) = 2;
    }
    *(undefined1 *)(param_1 + 0x61e) = 0;
  }
  if (*(char *)(param_1 + 0x61f) != '\0') {
    if (*(char *)(param_1 + 0x61d) != '\0') {
      *(uint *)(param_1 + 0x618) = *(uint *)(param_1 + 0x618) | 1;
    }
    *(undefined1 *)(param_1 + 0x61f) = 0;
  }
  if (*(char *)(param_1 + 0x624) == '\0') {
    *(uint *)(param_1 + 0x618) = *(uint *)(param_1 + 0x618) | 0x200;
  }
  else {
    *(uint *)(param_1 + 0x618) = *(uint *)(param_1 + 0x618) | 0x2000;
  }
  if (*(longlong *)(param_1 + 0x650) != 0) {
    *(uint *)(param_1 + 0x618) = *(uint *)(param_1 + 0x618) | 0x200;
  }
  if (*(char *)(param_1 + 0x65b) != '\0') {
    *(uint *)(param_1 + 0x618) = *(uint *)(param_1 + 0x618) | 0x100;
  }
  local_3c = FUN_0065b870(param_1);
  iVar2 = thunk_FUN_0418b35e(0,0x803,(longlong)*(int *)(param_1 + 0x618),&local_3c);
  *(int *)(param_1 + 0x634) = iVar2;
  if (iVar2 == 0) {
    *(undefined1 *)(param_1 + 0x611) = 1;
    *(undefined2 *)(param_1 + 0x622) = local_34;
    iVar2 = FUN_01114190();
    *(int *)(param_1 + 0x630) = iVar2 / 10;
    FUN_01113f50(param_1,(longlong)iVar2 % 10 & 0xffffffff);
    if (*(char *)(param_1 + 0x617) != '\0') {
      FUN_01113cd0(param_1,*(undefined8 *)(param_1 + 0x640));
      FUN_01113ee0(param_1,&local_4c);
      *(int *)(param_1 + 0x648) = local_44 - local_4c;
      *(int *)(param_1 + 0x64c) = local_40 - local_48;
    }
    if ((*(char *)(param_1 + 0x624) == '\x02') || (*(char *)(param_1 + 0x624) == '\v')) {
      FUN_01113c80(param_1,10);
    }
    *(undefined2 *)(param_1 + 0x5be) = 0x18;
    if (*(char *)(param_1 + 0x614) != '\0') {
      *(ushort *)(param_1 + 0x5be) = *(ushort *)(param_1 + 0x5be) | 0x60;
    }
    if (*(char *)(param_1 + 0x613) != '\0') {
      *(ushort *)(param_1 + 0x5be) = *(ushort *)(param_1 + 0x5be) | 1;
    }
    if (*(char *)(param_1 + 0x616) != '\0') {
      *(ushort *)(param_1 + 0x5be) = *(ushort *)(param_1 + 0x5be) | 0x80;
    }
    if (*(char *)(param_1 + 0x615) != '\0') {
      *(ushort *)(param_1 + 0x5be) = *(ushort *)(param_1 + 0x5be) | 0x100;
    }
    cVar1 = FUN_01114230(param_1);
    if (cVar1 == '\x02') {
      pcVar4 = (code *)FUN_00411550(param_1,0xffac);
      (*pcVar4)(param_1,0);
    }
    FUN_01111400(param_1);
  }
  else {
    FUN_01114320(param_1,local_60);
    uVar3 = FUN_0044d490(&PTR_FUN_0110f3d0,1,local_60[0]);
    FUN_004134c0(uVar3);
  }
  FUN_00414480(local_60);
  return;
}

