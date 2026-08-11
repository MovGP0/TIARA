/* Ghidra address: 01613d10 */
/* Ghidra symbol: FUN_01613d10 */


void FUN_01613d10(longlong *param_1,undefined8 param_2)

{
  short sVar1;
  uint uVar2;
  ulonglong uVar3;
  bool bVar4;
  double dVar5;
  double *local_30 [3];
  
  (**(code **)(*param_1 + 0x2d0))(param_1,0,local_30);
  uVar3 = 0;
  dVar5 = (double)FUN_01613a40(param_2,0);
  *local_30[0] = dVar5;
  *(undefined4 *)(local_30[0] + 2) = 0;
  dVar5 = 0.0;
  sVar1 = (**(code **)(*param_1 + 0xf8))(param_1);
  if ((ushort)(sVar1 - 8U) < 8) {
    uVar2 = (int)CONCAT71((int7)(uVar3 >> 8),1) << ((byte)(sVar1 - 8U) & 0x1f);
    uVar3 = (ulonglong)uVar2;
    bVar4 = (uVar2 & 4) != 0;
  }
  else {
    bVar4 = false;
  }
  if (bVar4) {
    uVar3 = 0;
    dVar5 = (double)FUN_01613a40(param_2,1);
  }
  sVar1 = (**(code **)(*param_1 + 0xf8))(param_1);
  if ((ushort)(sVar1 - 8U) < 8) {
    bVar4 = ((int)CONCAT71((int7)(uVar3 >> 8),1) << ((byte)(sVar1 - 8U) & 0x1f) & 4U) != 0;
  }
  else {
    bVar4 = false;
  }
  if ((bVar4) && (0.0 <= dVar5)) {
    (**(code **)(*param_1 + 0x2d0))(param_1,2,local_30);
    *local_30[0] = dVar5;
    *(undefined1 *)(local_30[0] + 1) = 0;
  }
  return;
}

