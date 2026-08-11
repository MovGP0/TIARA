/* Ghidra address: 0058c3d0 */
/* Ghidra symbol: FUN_0058c3d0 */


longlong * FUN_0058c3d0(longlong *param_1,longlong param_2,longlong param_3,char param_4)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  byte bVar4;
  undefined8 local_58;
  undefined8 local_50 [2];
  byte *local_40;
  byte *local_38;
  longlong local_30;
  
  local_58 = 0;
  local_50[0] = 0;
  FUN_00414480(param_1);
  local_40 = (byte *)(param_2 + 1);
  puVar1 = *(undefined8 **)(param_2 + 3 + (ulonglong)*local_40);
  local_38 = local_40;
  local_30 = param_2;
  if (puVar1 == (undefined8 *)0x0) {
    cVar2 = FUN_0058c240(param_2);
    bVar4 = 0;
    cVar2 = cVar2 * '\b' + '\x01';
    do {
      if ((*(byte *)(param_3 + ((longlong)(ulonglong)bVar4 >> 3)) >> ((ulonglong)bVar4 & 7) & 1) !=
          0) {
        if (*param_1 != 0) {
          FUN_00416ad0(param_1,&DAT_0058c5b8);
        }
        FUN_0043f750(&local_58,bVar4);
        FUN_00416ad0(param_1,local_58);
      }
      bVar4 = bVar4 + 1;
      cVar2 = cVar2 + -1;
    } while (cVar2 != '\0');
  }
  else {
    iVar3 = FUN_0058c2b0(param_2);
    cVar2 = FUN_0058c240(param_2);
    cVar2 = cVar2 * '\b';
    bVar4 = 0;
    do {
      if ((*(byte *)(param_3 + ((longlong)(ulonglong)bVar4 >> 3)) >> ((ulonglong)bVar4 & 7) & 1) !=
          0) {
        if (*param_1 != 0) {
          FUN_00416ad0(param_1,&DAT_0058c5b8);
        }
        FUN_005894c0(local_50,*puVar1,(uint)bVar4 + iVar3 * 8);
        FUN_00416ad0(param_1,local_50[0]);
      }
      bVar4 = bVar4 + 1;
      cVar2 = cVar2 + -1;
    } while (cVar2 != '\0');
  }
  if (param_4 != '\0') {
    FUN_00416cd0(param_1,3,&DAT_0058c5c8,*param_1,&LAB_0058c5d8);
  }
  FUN_00414560(&local_58,2);
  return param_1;
}

