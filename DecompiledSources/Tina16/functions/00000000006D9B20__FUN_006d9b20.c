/* Ghidra address: 006d9b20 */
/* Ghidra symbol: FUN_006d9b20 */


void FUN_006d9b20(longlong param_1,char param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  bool bVar4;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  
  cVar3 = '\0';
  lVar2 = FUN_007f9b70(param_1,1);
  if (lVar2 != 0) {
    if (*(byte *)(lVar2 + 0x4d1) < 8) {
      bVar4 = ((int)CONCAT71((int7)((ulonglong)lVar2 >> 8),1) << (*(byte *)(lVar2 + 0x4d1) & 0x1f) &
              0x24U) != 0;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      local_38 = *(undefined4 *)(param_1 + 0x98);
      local_34 = *(undefined4 *)(param_1 + 0x9c);
      local_30 = FUN_00652390(param_1,&local_38,lVar2);
      iVar1 = FUN_0064d0b0(lVar2);
      if ((int)local_30 == iVar1) {
        iVar1 = FUN_0064d120(lVar2);
        if (local_30._4_4_ == iVar1) {
          cVar3 = '\x01';
          goto LAB_006d9bb5;
        }
      }
      cVar3 = '\0';
    }
  }
LAB_006d9bb5:
  if ((cVar3 != *(char *)(param_1 + 0x4aa)) && (*(char *)(param_1 + 0x4aa) = cVar3, param_2 != '\0')
     ) {
    FUN_00655b90(param_1);
  }
  return;
}

