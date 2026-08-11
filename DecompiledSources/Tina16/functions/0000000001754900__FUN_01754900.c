/* Ghidra address: 01754900 */
/* Ghidra symbol: FUN_01754900 */


void FUN_01754900(longlong param_1,undefined8 param_2)

{
  char cVar1;
  short sVar2;
  undefined1 *puVar3;
  char *pcVar4;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29 [9];
  
  sVar2 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))(*(longlong **)(param_1 + 0x28));
  cVar1 = FUN_0173cbb0(sVar2,2);
  if (cVar1 == '\0') {
    if (sVar2 == 0xac) {
      puVar3 = (undefined1 *)
               FUN_01cfde70(*(undefined8 *)(param_1 + 0x28),1,0,local_29,&local_2a,&local_2b);
      *(undefined1 *)(param_1 + 0x51) = *puVar3;
      *(undefined1 *)(param_1 + 0x53) = 0;
    }
    else {
      puVar3 = (undefined1 *)
               FUN_01cfde70(*(undefined8 *)(param_1 + 0x28),2,0,local_29,&local_2a,&local_2b);
      *(undefined1 *)(param_1 + 0x51) = *puVar3;
      pcVar4 = (char *)FUN_01cfde70(*(undefined8 *)(param_1 + 0x28),3,0,local_29,&local_2a,&local_2b
                                   );
      *(bool *)(param_1 + 0x53) = *pcVar4 == '\0';
    }
    if (((*(char *)(param_1 + 0x51) != *(char *)(param_1 + 0x50)) ||
        (*(char *)(param_1 + 0x53) != *(char *)(param_1 + 0x52))) ||
       (*(double *)(param_1 + 0x40) != *(double *)(param_1 + 0x38))) {
      FUN_0173d100(param_1,param_2,*PTR_DAT_02002480,*PTR_DAT_02001560);
      FUN_0173d2c0(param_1,param_2);
    }
  }
  return;
}

