/* Ghidra address: 006fa6a0 */
/* Ghidra symbol: FUN_006fa6a0 */


void FUN_006fa6a0(longlong *param_1,undefined8 param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined4 uVar3;
  code *pcVar4;
  bool bVar5;
  
  if (*(char *)((longlong)param_1 + 0x33a) != (char)param_2) {
    *(char *)((longlong)param_1 + 0x33a) = (char)param_2;
    (**(code **)(*param_1 + 0x180))(param_1);
    if (((*(ushort *)((longlong)param_1 + 0x34) & 1) == 0) && (param_1[0x68] != 0)) {
      if ((*(char *)(param_1[0x68] + 0x4dc) == '\0') &&
         ((*(char *)(param_1[0x68] + 0x4a0) == '\0' ||
          (*(char *)((longlong)param_1 + 0x33a) != '\x05')))) {
        bVar1 = *(byte *)((longlong)param_1 + 0x33a);
        if (bVar1 < 8) {
          bVar5 = ((int)CONCAT71((int7)((ulonglong)param_2 >> 8),1) << (bVar1 & 0x1f) & 0x18U) != 0;
        }
        else {
          bVar5 = false;
        }
        if (bVar5) {
          (**(code **)(*param_1 + 0x1c0))(param_1);
        }
        else if (bVar1 == 2) {
          FUN_006fd640(param_1[0x68]);
        }
        else {
          (**(code **)(*param_1 + 0x1c8))(param_1);
        }
        FUN_006fd920(param_1[0x68]);
        uVar3 = FUN_006fa830(param_1);
        FUN_006fb920(param_1[0x68],uVar3);
      }
      else {
        lVar2 = param_1[0x68];
        *(undefined4 *)(lVar2 + 0x4a4) = 0;
        *(undefined4 *)(lVar2 + 0x4a8) = 0;
        FUN_006fd640(lVar2);
      }
      lVar2 = param_1[0x68];
      pcVar4 = (code *)FUN_00411550(lVar2,0xffee);
      (*pcVar4)(lVar2);
    }
  }
  return;
}

