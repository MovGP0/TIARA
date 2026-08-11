/* Ghidra address: 0043f330 */
/* Ghidra symbol: FUN_0043f330 */


undefined8 * FUN_0043f330(undefined8 *param_1,uint param_2,char param_3)

{
  undefined2 *puVar1;
  int iVar2;
  ulonglong uVar3;
  ushort *puVar4;
  uint uVar5;
  
  uVar3 = (ulonglong)param_2;
  if (param_2 < 10000) {
    if (param_2 < 100) {
      uVar5 = (9 < param_2) + 1;
    }
    else {
      uVar5 = (999 < param_2) + 3;
    }
  }
  else if (param_2 < 1000000) {
    uVar5 = (99999 < param_2) + 5;
  }
  else if (param_2 < 100000000) {
    uVar5 = (9999999 < param_2) + 7;
  }
  else {
    uVar5 = (999999999 < param_2) + 9;
  }
  FUN_004169f0(param_1);
  puVar1 = (undefined2 *)FUN_00416740(*param_1);
  *puVar1 = 0x2d;
  puVar4 = puVar1 + param_3;
  if (2 < uVar5) {
    do {
      iVar2 = (int)uVar3;
      uVar3 = uVar3 / 100;
      param_2 = (uint)uVar3;
      uVar5 = uVar5 - 2;
      *(undefined4 *)(puVar4 + (int)uVar5) =
           *(undefined4 *)(&DAT_01dbfb50 + (ulonglong)(iVar2 + param_2 * -100) * 4);
    } while (2 < (int)uVar5);
  }
  if (uVar5 == 2) {
    *(undefined4 *)puVar4 = *(undefined4 *)(&DAT_01dbfb50 + (ulonglong)param_2 * 4);
  }
  else {
    *puVar4 = (ushort)param_2 | 0x30;
  }
  return param_1;
}

