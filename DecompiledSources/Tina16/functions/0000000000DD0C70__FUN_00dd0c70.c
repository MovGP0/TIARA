/* Ghidra address: 00dd0c70 */
/* Ghidra symbol: FUN_00dd0c70 */


void FUN_00dd0c70(ulonglong param_1,byte param_2,char param_3,double *param_4,double *param_5)

{
  if (param_3 == '\x01') {
    if (param_2 < 6) {
      if (param_2 == 5) {
        *param_4 = *(double *)(&DAT_01ed5618 + (param_1 & 0xff) * 0x18) * 2.0;
        *param_5 = (5.0 / (5.0 - *(double *)(&DAT_0202daa0 + (param_1 & 0xff) * 2)) - 1.0) *
                   *param_4;
      }
      else if (param_2 < 3) {
        if (param_2 == 2) {
          *param_4 = *(double *)(&DAT_01ed5618 + (param_1 & 0xff) * 0x18) * 2.0;
          *param_5 = (5.0 / (5.0 - *(double *)(&DAT_0202daa0 + (param_1 & 0xff) * 2)) - 1.0) *
                     *param_4;
        }
        else if (param_2 == 0) {
          *param_5 = *(double *)(&DAT_01ed5620 + (param_1 & 0xff) * 0x18);
          *param_4 = (5.0 / *(double *)(&DAT_01ed53e8 + (param_1 & 0xff) * 0x10) - 1.0) * *param_5;
        }
        else if (param_2 == 1) {
          *param_4 = *(double *)(&DAT_01ed5618 + (param_1 & 0xff) * 0x18);
          *param_5 = (5.0 / (5.0 - *(double *)(&DAT_01ed53e0 + (param_1 & 0xff) * 0x10)) - 1.0) *
                     *param_4;
        }
      }
      else if (param_2 == 3) {
        *param_4 = *(double *)(&DAT_01ed5468 + (param_1 & 0xff) * 8) * 2.0;
        *param_5 = *(double *)(&DAT_01ed5468 + (param_1 & 0xff) * 8) * 2.0;
      }
      else if (param_2 == 4) {
        *param_4 = *(double *)(&DAT_01ed5618 + (param_1 & 0xff) * 0x18) * 2.0;
        *param_5 = (5.0 / (5.0 - *(double *)(&DAT_0202daa0 + (param_1 & 0xff) * 2)) - 1.0) *
                   *param_4;
      }
    }
    else if (param_2 == 6) {
      *param_4 = *(double *)(&DAT_01ed5618 + (param_1 & 0xff) * 0x18) * 2.0;
      *param_5 = (5.0 / (5.0 - *(double *)(&DAT_0202daa0 + (param_1 & 0xff) * 2)) - 1.0) * *param_4;
    }
    else if (param_2 == 7) {
      *param_4 = *(double *)(&DAT_01ed5618 + (param_1 & 0xff) * 0x18) * 2.0;
      *param_5 = (5.0 / (5.0 - *(double *)(&DAT_0202daa0 + (param_1 & 0xff) * 2)) - 1.0) * *param_4;
    }
    else if (param_2 == 8) {
      *param_5 = *(double *)(&DAT_01ed5618 + (param_1 & 0xff) * 0x18);
      *param_4 = (5.0 / *(double *)(&DAT_01ed53e8 + (param_1 & 0xff) * 0x10) - 1.0) * *param_5;
    }
    else if (param_2 == 9) {
      *param_4 = *(double *)(&DAT_01ed5618 + (param_1 & 0xff) * 0x18);
      *param_5 = (5.0 / (5.0 - *(double *)(&DAT_01ed53e0 + (param_1 & 0xff) * 0x10)) - 1.0) *
                 *param_4;
    }
  }
  else if (param_2 < 6) {
    if (param_2 == 5) {
      *param_4 = *(double *)(&DAT_01ed5558 + (param_1 & 0xff) * 0x18) * 2.0;
      *param_5 = (5.0 / (5.0 - *(double *)(&DAT_0202daa0 + (param_1 & 0xff) * 2)) - 1.0) * *param_4;
    }
    else if (param_2 < 3) {
      if (param_2 == 2) {
        *param_4 = *(double *)(&DAT_01ed5558 + (param_1 & 0xff) * 0x18) * 2.0;
        *param_5 = (5.0 / (5.0 - *(double *)(&DAT_0202daa0 + (param_1 & 0xff) * 2)) - 1.0) *
                   *param_4;
      }
      else if (param_2 == 0) {
        *param_5 = *(double *)(&DAT_01ed5560 + (param_1 & 0xff) * 0x18);
        *param_4 = (5.0 / *(double *)(&DAT_01ed53e8 + (param_1 & 0xff) * 0x10) - 1.0) * *param_5;
      }
      else if (param_2 == 1) {
        *param_4 = *(double *)(&DAT_01ed5558 + (param_1 & 0xff) * 0x18);
        *param_5 = (5.0 / (5.0 - *(double *)(&DAT_01ed53e0 + (param_1 & 0xff) * 0x10)) - 1.0) *
                   *param_4;
      }
    }
    else if (param_2 == 3) {
      *param_4 = *(double *)(&DAT_01ed5468 + (param_1 & 0xff) * 8) * 2.0;
      *param_5 = *(double *)(&DAT_01ed5468 + (param_1 & 0xff) * 8) * 2.0;
    }
    else if (param_2 == 4) {
      *param_4 = *(double *)(&DAT_01ed5558 + (param_1 & 0xff) * 0x18) * 2.0;
      *param_5 = (5.0 / (5.0 - *(double *)(&DAT_0202daa0 + (param_1 & 0xff) * 2)) - 1.0) * *param_4;
    }
  }
  else if (param_2 == 6) {
    *param_4 = *(double *)(&DAT_01ed5558 + (param_1 & 0xff) * 0x18) * 2.0;
    *param_5 = (5.0 / (5.0 - *(double *)(&DAT_0202daa0 + (param_1 & 0xff) * 2)) - 1.0) * *param_4;
  }
  else if (param_2 == 7) {
    *param_4 = *(double *)(&DAT_01ed5618 + (param_1 & 0xff) * 0x18) * 2.0;
    *param_5 = (5.0 / (5.0 - *(double *)(&DAT_0202daa0 + (param_1 & 0xff) * 2)) - 1.0) * *param_4;
  }
  else if (param_2 == 8) {
    *param_5 = *(double *)(&DAT_01ed5618 + (param_1 & 0xff) * 0x18);
    *param_4 = (5.0 / *(double *)(&DAT_01ed53e8 + (param_1 & 0xff) * 0x10) - 1.0) * *param_5;
  }
  else if (param_2 == 9) {
    *param_4 = *(double *)(&DAT_01ed5618 + (param_1 & 0xff) * 0x18);
    *param_5 = (5.0 / (5.0 - *(double *)(&DAT_01ed53e0 + (param_1 & 0xff) * 0x10)) - 1.0) * *param_4
    ;
  }
  return;
}

