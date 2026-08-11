/* Ghidra address: 006db060 */
/* Ghidra symbol: FUN_006db060 */


void FUN_006db060(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  char local_71;
  uint local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_58;
  uint local_54;
  undefined4 local_48;
  
  lVar3 = FUN_006da380(*(undefined8 *)(param_1 + 0x490),param_3);
  FUN_0040d200(&local_70,0x48,0);
  local_70 = 7;
  local_6c = *(undefined4 *)(lVar3 + 0x20);
  local_68 = FUN_00416740();
  local_58 = 0;
  if (*(longlong *)(lVar3 + 0x18) != 0) {
    local_58 = *(undefined4 *)(*(longlong *)(lVar3 + 0x18) + -4);
  }
  local_71 = *(char *)(lVar3 + 0x2c);
  cVar1 = FUN_006d9f90(lVar3);
  if (cVar1 != '\0') {
    FUN_00648400(&local_71);
  }
  if (local_71 == '\0') {
    local_54 = 0;
  }
  else if (local_71 == '\x01') {
    local_54 = 1;
  }
  else {
    local_54 = 2;
  }
  if (*(char *)(lVar3 + 0x2d) == '\x01') {
    local_54 = local_54 | 0x8000;
  }
  else {
    local_54 = local_54 | 0x4000;
  }
  if (*(char *)(lVar3 + 0x36) != '\0') {
    local_54 = local_54 | 0x40;
  }
  if (*(char *)(lVar3 + 0x37) != '\0') {
    local_54 = local_54 | 0x80;
  }
  if (*(char *)(lVar3 + 0x38) != '\0') {
    local_54 = local_54 | 0x100;
  }
  cVar1 = FUN_006d9f70(lVar3);
  if (cVar1 != '\0') {
    local_54 = local_54 | 4;
  }
  if ((*(longlong *)(param_1 + 0x4c8) != 0) && (-1 < *(int *)(lVar3 + 0x30))) {
    local_70 = local_70 | 0x20;
    local_54 = local_54 | 0x800;
    local_48 = *(undefined4 *)(lVar3 + 0x30);
  }
  uVar4 = FUN_0065b870(param_1);
  iVar2 = FUN_004b1870(lVar3);
  FUN_004701a0(uVar4,param_2,(longlong)iVar2,&local_70);
  return;
}

