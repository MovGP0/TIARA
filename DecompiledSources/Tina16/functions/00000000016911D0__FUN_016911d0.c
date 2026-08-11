/* Ghidra address: 016911d0 */
/* Ghidra symbol: FUN_016911d0 */


void FUN_016911d0(byte *param_1,byte *param_2,char *param_3,undefined1 *param_4)

{
  char cVar1;
  longlong lVar2;
  byte *pbVar3;
  byte local_138 [264];
  
  lVar2 = (ulonglong)*param_1 + 1;
  pbVar3 = local_138;
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pbVar3 = *param_1;
    param_1 = param_1 + 1;
    pbVar3 = pbVar3 + 1;
  }
  *param_3 = '\x01';
  if (local_138[0] == 0) {
    *param_3 = '\0';
  }
  else {
    cVar1 = FUN_00c535d0(local_138[*param_2]);
    if (cVar1 == '\0') {
      *param_3 = '\0';
    }
    else if (*param_2 < local_138[0]) {
      *param_2 = *param_2 + 1;
      do {
        cVar1 = FUN_00c535d0(local_138[*param_2]);
        if (cVar1 == '\0') {
          cVar1 = FUN_00c53600(local_138[*param_2]);
          if (cVar1 == '\0') break;
        }
        if (local_138[0] <= *param_2) break;
        *param_2 = *param_2 + 1;
      } while( true );
    }
  }
  if (*param_2 == local_138[0]) {
    *param_4 = 1;
  }
  if (*param_3 != '\0') {
    cVar1 = FUN_00c535d0(local_138[*param_2]);
    if ((cVar1 == '\0') && (cVar1 = FUN_00c53600(local_138[*param_2]), cVar1 == '\0')) {
      *param_2 = *param_2 - 1;
    }
  }
  return;
}

