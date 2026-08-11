/* Ghidra address: 01b05c40 */
/* Ghidra symbol: FUN_01b05c40 */


char FUN_01b05c40(longlong param_1,int param_2,undefined8 *param_3,short *param_4,byte *param_5,
                 undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,int *param_9)

{
  short *psVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined1 local_2a;
  char local_29;
  
  cVar4 = '\0';
  do {
    if ((cVar4 != '\0') || (param_2 < *param_9)) {
      return cVar4;
    }
    *param_3 = *(undefined8 *)(param_1 + -8 + (longlong)*param_9 * 8);
    psVar1 = (short *)FUN_01d3a780(*(undefined8 *)PTR_DAT_020036c8,*(undefined2 *)*param_3);
    *param_4 = *psVar1;
    if (((*param_4 == 0x10) || (((*param_4 == 0xd9 || (*param_4 == 0xda)) || (*param_4 == 0xf)))) ||
       (((*param_4 == 0xa4 || (*param_4 == 0xa6)) || (*param_4 == 0xa7)))) {
      FUN_01b05ad0(*param_3,2,0,&local_29,&local_2a,param_5);
      if (local_29 == '\x05') {
        cVar4 = '\x01';
        uVar2 = (ulonglong)*param_5;
        if (uVar2 < 7) {
          if (uVar2 == 6) {
            puVar3 = (undefined8 *)FUN_01b05ad0(*param_3,2,1,&local_29,&local_2a,param_5);
            *param_6 = *puVar3;
            puVar3 = (undefined8 *)FUN_01b05ad0(*param_3,2,2,&local_29,&local_2a,param_5);
            *param_7 = *puVar3;
            *param_8 = 0;
          }
          else if (uVar2 - 1 < 3) {
LAB_01b05d51:
            *param_6 = 0;
            *param_7 = 0;
            *param_8 = 0;
          }
          else {
            if (uVar2 == 4) goto LAB_01b05d80;
            if (uVar2 == 5) {
              puVar3 = (undefined8 *)FUN_01b05ad0(*param_3,2,1,&local_29,&local_2a,param_5);
              *param_6 = *puVar3;
              puVar3 = (undefined8 *)FUN_01b05ad0(*param_3,2,2,&local_29,&local_2a,param_5);
              *param_7 = *puVar3;
              *param_8 = 0;
            }
          }
        }
        else if (uVar2 == 7) {
LAB_01b05d80:
          puVar3 = (undefined8 *)FUN_01b05ad0(*param_3,2,1,&local_29,&local_2a,param_5);
          *param_6 = *puVar3;
          puVar3 = (undefined8 *)FUN_01b05ad0(*param_3,2,2,&local_29,&local_2a,param_5);
          *param_7 = *puVar3;
          puVar3 = (undefined8 *)FUN_01b05ad0(*param_3,2,3,&local_29,&local_2a,param_5);
          *param_8 = *puVar3;
        }
        else if (uVar2 - 8 < 4) goto LAB_01b05d51;
      }
    }
    *param_9 = *param_9 + 1;
  } while( true );
}

