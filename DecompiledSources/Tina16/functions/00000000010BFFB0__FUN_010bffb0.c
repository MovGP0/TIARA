/* Ghidra address: 010bffb0 */
/* Ghidra symbol: FUN_010bffb0 */


void FUN_010bffb0(byte *param_1,undefined1 *param_2,undefined1 *param_3,undefined4 param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  byte *pbVar5;
  bool bVar6;
  undefined1 local_48 [24];
  
  *param_3 = 0;
  *param_2 = 0;
  FUN_00b909e0(local_48,param_4);
  pbVar5 = param_1;
  iVar3 = FUN_00416fd0(local_48,param_1,1);
  if (0 < iVar3) {
    FUN_00b909e0(local_48,param_4);
    FUN_00414ff0(param_3,local_48);
    pbVar5 = (byte *)0x0;
    FUN_00415260(param_1,0xff,iVar3,0x50);
  }
  bVar1 = *param_1;
  bVar2 = param_1[(int)(uint)bVar1];
  bVar4 = bVar2 - 0x30;
  if (bVar4 < 0x10) {
    bVar6 = ((int)CONCAT62((int6)((ulonglong)pbVar5 >> 0x10),1) << (bVar4 & 0x1f) & 0x3ffU) != 0;
  }
  else {
    bVar6 = false;
  }
  if (!bVar6) {
    *param_2 = 1;
    param_2[1] = bVar2;
    FUN_00415260(param_1,0xff,(uint)bVar1,0x50);
  }
  return;
}

