/* Ghidra address: 00dd2230 */
/* Ghidra symbol: FUN_00dd2230 */


char * FUN_00dd2230(char *param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4,
                   undefined1 param_5,char *param_6,char *param_7,undefined1 param_8,
                   undefined8 param_9,double param_10,double param_11,longlong param_12,
                   char param_13)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined8 local_res10 [3];
  undefined8 local_38;
  undefined8 local_30;
  
  local_res10[0] = param_2;
  pcVar2 = (char *)FUN_00410920(param_1,local_res10);
  if (pcVar2 != (char *)0xffffffffffffffff) {
    FUN_00dd1bc0(pcVar2,0,param_3,param_3,param_4,param_5,param_8);
    *(undefined8 *)(pcVar2 + 0x18) = param_9;
    pcVar2[0x21c] = param_13;
    pcVar2[0x218] = -1;
    pcVar2[0x219] = -1;
    pcVar2[0x21a] = -1;
    pcVar2[0x21b] = -1;
    if (param_12 == 0) {
      iVar5 = 0;
      iVar4 = 0;
      do {
        cVar1 = FUN_00dd0820(pcVar2[6],iVar4,pcVar2[0x10],&local_30,&local_38);
        if (cVar1 != '\0') {
          pcVar2[(longlong)iVar5 * 0x18 + 0x30] = (char)iVar4;
          if ((pcVar2[0x21c] != '\f') && ((char)iVar4 == pcVar2[0x21c])) {
            *(int *)(pcVar2 + 0x218) = iVar5;
          }
          *(undefined8 *)(pcVar2 + (longlong)iVar5 * 0x18 + 0x38) = local_38;
          *(undefined8 *)(pcVar2 + (longlong)iVar5 * 0x18 + 0x40) = local_30;
          iVar5 = iVar5 + 1;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 != 10);
      if (iVar5 < 0x14) {
        pcVar3 = pcVar2 + (longlong)iVar5 * 0x18 + 0x30;
        do {
          *pcVar3 = '\f';
          iVar5 = iVar5 + 1;
          pcVar3 = pcVar3 + 0x18;
        } while (iVar5 != 0x14);
      }
    }
    else {
      iVar5 = 0;
      iVar4 = 0;
      do {
        if (*(char *)(param_12 + (longlong)iVar4 * 0x18) != '\f') {
          pcVar2[(longlong)iVar5 * 0x18 + 0x30] = *(char *)(param_12 + (longlong)iVar4 * 0x18);
          if ((pcVar2[0x21c] != '\f') && (pcVar2[(longlong)iVar5 * 0x18 + 0x30] == pcVar2[0x21c])) {
            *(int *)(pcVar2 + 0x218) = iVar5;
          }
          *(undefined8 *)(pcVar2 + (longlong)iVar5 * 0x18 + 0x38) =
               *(undefined8 *)(param_12 + 8 + (longlong)iVar4 * 0x18);
          *(undefined8 *)(pcVar2 + (longlong)iVar5 * 0x18 + 0x40) =
               *(undefined8 *)(param_12 + 0x10 + (longlong)iVar4 * 0x18);
          iVar5 = iVar5 + 1;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 != 0x14);
      if (iVar5 < 0x14) {
        pcVar3 = pcVar2 + (longlong)iVar5 * 0x18 + 0x30;
        do {
          *pcVar3 = '\f';
          iVar5 = iVar5 + 1;
          pcVar3 = pcVar3 + 0x18;
        } while (iVar5 != 0x14);
      }
    }
    *pcVar2 = *param_6;
    if (*(double *)(pcVar2 + 0x18) <= -1e-30 && *(double *)(pcVar2 + 0x18) != -1e-30) {
      *(undefined8 *)(pcVar2 + 0x18) =
           *(undefined8 *)(&DAT_01ed54a8 + (ulonglong)(byte)pcVar2[6] * 0x18);
    }
    if (1e-30 <= param_10) {
      if (1e-30 <= param_11) {
        *(double *)(pcVar2 + 0x20) = param_11;
      }
      else {
        pcVar2[0x20] = '\0';
        pcVar2[0x21] = '\0';
        pcVar2[0x22] = '\0';
        pcVar2[0x23] = '\0';
        pcVar2[0x24] = '\0';
        pcVar2[0x25] = '\0';
        pcVar2[0x26] = '\0';
        pcVar2[0x27] = '\0';
      }
      *(double *)(pcVar2 + 0x28) = param_10;
    }
    else {
      *(undefined8 *)(pcVar2 + 0x20) =
           *(undefined8 *)(&DAT_01ed54a0 + (ulonglong)(byte)pcVar2[6] * 0x18);
      *(undefined8 *)(pcVar2 + 0x28) =
           *(undefined8 *)(&DAT_01ed5498 + (ulonglong)(byte)pcVar2[6] * 0x18);
    }
    if (1e-30 < *(double *)(pcVar2 + 0x18)) {
      *param_6 = *param_6 + '\x01';
    }
    if (1e-30 < *(double *)(pcVar2 + 0x20)) {
      *param_6 = *param_6 + '\x01';
    }
    *param_6 = *param_6 + '\x01';
    pcVar2[5] = *param_7;
    *param_7 = *param_7;
    param_1 = pcVar2;
  }
  return param_1;
}

