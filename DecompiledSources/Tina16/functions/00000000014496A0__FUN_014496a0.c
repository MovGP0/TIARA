/* Ghidra address: 014496a0 */
/* Ghidra symbol: FUN_014496a0 */


void FUN_014496a0(char param_1,char param_2,double param_3,double param_4,double param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                 undefined8 param_10,undefined8 param_11,undefined8 param_12,longlong param_13)

{
  longlong lVar1;
  char *pcVar2;
  undefined8 *puVar3;
  char *pcVar4;
  longlong lVar5;
  
  if (*(char *)(param_13 + 0x92) == '\0') {
    pcVar2 = *(char **)(param_13 + 0xb18);
    if (pcVar2 == (char *)0x0) {
      pcVar2 = (char *)FUN_004095c0(0x40);
      *(char **)(param_13 + 0xb18) = pcVar2;
      if (pcVar2 == (char *)0x0) {
        FUN_00ef4260(1,param_13);
      }
      *pcVar2 = param_1;
      pcVar2[0x10] = param_2;
      *(double *)(pcVar2 + 8) = param_3;
      *(double *)(pcVar2 + 0x18) = param_4;
      *(double *)(pcVar2 + 0x20) = param_5;
      *(undefined8 *)(pcVar2 + 0x28) = param_6;
      pcVar2[0x38] = '\0';
      pcVar2[0x39] = '\0';
      pcVar2[0x3a] = '\0';
      pcVar2[0x3b] = '\0';
      pcVar2[0x3c] = '\0';
      pcVar2[0x3d] = '\0';
      pcVar2[0x3e] = '\0';
      pcVar2[0x3f] = '\0';
      puVar3 = (undefined8 *)FUN_004095c0(0x38);
      *(undefined8 **)(pcVar2 + 0x30) = puVar3;
      if (puVar3 == (undefined8 *)0x0) {
        FUN_00ef4260(1,param_13);
      }
      *puVar3 = param_7;
      puVar3[1] = param_8;
      puVar3[2] = param_9;
      puVar3[3] = param_10;
      puVar3[4] = param_11;
      puVar3[5] = param_12;
      puVar3[6] = 0;
    }
    else {
      for (; ((((*pcVar2 != param_1 || (pcVar2[0x10] != param_2)) ||
               (*(double *)(pcVar2 + 8) != param_3)) ||
              ((*(double *)(pcVar2 + 0x18) != param_4 || (*(double *)(pcVar2 + 0x20) != param_5))))
             && (*(longlong *)(pcVar2 + 0x38) != 0)); pcVar2 = *(char **)(pcVar2 + 0x38)) {
      }
      if (((*pcVar2 == param_1) && (pcVar2[0x10] == param_2)) &&
         ((*(double *)(pcVar2 + 8) == param_3 &&
          ((*(double *)(pcVar2 + 0x18) == param_4 && (*(double *)(pcVar2 + 0x20) == param_5)))))) {
        lVar1 = *(longlong *)(pcVar2 + 0x30);
        do {
          lVar5 = lVar1;
          lVar1 = *(longlong *)(lVar5 + 0x30);
        } while (lVar1 != 0);
        puVar3 = (undefined8 *)FUN_004095c0(0x38);
        *(undefined8 **)(lVar5 + 0x30) = puVar3;
        if (puVar3 == (undefined8 *)0x0) {
          FUN_00ef4260(1,param_13);
        }
        *puVar3 = param_7;
        puVar3[1] = param_8;
        puVar3[2] = param_9;
        puVar3[3] = param_10;
        puVar3[4] = param_11;
        puVar3[5] = param_12;
        puVar3[6] = 0;
      }
      else {
        pcVar4 = (char *)FUN_004095c0(0x40);
        *(char **)(pcVar2 + 0x38) = pcVar4;
        if (pcVar4 == (char *)0x0) {
          FUN_00ef4260(1,param_13);
        }
        *pcVar4 = param_1;
        pcVar4[0x10] = param_2;
        *(double *)(pcVar4 + 8) = param_3;
        *(double *)(pcVar4 + 0x18) = param_4;
        *(double *)(pcVar4 + 0x20) = param_5;
        *(undefined8 *)(pcVar4 + 0x28) = param_6;
        pcVar4[0x38] = '\0';
        pcVar4[0x39] = '\0';
        pcVar4[0x3a] = '\0';
        pcVar4[0x3b] = '\0';
        pcVar4[0x3c] = '\0';
        pcVar4[0x3d] = '\0';
        pcVar4[0x3e] = '\0';
        pcVar4[0x3f] = '\0';
        puVar3 = (undefined8 *)FUN_004095c0(0x38);
        *(undefined8 **)(pcVar4 + 0x30) = puVar3;
        if (puVar3 == (undefined8 *)0x0) {
          FUN_00ef4260(1,param_13);
        }
        *puVar3 = param_7;
        puVar3[1] = param_8;
        puVar3[2] = param_9;
        puVar3[3] = param_10;
        puVar3[4] = param_11;
        puVar3[5] = param_12;
        puVar3[6] = 0;
      }
    }
  }
  return;
}

