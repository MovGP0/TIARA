/* Ghidra address: 01c79150 */
/* Ghidra symbol: FUN_01c79150 */


void FUN_01c79150(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_178 [32];
  wchar_t *local_158;
  undefined8 local_148;
  undefined1 local_140 [256];
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_30 = auStack_178;
  local_148 = 0;
  local_38 = 0;
  local_40 = 0;
  local_20 = 0;
  lVar2 = FUN_01c7acf0(param_1);
  if (lVar2 != 0) {
    uVar3 = FUN_00b89270();
    FUN_00b8e520(uVar3,&local_38,0x59a);
    uVar3 = FUN_00b89270();
    FUN_00b8e520(uVar3,&local_40,0x59e);
    local_10 = FUN_01b913f0(local_38,local_40);
    FUN_0040e780(local_140,*(undefined1 *)(param_1 + 0x1828),1);
    FUN_004169a0(&local_20,local_140);
    local_158 = L".RES";
    FUN_00416cd0(&local_20,3,&DAT_01c79348,local_20);
    FUN_00416ba0(&local_148,*(undefined8 *)(param_1 + 0x1818),local_20);
    cVar1 = FUN_012bf4f0(&local_18,local_148);
    if (cVar1 != '\0') {
      FUN_01c78950(param_1,local_18);
      FUN_00410f20(local_18);
    }
    FUN_01b91530(local_10);
  }
  FUN_00414480(&local_148);
  FUN_00414560(&local_40,2);
  FUN_00414480(&local_20);
  return;
}

