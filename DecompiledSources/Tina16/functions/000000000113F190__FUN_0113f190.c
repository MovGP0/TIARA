/* Ghidra address: 0113f190 */
/* Ghidra symbol: FUN_0113f190 */


void FUN_0113f190(longlong param_1,longlong *param_2)

{
  char cVar1;
  short sVar2;
  undefined8 uVar3;
  double *pdVar4;
  bool bVar5;
  double dVar6;
  undefined1 local_3b;
  undefined1 local_3a;
  byte local_39 [25];
  
  cVar1 = FUN_0198a580(param_2);
  if (((cVar1 != '\x04') ||
      ((((sVar2 = (**(code **)(*param_2 + 0xf8))(param_2), sVar2 != 0x10 &&
         (sVar2 = (**(code **)(*param_2 + 0xf8))(param_2), sVar2 != 0xd9)) &&
        (sVar2 = (**(code **)(*param_2 + 0xf8))(param_2), sVar2 != 0xda)) &&
       (sVar2 = (**(code **)(*param_2 + 0xf8))(param_2), sVar2 != 0xf)))) &&
     (((sVar2 = (**(code **)(*param_2 + 0xf8))(param_2), sVar2 != 0xa4 &&
       (sVar2 = (**(code **)(*param_2 + 0xf8))(param_2), sVar2 != 0xa6)) &&
      (sVar2 = (**(code **)(*param_2 + 0xf8))(param_2), sVar2 != 0xa7)))) {
    return;
  }
  uVar3 = FUN_01cfde70(param_2,2,0,&local_3a,&local_3b,local_39);
  if (local_39[0] < 8) {
    bVar5 = ((int)CONCAT71((int7)((ulonglong)uVar3 >> 8),1) << (local_39[0] & 0x1f) & 0x90U) != 0;
  }
  else {
    bVar5 = false;
  }
  if (bVar5) {
    pdVar4 = (double *)FUN_01cfde70(param_2,2,2,&local_3a,&local_3b,local_39);
    if ((*(char *)(param_1 + 0x2f) == '\0') ||
       (*pdVar4 <= *(double *)(param_1 + 0x20) && *(double *)(param_1 + 0x20) != *pdVar4)) {
      *(undefined1 *)(param_1 + 0x2f) = 4;
      *(double *)(param_1 + 0x20) = *pdVar4;
    }
  }
  else if (local_39[0] == 5) {
    pdVar4 = (double *)FUN_01cfde70(param_2,2,2,&local_3a,&local_3b,local_39);
    if ((*(char *)(param_1 + 0x2f) == '\0') ||
       (*pdVar4 <= *(double *)(param_1 + 0x20) && *(double *)(param_1 + 0x20) != *pdVar4)) {
      *(undefined1 *)(param_1 + 0x2f) = 2;
      *(double *)(param_1 + 0x20) = *pdVar4;
    }
  }
  else if (local_39[0] == 6) {
    pdVar4 = (double *)FUN_01cfde70(param_2,2,2,&local_3a,&local_3b,local_39);
    if ((*(char *)(param_1 + 0x2f) == '\0') ||
       (*pdVar4 <= *(double *)(param_1 + 0x20) && *(double *)(param_1 + 0x20) != *pdVar4)) {
      *(undefined1 *)(param_1 + 0x2f) = 3;
      *(double *)(param_1 + 0x20) = *pdVar4;
    }
  }
  else if ((local_39[0] == 3) && (*(byte *)(param_1 + 0x2f) < 2)) {
    dVar6 = 0.0;
    cVar1 = '\x03';
    do {
      pdVar4 = (double *)FUN_01cfde70(param_2,2,cVar1,&local_3a,&local_3b,local_39);
      dVar6 = dVar6 + *pdVar4;
      cVar1 = cVar1 + '\x01';
    } while (cVar1 != '\t');
    if ((0.0 < dVar6) &&
       ((*(char *)(param_1 + 0x2f) == '\0' || (1.0 / dVar6 < *(double *)(param_1 + 0x20))))) {
      *(undefined1 *)(param_1 + 0x2f) = 1;
      *(double *)(param_1 + 0x20) = 1.0 / dVar6;
    }
  }
  return;
}

