/* Ghidra address: 00dd4210 */
/* Ghidra symbol: FUN_00dd4210 */


char * FUN_00dd4210(char *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                   undefined1 param_5,char *param_6,char *param_7,undefined1 param_8,
                   undefined8 param_9,undefined8 param_10,longlong param_11)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined8 local_res10 [3];
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_res10[0] = param_2;
  pcVar2 = (char *)FUN_00410920(param_1,local_res10);
  if (pcVar2 != (char *)0xffffffffffffffff) {
    FUN_00dd32d0(pcVar2,param_3,param_3,param_4,param_5,param_8);
    *(undefined8 *)(pcVar2 + 0x28) = param_9;
    *(undefined8 *)(pcVar2 + 0x30) = param_10;
    if (param_11 == 0) {
      iVar1 = 0;
      pcVar3 = pcVar2 + 0x38;
      do {
        *pcVar3 = (char)iVar1;
        *(undefined8 *)(pcVar3 + 8) =
             *(undefined8 *)(&DAT_01ed5768 + (ulonglong)(byte)pcVar2[6] * 8);
        FUN_00dd0c70(pcVar2[6],*pcVar3,pcVar2[0x20],local_30,&local_38);
        *(undefined8 *)(pcVar3 + 0x10) = local_38;
        *(undefined8 *)(pcVar3 + 0x18) = local_30[0];
        iVar1 = iVar1 + 1;
        pcVar3 = pcVar3 + 0x20;
      } while (iVar1 != 10);
      iVar1 = 0xb;
      pcVar3 = pcVar2 + 0x158;
      do {
        *pcVar3 = '\f';
        pcVar3 = pcVar3 + 0x20;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    else {
      iVar1 = 0;
      iVar6 = 0;
      do {
        lVar4 = (longlong)iVar6;
        if (*(char *)(param_11 + lVar4 * 0x20) != '\f') {
          lVar5 = (longlong)iVar1;
          pcVar2[lVar5 * 0x20 + 0x38] = *(char *)(param_11 + lVar4 * 0x20);
          *(undefined8 *)(pcVar2 + lVar5 * 0x20 + 0x40) =
               *(undefined8 *)(param_11 + 8 + lVar4 * 0x20);
          *(undefined8 *)(pcVar2 + lVar5 * 0x20 + 0x48) =
               *(undefined8 *)(param_11 + 0x10 + lVar4 * 0x20);
          *(undefined8 *)(pcVar2 + lVar5 * 0x20 + 0x50) =
               *(undefined8 *)(param_11 + 0x18 + lVar4 * 0x20);
          iVar1 = iVar1 + 1;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 != 0x14);
      if (iVar1 < 0x14) {
        pcVar3 = pcVar2 + (longlong)iVar1 * 0x20 + 0x38;
        do {
          *pcVar3 = '\f';
          iVar1 = iVar1 + 1;
          pcVar3 = pcVar3 + 0x20;
        } while (iVar1 != 0x14);
      }
    }
    *pcVar2 = *param_6;
    if ((*(double *)(pcVar2 + 0x28) <= -1e-30 && *(double *)(pcVar2 + 0x28) != -1e-30) &&
       (*(double *)(pcVar2 + 0x30) <= -1e-30 && *(double *)(pcVar2 + 0x30) != -1e-30)) {
      pcVar2[0x28] = '\0';
      pcVar2[0x29] = '\0';
      pcVar2[0x2a] = '\0';
      pcVar2[0x2b] = '\0';
      pcVar2[0x2c] = '\0';
      pcVar2[0x2d] = '\0';
      pcVar2[0x2e] = '\0';
      pcVar2[0x2f] = '\0';
      *(undefined8 *)(pcVar2 + 0x30) = *(undefined8 *)(pcVar2 + 0x28);
    }
    if (1e-30 < *(double *)(pcVar2 + 0x28)) {
      *param_6 = *param_6 + '\x01';
    }
    if (1e-30 < *(double *)(pcVar2 + 0x30)) {
      *param_6 = *param_6 + '\x01';
    }
    *param_6 = *param_6 + '\x02';
    pcVar2[5] = *param_7;
    *param_7 = *param_7;
    param_1 = pcVar2;
  }
  return param_1;
}

