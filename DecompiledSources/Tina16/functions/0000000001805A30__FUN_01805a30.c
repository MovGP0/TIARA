/* Ghidra address: 01805a30 */
/* Ghidra symbol: FUN_01805a30 */


void FUN_01805a30(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined8 uVar4;
  int local_res18;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  char local_25;
  int local_24;
  undefined8 local_20;
  
  local_40 = auStack_98;
  local_58 = 0;
  local_60 = 0;
  local_68 = (undefined1 *)0x0;
  local_48 = 0;
  local_50 = 0;
  local_25 = '\0';
  local_res18 = param_3;
  if (*(char *)(*(longlong *)(param_1 + 0x30) + 8) == '\0') {
    local_res18 = 0;
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x20);
  puVar2 = auStack_98;
  if (((lVar1 != 0) && (puVar2 = auStack_98, *(char *)(param_2 + 0x38) != '\0')) &&
     (puVar2 = auStack_98, *(char *)(param_2 + 0x18) == '\0')) {
    local_20 = FUN_01804b60(&DAT_01802850,1,lVar1);
    uVar4 = FUN_01803c40(param_2);
    FUN_01804cc0(local_20,uVar4);
    FUN_01805470(local_20,param_2,1);
    local_25 = '\x01';
    FUN_00410f20(local_20);
    puVar2 = local_40;
  }
  local_40 = puVar2;
  FUN_01805730(*(undefined8 *)(param_1 + 0x30),param_2,local_res18);
  iVar3 = FUN_01803a10();
  local_24 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar4 = FUN_018039f0(param_2,local_24);
      FUN_01805a30(param_1,uVar4,local_res18 + 2);
      local_24 = local_24 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar3 = FUN_01803a10(param_2);
  if (0 < iVar3) {
    if (*(char *)(*(longlong *)(param_1 + 0x30) + 8) == '\0') {
      FUN_00415dd0(&local_50,*(undefined8 *)(param_2 + 0x20),0);
      local_78 = &LAB_01805cf8;
      FUN_00415980(&local_48,3,&DAT_01805ce8,local_50);
      FUN_018055c0(*(undefined8 *)(param_1 + 0x30),local_48);
    }
    else {
      FUN_018056f0(&local_60,local_res18);
      FUN_00415dd0(&local_68,*(undefined8 *)(param_2 + 0x20),0);
      local_78 = local_68;
      local_70 = &LAB_01805cf8;
      FUN_00415980(&local_58,4,local_60,&DAT_01805ce8);
      FUN_018055c0(*(undefined8 *)(param_1 + 0x30),local_58);
    }
  }
  if (local_25 != '\0') {
    FUN_018039a0(param_2);
  }
  FUN_00414590(&local_68,5);
  return;
}

