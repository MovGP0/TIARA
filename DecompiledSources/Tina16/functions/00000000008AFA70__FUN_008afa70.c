/* Ghidra address: 008afa70 */
/* Ghidra symbol: FUN_008afa70 */


undefined8 * FUN_008afa70(longlong param_1,undefined8 *param_2,longlong param_3,char param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_48 = 0;
  local_40 = 0;
  local_30[0] = 0;
  local_38 = 0;
  FUN_00414480(param_2);
  iVar3 = 0;
  if (param_3 != 0) {
    iVar3 = *(int *)(param_3 + -4);
  }
  if (iVar3 != 0) {
    FUN_0089ee60(&local_40,0,0x20);
    FUN_00416cd0(local_30,3,local_40,
                 *(undefined8 *)(&DAT_01e258c0 + (ulonglong)*(byte *)(param_1 + 0xe8) * 8),
                 &DAT_008afc58);
    FUN_00414b50(&local_38,&DAT_008afc68);
    if (*(byte *)(param_1 + 0xe8) < 8) {
      bVar4 = ((int)CONCAT71((int7)((ulonglong)param_1 >> 8),1) <<
               (*(byte *)(param_1 + 0xe8) & 0x1f) & 6U) != 0;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      FUN_00416ad0(&local_38,&DAT_008afc7c);
    }
    iVar3 = 0;
    if (param_3 != 0) {
      iVar3 = *(int *)(param_3 + -4);
    }
    iVar2 = 1;
    if (0 < iVar3) {
      do {
        cVar1 = FUN_008791b0(param_3,iVar2,local_38);
        if (cVar1 == '\0') {
          cVar1 = FUN_008791b0(param_3,iVar2,local_30[0]);
          if (cVar1 != '\0') {
            param_4 = '\x01';
          }
        }
        else {
          param_4 = '\x01';
          FUN_00416ad0(param_2,&DAT_008afc8c);
        }
        FUN_00416780(&local_48,*(undefined2 *)(param_3 + -2 + (longlong)iVar2 * 2));
        FUN_00416ad0(param_2,local_48);
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    if (param_4 != '\0') {
      FUN_00416cd0(param_2,3,&DAT_008afc9c,*param_2,&DAT_008afc9c);
    }
  }
  FUN_00414560(&local_48,4);
  return param_2;
}

