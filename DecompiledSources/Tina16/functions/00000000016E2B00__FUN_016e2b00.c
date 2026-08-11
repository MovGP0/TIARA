/* Ghidra address: 016e2b00 */
/* Ghidra symbol: FUN_016e2b00 */


undefined4
FUN_016e2b00(undefined8 param_1,ulonglong param_2,ulonglong param_3,byte param_4,undefined8 param_5,
            undefined8 *param_6,double *param_7,undefined8 param_8,longlong param_9,char param_10)

{
  longlong lVar1;
  int iVar2;
  undefined8 in_RAX;
  undefined4 unaff_EDI;
  bool bVar3;
  double dVar4;
  
  if (param_4 < 8) {
    bVar3 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (param_4 & 0x1f) & 0xe2U) != 0;
  }
  else {
    bVar3 = false;
  }
  if (bVar3) {
    if (param_10 == '\0') {
      iVar2 = (int)param_3;
      param_3 = param_2;
    }
    else if (param_9 == 0) {
      param_3 = param_3 & 0xffffffff;
      iVar2 = FUN_01b057d0(param_1,param_3);
    }
    else {
      param_3 = param_3 & 0xffffffff;
      iVar2 = FUN_01b057d0(param_9,param_3);
    }
    *param_6 = param_8;
    *param_7 = 0.0;
    if ((*(byte *)(param_2 + 0x88) & 0x20) == 0) {
      if (param_4 < 8) {
        bVar3 = ((int)CONCAT71((int7)(param_3 >> 8),1) << (param_4 & 0x1f) & 0xa2U) != 0;
      }
      else {
        bVar3 = false;
      }
      if (bVar3) {
        if (*(char *)(param_2 + 0x32c) != '\0') {
          *param_7 = 1e-14;
        }
      }
      else if (((*(byte *)(param_2 + 0x88) & 0x40) == 0) ||
              ((*(byte *)(param_2 + 0x88) & 0x10) == 0)) {
        *param_7 = 0.0;
        if (param_4 == 6) {
          FUN_016e2450(param_1,param_2,iVar2,param_5,param_6,param_7,param_9,0);
        }
      }
      else {
        dVar4 = (double)FUN_01b08a00(param_2,0);
        *param_7 = 1.0 / dVar4;
        *(undefined8 *)(*(longlong *)(param_2 + 0x1b8) + (longlong)iVar2 * 8) = *param_6;
      }
      lVar1 = *(longlong *)(param_2 + 0x1b8);
      *(undefined8 *)(lVar1 + (longlong)iVar2 * 8) = *param_6;
      *(undefined8 *)(lVar1 + (longlong)(iVar2 + 1) * 8) = param_5;
      unaff_EDI = 0;
    }
    else {
      *(undefined8 *)(*(longlong *)(param_2 + 0x1b8) + (longlong)iVar2 * 8) = *param_6;
    }
  }
  else {
    *param_7 = 0.0;
    *param_6 = 0;
    unaff_EDI = 1;
  }
  return unaff_EDI;
}

