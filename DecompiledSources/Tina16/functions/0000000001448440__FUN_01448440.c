/* Ghidra address: 01448440 */
/* Ghidra symbol: FUN_01448440 */


void FUN_01448440(undefined8 param_1,longlong param_2)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 *puVar3;
  char *pcVar4;
  bool bVar5;
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined *local_68;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined2 *local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_50 = 0;
  local_58 = 0;
  local_40 = (undefined2 *)0x0;
  local_30[0] = 0;
  local_38 = 0;
  FUN_014477b0(auStack_98);
  if (*(longlong *)(param_2 + 8) == 0) {
    FUN_00ef4260(8,param_2);
  }
  else {
    pcVar4 = *(char **)(param_2 + 8);
    while ((pcVar4 != (char *)0x0 && (*(char *)(param_2 + 0x92) == '\0'))) {
      if ((byte)(*pcVar4 - 0xdU) < 4) {
        puVar1 = *(undefined2 **)(pcVar4 + 0xa8);
        if ((byte)(*pcVar4 - 0xdU) < 2) {
          local_48 = *(undefined8 *)(puVar1 + 0x20);
        }
        else {
          local_48 = *(undefined8 *)(puVar1 + 0x18);
        }
        puVar3 = puVar1 + 1;
        FUN_004169a0(&local_40,puVar3);
        iVar2 = 0;
        if (local_40 != (undefined2 *)0x0) {
          iVar2 = *(int *)(local_40 + -2);
        }
        if (1 < iVar2) {
          iVar2 = 0;
          if (local_40 != (undefined2 *)0x0) {
            iVar2 = *(int *)(local_40 + -2);
          }
          FUN_00416780(&local_50,*local_40);
          FUN_00416dc0(&local_58,local_40,2,iVar2 + -1);
          puVar3 = (undefined2 *)0x0;
          local_78 = L",";
          local_70 = local_58;
          local_68 = &DAT_014487bc;
          FUN_00416cd0(&local_40,5,&DAT_01448798,local_50);
        }
        iVar2 = 0;
        if (local_40 != (undefined2 *)0x0) {
          iVar2 = *(int *)(local_40 + -2);
        }
        if (0 < iVar2) {
          if ((byte)(*pcVar4 - 8U) < 0x10) {
            bVar5 = ((int)CONCAT62((int6)((ulonglong)puVar3 >> 0x10),1) << (*pcVar4 - 8U & 0x1f) &
                    0x180U) != 0;
          }
          else {
            bVar5 = false;
          }
          if (bVar5) {
            local_78 = L",dc)";
            FUN_00416cd0(&local_40,3,&DAT_01448798,local_40);
          }
        }
        *(char *)(param_2 + 0x50) = pcVar4[4];
        *(char *)(param_2 + 0x52) = pcVar4[8];
        *(undefined2 *)(param_2 + 0x90) = *puVar1;
        if ((byte)(*pcVar4 - 8U) < 8) {
          bVar5 = ((int)CONCAT71((int7)((ulonglong)param_2 >> 8),1) << (*pcVar4 - 8U & 0x1f) & 0xa0U
                  ) != 0;
        }
        else {
          bVar5 = false;
        }
        if (bVar5) {
          *(undefined1 *)(param_2 + 0x54) = 0;
        }
        else {
          *(undefined1 *)(param_2 + 0x54) = 1;
        }
        FUN_00efdf60(100.0 / (double)*(int *)(param_2 + 0xb38),param_2);
        FUN_01447a20(auStack_98,param_2);
        if (*(char *)(param_2 + 0x92) != '\0') {
          FUN_00ef81f0(param_2 + 0x30);
          FUN_00ef81f0(param_2 + 0x38);
        }
      }
      pcVar4 = *(char **)(pcVar4 + 0xb0);
    }
    iVar2 = FUN_019b5ce0(local_38,param_2);
    if (0 < iVar2) {
      FUN_019b6e50(local_30,&DAT_014487e8,param_2);
      FUN_019b6f10(local_30,local_38,param_2);
    }
    FUN_014483c0(auStack_98,param_2);
    FUN_019b6320(local_30);
    FUN_019b6320(&local_38);
  }
  FUN_00414560(&local_58,2);
  FUN_00414480(&local_40);
  return;
}

