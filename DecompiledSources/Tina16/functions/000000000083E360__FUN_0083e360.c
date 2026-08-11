/* Ghidra address: 0083e360 */
/* Ghidra symbol: FUN_0083e360 */


void FUN_0083e360(longlong param_1,ushort *param_2)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  int local_30;
  int local_2c;
  
  uVar5 = *(undefined8 *)(param_1 + 0x508);
  pcVar3 = (code *)FUN_00411550(uVar5,0xffb5);
  (*pcVar3)(uVar5,param_2);
  if (0x1f < *param_2) {
    uVar5 = *(undefined8 *)(param_1 + 0x508);
    pcVar3 = (code *)FUN_00411550(uVar5,0xffab);
    cVar1 = (*pcVar3)(uVar5,*param_2);
    if (cVar1 == '\0') {
      *param_2 = 0;
      thunk_FUN_03f3ed6d(0);
    }
  }
  uVar4 = (ulonglong)*param_2;
  if (uVar4 < 0x17) {
    if ((uVar4 != 0x16) && (uVar4 != 8)) {
      if (uVar4 != 9) {
        if (uVar4 == 0xd) {
          uVar5 = FUN_0065b870(param_1);
          thunk_FUN_041b2403(uVar5,0xb0,&local_30,&local_2c);
          if ((local_30 == 0) && (iVar2 = FUN_008350e0(param_1), local_2c == iVar2)) {
            FUN_0083e590(param_1);
          }
          else {
            FUN_00680ad0(param_1);
          }
          *param_2 = 0;
        }
        goto LAB_0083e48f;
      }
LAB_0083e41e:
      *param_2 = 0;
      goto LAB_0083e48f;
    }
  }
  else if (uVar4 != 0x18) {
    if (uVar4 == 0x1b) goto LAB_0083e41e;
    if (0xffdf < uVar4 - 0x20) goto LAB_0083e48f;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x508);
  pcVar3 = (code *)FUN_00411550(uVar5,0xffa9);
  cVar1 = (*pcVar3)(uVar5);
  if (cVar1 == '\0') {
    *param_2 = 0;
  }
LAB_0083e48f:
  if (*param_2 != 0) {
    FUN_00834ed0(param_1,param_2);
  }
  return;
}

