/* Ghidra address: 01d080f0 */
/* Ghidra symbol: FUN_01d080f0 */


char FUN_01d080f0(longlong param_1,longlong param_2,char param_3,uint param_4,uint param_5,
                 int *param_6)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  
  cVar3 = '\0';
  if (param_3 == '\x01') {
    *param_6 = 0;
    while ((cVar3 == '\0' && (*param_6 < *(int *)(*(longlong *)(param_2 + 0x470) + 0x10)))) {
      plVar1 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_2 + 0x470),*param_6);
      if (param_1 == *plVar1) {
        lVar2 = FUN_004aeac0(*(undefined8 *)(param_2 + 0x470),*param_6);
        if ((param_4 == *(byte *)(lVar2 + 8)) && (param_5 == 0)) {
LAB_01d081bd:
          cVar3 = '\x01';
        }
        else {
          lVar2 = FUN_004aeac0(*(undefined8 *)(param_2 + 0x470),*param_6);
          if (param_4 == *(byte *)(lVar2 + 8)) {
            lVar2 = FUN_004aeac0(*(undefined8 *)(param_2 + 0x470),*param_6);
            if (param_5 == *(byte *)(lVar2 + 9)) goto LAB_01d081bd;
          }
        }
      }
      if (cVar3 == '\0') {
        *param_6 = *param_6 + 1;
      }
    }
  }
  if (param_3 == '\x02') {
    *param_6 = 0;
    while ((cVar3 == '\0' && (*param_6 < *(int *)(*(longlong *)(param_2 + 0x468) + 0x10)))) {
      plVar1 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_2 + 0x468),*param_6);
      if (param_1 == *plVar1) {
        lVar2 = FUN_004aeac0(*(undefined8 *)(param_2 + 0x468),*param_6);
        if ((param_4 == *(byte *)(lVar2 + 8)) && (param_5 == 0)) {
LAB_01d082a0:
          cVar3 = '\x01';
        }
        else {
          lVar2 = FUN_004aeac0(*(undefined8 *)(param_2 + 0x468),*param_6);
          if (param_4 == *(byte *)(lVar2 + 8)) {
            lVar2 = FUN_004aeac0(*(undefined8 *)(param_2 + 0x468),*param_6);
            if (param_5 == *(byte *)(lVar2 + 9)) goto LAB_01d082a0;
          }
        }
      }
      if (cVar3 == '\0') {
        *param_6 = *param_6 + 1;
      }
    }
  }
  return cVar3;
}

