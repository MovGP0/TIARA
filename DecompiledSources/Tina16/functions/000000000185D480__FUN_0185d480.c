/* Ghidra address: 0185d480 */
/* Ghidra symbol: FUN_0185d480 */


void FUN_0185d480(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  int local_130;
  undefined1 local_12c [256];
  uint local_2c [3];
  
  puVar3 = (undefined4 *)FUN_004095c0(0x48);
  if (puVar3 == (undefined4 *)0x0) {
    FUN_0044d470();
  }
  if (*(longlong *)(param_1 + 0x30) == 0) {
    uVar4 = FUN_00410e60(&PTR_FUN_00472dd0,1);
    *(undefined8 *)(param_1 + 0x30) = uVar4;
  }
  uVar1 = FUN_004ae7e0(*(undefined8 *)(param_1 + 0x30),puVar3);
  *puVar3 = uVar1;
  FUN_0040d200(puVar3,0x48,0);
  FUN_004b9ec0(*(undefined8 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    *(longlong *)(puVar3 + 10) = *(longlong *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  FUN_0185dbf0(param_1,2,puVar3 + 1);
  FUN_0185dbf0(param_1,2,puVar3 + 2);
  FUN_0185dbf0(param_1,2,puVar3 + 3);
  FUN_0185dbf0(param_1,2,puVar3 + 4);
  iVar2 = FUN_0185d0a0(param_1);
  if (iVar2 < (int)puVar3[4]) {
    uVar1 = FUN_0185d0a0(param_1);
    puVar3[4] = uVar1;
  }
  FUN_0185dbf0(param_1,1,local_2c);
  *(bool *)(puVar3 + 5) = (local_2c[0] & 0x80) != 0;
  *(bool *)((longlong)puVar3 + 0x15) = (local_2c[0] & 0x40) != 0;
  *(bool *)((longlong)puVar3 + 0x16) = (local_2c[0] & 0x20) != 0;
  local_2c[0] = local_2c[0] & 7;
  if (local_2c[0] == 0) {
    puVar3[6] = 2;
  }
  else if (local_2c[0] == 1) {
    puVar3[6] = 4;
  }
  else if (local_2c[0] == 2) {
    puVar3[6] = 8;
  }
  else if (local_2c[0] == 3) {
    puVar3[6] = 0x10;
  }
  else if (local_2c[0] == 4) {
    puVar3[6] = 0x20;
  }
  else if (local_2c[0] == 5) {
    puVar3[6] = 0x40;
  }
  else if (local_2c[0] == 6) {
    puVar3[6] = 0x80;
  }
  else if (local_2c[0] == 7) {
    puVar3[6] = 0x100;
  }
  else {
    puVar3[6] = 0x100;
  }
  if (*(char *)(puVar3 + 5) == '\0') {
    puVar3[7] = *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x20);
  }
  else {
    FUN_0185d370(param_1,puVar3[6],puVar3 + 7);
  }
  if ((int)puVar3[7] < 0) {
    FUN_01860ba0(2);
  }
  FUN_0185dbf0(param_1,1,puVar3 + 8);
  FUN_0185dbf0(param_1,1,&local_130);
  while (0 < local_130) {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))
                      (*(longlong **)(param_1 + 8),local_12c,local_130);
    if (iVar2 < local_130) {
      FUN_01860ba0(0x18);
    }
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))
              (*(longlong **)(param_1 + 0x10),local_12c,local_130);
    FUN_0185dbf0(param_1,1,&local_130);
  }
  puVar3[0xe] = puVar3[3] * puVar3[4];
  if (puVar3[3] * puVar3[4] == 0) {
    FUN_01860ba0(0x1a);
  }
  lVar5 = FUN_00409570((longlong)(int)puVar3[0xe]);
  *(longlong *)(puVar3 + 0xc) = lVar5;
  if (lVar5 == 0) {
    FUN_0044d470();
  }
  FUN_0185e710(param_1,puVar3);
  return;
}

