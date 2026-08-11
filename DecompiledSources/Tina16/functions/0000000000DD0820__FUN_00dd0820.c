/* Ghidra address: 00dd0820 */
/* Ghidra symbol: FUN_00dd0820 */


undefined *
FUN_00dd0820(ulonglong param_1,char param_2,char param_3,double *param_4,double *param_5)

{
  undefined *puVar1;
  
  if (param_3 == '\x01') {
    if (param_2 == '\0') {
      *param_5 = -1.0;
      *param_4 = *(double *)(&DAT_0202daa0 + (param_1 & 0xff) * 2);
      puVar1 = (undefined *)0x1;
    }
    else if (param_2 == '\x01') {
      *param_4 = 6.0;
      *param_5 = *(double *)(&DAT_0202daa0 + (param_1 & 0xff) * 2);
      puVar1 = (undefined *)0x1;
    }
    else {
      puVar1 = (undefined *)0x0;
      *param_5 = *(double *)(&DAT_0202daa0 + (param_1 & 0xff) * 2);
      *param_4 = *(double *)(&DAT_0202daa0 + (param_1 & 0xff) * 2);
    }
  }
  else if (param_3 == '\x02') {
    if (param_2 == '\0') {
      *param_5 = -1.0;
      *param_4 = *(double *)(&DAT_0202daa0 + (param_1 & 0xff) * 2) +
                 *(double *)(&DAT_01ed57a0 + (param_1 & 0xff) * 0x10);
      puVar1 = &DAT_0202da01;
    }
    else if (param_2 == '\x01') {
      *param_4 = 6.0;
      *param_5 = *(double *)(&DAT_0202daa0 + (param_1 & 0xff) * 2) +
                 *(double *)(&DAT_01ed57a8 + (param_1 & 0xff) * 0x10);
      puVar1 = (undefined *)0x1;
    }
    else {
      puVar1 = (undefined *)0x0;
      *param_5 = *(double *)(&DAT_0202daa0 + (param_1 & 0xff) * 2);
      *param_4 = *(double *)(&DAT_0202daa0 + (param_1 & 0xff) * 2);
    }
  }
  else if (param_2 == '\0') {
    *param_5 = -1.0;
    *param_4 = *(double *)(&DAT_0202daa0 + (param_1 & 0xff) * 2);
    puVar1 = (undefined *)0x1;
  }
  else if (param_2 == '\x01') {
    *param_4 = 6.0;
    *param_5 = *(double *)(&DAT_0202daa0 + (param_1 & 0xff) * 2);
    puVar1 = (undefined *)0x1;
  }
  else {
    puVar1 = (undefined *)0x0;
    *param_5 = *(double *)(&DAT_0202daa0 + (param_1 & 0xff) * 2);
    *param_4 = *(double *)(&DAT_0202daa0 + (param_1 & 0xff) * 2);
  }
  return puVar1;
}

