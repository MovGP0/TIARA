/* Ghidra address: 016bc170 */
/* Ghidra symbol: FUN_016bc170 */


void FUN_016bc170(longlong param_1,byte *param_2,int param_3,longlong param_4,undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  byte *pbVar5;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130 [2];
  undefined1 local_11c [4];
  byte local_118 [256];
  
  local_148 = 0;
  local_140 = 0;
  local_138 = 0;
  local_130[0] = 0;
  lVar4 = (ulonglong)*param_2 + 1;
  pbVar5 = local_118;
  for (; lVar4 != 0; lVar4 = lVar4 + -1) {
    *pbVar5 = *param_2;
    param_2 = param_2 + 1;
    pbVar5 = pbVar5 + 1;
  }
  uVar3 = FUN_016a4560(&DAT_0169ffe0,1,local_118,param_3);
  *param_5 = uVar3;
  cVar1 = FUN_01d350f0(*(undefined8 *)(param_1 + 0xa28),local_118,local_11c);
  if (cVar1 == '\0') {
    (**(code **)(**(longlong **)(param_1 + 0xa28) + 0x50))(*(longlong **)(param_1 + 0xa28),*param_5)
    ;
  }
  FUN_004169a0(local_130,local_118);
  (**(code **)(**(longlong **)(param_1 + 0xa50) + 0x80))
            (*(longlong **)(param_1 + 0xa50),local_130[0],(longlong)param_3);
  FUN_004169a0(&local_138,local_118);
  iVar2 = FUN_004170c0(&DAT_016bc308,local_138,1);
  if ((iVar2 == 1) && (param_4 != 0)) {
    FUN_004169a0(&local_140,local_118);
    FUN_019aeca0(param_4,local_140);
  }
  if ((*(char *)(param_1 + 0x9a5) != '\0') && (param_4 != 0)) {
    FUN_004169a0(&local_148,local_118);
    FUN_019ae8a0(param_4,local_148,param_3);
  }
  FUN_00414560(&local_148,4);
  return;
}

