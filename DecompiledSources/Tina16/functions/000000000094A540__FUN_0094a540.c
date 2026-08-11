/* Ghidra address: 0094a540 */
/* Ghidra symbol: FUN_0094a540 */


void FUN_0094a540(longlong *param_1,longlong *param_2,char param_3)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  char cVar4;
  
  if ((char)param_1[5] == '\0') {
    if (param_3 == '\0') {
      uVar2 = (**(code **)(*(longlong *)param_1[2] + 0x1c0))((longlong *)param_1[2],param_2);
      if ((uVar2 & 0x10) != 0) {
        uVar2 = (**(code **)(*(longlong *)param_1[1] + 0x1c0))((longlong *)param_1[1],param_2);
        if ((uVar2 & 0x10) == 0) {
          param_1[2] = (longlong)param_2;
          *(undefined1 *)(param_1 + 3) = 1;
        }
        else {
          param_1[2] = 0;
          param_1[1] = 0;
          *(undefined1 *)(param_1 + 5) = 1;
        }
      }
    }
    else if (param_3 == '\x01') {
      uVar2 = (**(code **)(*(longlong *)param_1[1] + 0x1c0))((longlong *)param_1[1],param_2);
      if ((uVar2 & 0x20) != 0) {
        uVar1 = (**(code **)(*(longlong *)param_1[2] + 0x1c0))((longlong *)param_1[2],param_2);
        if (((uVar1 & 0x10) != 0) || ((uVar1 & 0x40) != 0)) {
          lVar3 = 0;
          cVar4 = (char)param_1[3];
          if (cVar4 == '\0') {
            lVar3 = (**(code **)(*param_2 + 0x158))(param_2);
            if (lVar3 == 0) {
              lVar3 = (**(code **)(*param_1 + 0x10))(param_1,param_2);
              cVar4 = '\x01';
            }
          }
          else if (cVar4 == '\x01') {
            lVar3 = (**(code **)(*param_2 + 0x158))(param_2);
            if (lVar3 == 0) {
              lVar3 = (**(code **)(*param_1 + 0x10))(param_1,param_2);
              cVar4 = '\0';
            }
          }
          if (lVar3 == 0) {
            param_1[2] = 0;
            param_1[1] = 0;
            *(undefined1 *)(param_1 + 5) = 1;
          }
          else {
            param_1[2] = lVar3;
            *(char *)(param_1 + 3) = cVar4;
          }
        }
      }
    }
  }
  return;
}

